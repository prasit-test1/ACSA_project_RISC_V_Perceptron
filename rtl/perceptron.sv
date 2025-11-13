`timescale 1ns/1ps
module perceptron #(
  parameter int INDEX_BITS = 7,
  parameter int HIST = 28,
  parameter int W_BITS = 8,
  parameter int THRESH = 68
)(
  input  logic                      clk,
  input  logic                      rst,  // active-high reset

  // predict request
  input  logic                      req_valid,
  input  logic [31:0]               req_pc,
  input  logic [HIST-1:0]           req_ghr,

  output logic                      req_ready,
  output logic                      pred_valid,
  output logic                      pred_taken,
  output logic signed [31:0]        pred_conf,

  // training request
  input  logic                      train_valid,
  input  logic [31:0]               train_pc,
  input  logic                      train_taken,
  input  logic [HIST-1:0]           train_ghr,
  output logic                      train_ready
);

  localparam int TOTAL_W = (HIST+1)*W_BITS;

  // derived indices
  wire [INDEX_BITS-1:0] req_idx   = req_pc[INDEX_BITS+1:2];
  wire [INDEX_BITS-1:0] train_idx = train_pc[INDEX_BITS+1:2];

  // mem signals
  logic rd_en;
  logic [INDEX_BITS-1:0] rd_idx;
  logic rd_v;
  logic [TOTAL_W-1:0] rd_data;

  logic wr_en;
  logic [INDEX_BITS-1:0] wr_idx;
  logic [TOTAL_W-1:0] wr_data;

  // instantiate memory (perceptron_mem should be in rtl/)
  perceptron_mem #(.INDEX_BITS(INDEX_BITS), .HIST(HIST), .W_BITS(W_BITS))
    mem (
      .clk(clk), .rst(rst),
      .rd_en(rd_en), .rd_idx(rd_idx), .rd_valid(rd_v), .rd_data(rd_data),
      .wr_en(wr_en), .wr_idx(wr_idx), .wr_data(wr_data)
    );

  // FSM state
  typedef enum logic [1:0] {IDLE=2'b00, PRED_READ=2'b01, PRED_CALC=2'b10, TRAIN_READ=2'b11} state_t;
  state_t state;

  // module-scope temporaries
  logic [HIST-1:0] ghr_latched;
  logic [TOTAL_W-1:0] packed_vec;
  logic signed [31:0] accum;

  // weight array: store sign-extended 32-bit weights for easy arithmetic
  logic signed [31:0] weight_arr [0:HIST];

  // loop/index vars (declared once)
  integer i;
  integer msb;

  // temporaries for arithmetic
  logic signed [31:0] tmpv;
  logic signed [31:0] delta;
  logic signed [31:0] t_signed;

  // moved out-of-block declaration
  logic wrong;

  assign req_ready = (state == IDLE);
  assign train_ready = (state == IDLE);

  // initialize outputs on reset and FSM
  always_ff @(posedge clk) begin
    if (rst) begin
      state <= IDLE;
      pred_valid <= 0;
      rd_en <= 0;
      wr_en <= 0;
      pred_taken <= 0;
      pred_conf <= 0;
      // zero locals
      ghr_latched <= '0;
      packed_vec <= '0;
      accum <= 0;
      for (i=0;i<=HIST;i=i+1) weight_arr[i] <= '0;
    end else begin
      pred_valid <= 0;
      case (state)
        IDLE: begin
          rd_en <= 0;
          wr_en <= 0;
          if (req_valid) begin
            rd_en <= 1;
            rd_idx <= req_idx;
            ghr_latched <= req_ghr;
            state <= PRED_READ;
          end else if (train_valid) begin
            rd_en <= 1;
            rd_idx <= train_idx;
            ghr_latched <= train_ghr;
            state <= TRAIN_READ;
          end
        end

        PRED_READ: begin
          rd_en <= 0;
          packed_vec <= rd_data;
          // unpack into sign-extended 32-bit weights
          // packing assumed: [ bias (MSB) | w1 | w2 | ... | wHIST (LSB) ]
          // bias:
          msb = TOTAL_W - 1;
          // extract W_BITS slice using variable part-select (msb -: W_BITS)
          weight_arr[0] <= $signed({{(32-W_BITS){packed_vec[msb -: W_BITS][W_BITS-1]}}, packed_vec[msb -: W_BITS]});
          for (i = 1; i <= HIST; i = i + 1) begin
            msb = TOTAL_W - 1 - W_BITS * i;
            weight_arr[i] <= $signed({{(32-W_BITS){packed_vec[msb -: W_BITS][W_BITS-1]}}, packed_vec[msb -: W_BITS]});
          end
          state <= PRED_CALC;
        end

        PRED_CALC: begin
          // compute dot product: accum = bias + sum( +/- weight_arr[i] )
          accum <= $signed(weight_arr[0]);
          for (i = 1; i <= HIST; i = i + 1) begin
            if (ghr_latched[i-1])
              accum <= accum + $signed(weight_arr[i]);
            else
              accum <= accum - $signed(weight_arr[i]);
          end
          pred_conf <= accum;
          pred_taken <= (accum >= 0);
          pred_valid <= 1;
          state <= IDLE;
        end

        TRAIN_READ: begin
          rd_en <= 0;
          packed_vec <= rd_data;
          // unpack into weight_arr (sign-extended)
          msb = TOTAL_W - 1;
          weight_arr[0] <= $signed({{(32-W_BITS){packed_vec[msb -: W_BITS][W_BITS-1]}}, packed_vec[msb -: W_BITS]});
          for (i = 1; i <= HIST; i = i + 1) begin
            msb = TOTAL_W - 1 - W_BITS * i;
            weight_arr[i] <= $signed({{(32-W_BITS){packed_vec[msb -: W_BITS][W_BITS-1]}}, packed_vec[msb -: W_BITS]});
          end

          // compute y
          accum <= $signed(weight_arr[0]);
          for (i = 1; i <= HIST; i = i + 1) begin
            if (ghr_latched[i-1])
              accum <= accum + $signed(weight_arr[i]);
            else
              accum <= accum - $signed(weight_arr[i]);
          end

          // signed target (+1 or -1)
          t_signed = train_taken ? 32'sd1 : -32'sd1;

          // wrong if sign(accum) != sign(t_signed)
          wrong = ( (accum >= 0 && t_signed < 0) || (accum < 0 && t_signed > 0) );

          // need_update if wrong or abs(accum) <= THRESH
          if ( wrong || ( (accum >= 0 ? accum : -accum) <= THRESH ) ) begin
            // build new packed vector
            logic [TOTAL_W-1:0] newpack;
            // update bias
            tmpv = $signed(weight_arr[0]) + t_signed;
            if (tmpv > (2**(W_BITS-1)-1)) tmpv = (2**(W_BITS-1)-1);
            if (tmpv < -(2**(W_BITS-1))) tmpv = -(2**(W_BITS-1));
            msb = TOTAL_W - 1;
            newpack[msb -: W_BITS] = tmpv[W_BITS-1:0];
            for (i = 1; i <= HIST; i = i + 1) begin
              delta = ghr_latched[i-1] ? 32'sd1 : -32'sd1;
              tmpv = $signed(weight_arr[i]) + t_signed * delta;
              if (tmpv > (2**(W_BITS-1)-1)) tmpv = (2**(W_BITS-1)-1);
              if (tmpv < -(2**(W_BITS-1))) tmpv = -(2**(W_BITS-1));
              msb = TOTAL_W - 1 - W_BITS * i;
              newpack[msb -: W_BITS] = tmpv[W_BITS-1:0];
            end
            wr_data <= newpack;
            wr_idx <= train_idx;
            wr_en <= 1;
          end else begin
            wr_en <= 0;
          end

          state <= IDLE;
        end

        default: begin
          state <= IDLE;
        end

      endcase
    end
  end

endmodule