module branchPredictor #(
    parameter int BTB_ENTRIES    = 64,
    parameter int TARGET_WIDTH   = 32,
    parameter int COUNTER_WIDTH  = 2,
    parameter int INDEX_WIDTH    = $clog2(BTB_ENTRIES),
    parameter int TAG_WIDTH      = 32 - INDEX_WIDTH
  )(
    input  logic                   clk,
    input  logic                   rst,
    input  logic [31:0]            fetchPc,
    output logic                   fetchHit,
    output logic [TARGET_WIDTH-1:0] fetchTarget,
    input  logic                   exTaken,
    input  logic                   exBranch,
    input  logic [31:0]            exPc,
    input  logic [TARGET_WIDTH-1:0] exTarget
  );

  // Memory layout: [TAG | TARGET | COUNTER | VALID]
  localparam int VALID_BIT     = 0;
  localparam int COUNTER_LSB   = VALID_BIT + 1;
  localparam int COUNTER_MSB   = COUNTER_LSB + COUNTER_WIDTH - 1;
  localparam int TARGET_LSB    = COUNTER_MSB + 1;
  localparam int TARGET_MSB    = TARGET_LSB + TARGET_WIDTH - 1;
  localparam int TAG_LSB       = TARGET_MSB + 1;
  localparam int TAG_MSB       = TAG_LSB + TAG_WIDTH - 1;
  localparam int MEM_WIDTH     = TAG_MSB + 1;

  logic [MEM_WIDTH-1:0] btb_mem [BTB_ENTRIES-1:0];

  logic [INDEX_WIDTH-1:0] fetchIndex, exIndex;
  logic [TAG_WIDTH-1:0] fetchTag, exTag;
  logic [TAG_WIDTH-1:0] fetchTagBtb, exTagBtb;
  logic [COUNTER_WIDTH-1:0] fetchCounter, exCounter;

  logic [MEM_WIDTH-1:0] fetchEntry, exEntry_, exEntryUpdated;
  logic [1:0] count, nextCount;
  logic exHit;

  assign fetchIndex = fetchPc[INDEX_WIDTH+1:2];
  assign exIndex    = exPc[INDEX_WIDTH+1:2];

  assign fetchEntry = btb_mem[fetchIndex];
  assign exEntry_   = btb_mem[exIndex];

  assign fetchTag   = fetchPc[31:INDEX_WIDTH];
  assign exTag      = exPc[31:INDEX_WIDTH];

  assign fetchTagBtb = fetchEntry[TAG_MSB:TAG_LSB];
  assign exTagBtb    = exEntry_[TAG_MSB:TAG_LSB];

  assign fetchCounter = fetchEntry[COUNTER_MSB:COUNTER_LSB];
  assign exCounter    = exEntry_[COUNTER_MSB:COUNTER_LSB];

  // Keep original 2-bit counter definitions unused (preserved for clarity)
  localparam [1:0]
             sTaken = 2'b10,
             wTaken = 2'b00,
             wNtaken = 2'b01,
             sNtaken = 2'b11;

  always_comb
  begin
    case (exCounter)
      wTaken:    nextCount = exTaken ? sTaken : wNtaken;
      sTaken:    nextCount = exTaken ? sTaken : wTaken;
      wNtaken:   nextCount = exTaken ? wTaken : sNtaken;
      sNtaken:   nextCount = exTaken ? wNtaken : sNtaken;
      default:   nextCount = wTaken;
    endcase
  end

  always_comb
  begin
    exEntryUpdated = '0;
    if ( (exEntry_[VALID_BIT]) && (exTagBtb == exTag) )
    begin
      exEntryUpdated = exEntry_;
      exEntryUpdated[COUNTER_MSB:COUNTER_LSB] = nextCount;
    end
    else if (exTaken)
    begin
      exEntryUpdated[VALID_BIT]               = 1'b1;
      exEntryUpdated[TAG_MSB:TAG_LSB]         = exTag;
      exEntryUpdated[TARGET_MSB:TARGET_LSB]   = exTarget;
      exEntryUpdated[COUNTER_MSB:COUNTER_LSB] = wTaken;
    end
  end

  // ---------------------------
  // Perceptron integration (minimal-change)
  // ---------------------------
  localparam int P_INDEX_BITS = 7; // 128 entries
  localparam int P_HIST = 28;
  localparam int P_WBITS = 8;
  localparam int P_THRESH = 68;

  logic [P_HIST-1:0] ghr_local;

  logic percep_req_valid;
  logic percep_req_ready;
  logic percep_pred_valid;
  logic percep_pred_taken;
  logic signed [31:0] percep_pred_conf;

  logic percep_train_valid;
  logic percep_train_ready;
  logic [31:0] percep_train_pc;
  logic percep_train_taken;
  logic [P_HIST-1:0] percep_train_ghr;
  logic [P_HIST-1:0] percep_req_ghr;

  // instantiate perceptron (rst is active high in this repo)
  perceptron #(.INDEX_BITS(P_INDEX_BITS), .HIST(P_HIST), .W_BITS(P_WBITS), .THRESH(P_THRESH)) u_percep (
    .clk(clk), .rst(rst),
    .req_valid(percep_req_valid), .req_pc(fetchPc), .req_ghr(percep_req_ghr),
    .req_ready(percep_req_ready),
    .pred_valid(percep_pred_valid), .pred_taken(percep_pred_taken), .pred_conf(percep_pred_conf),
    .train_valid(percep_train_valid), .train_pc(percep_train_pc), .train_taken(percep_train_taken), .train_ghr(percep_train_ghr),
    .train_ready(percep_train_ready)
  );

  // use local GHR for req/train
  assign percep_req_ghr = ghr_local;
  assign percep_train_ghr = ghr_local;

  // issue request every cycle (simple)
  always_comb begin
    percep_req_valid = 1'b1;
  end

  // Use perceptron decision for "taken" part of fetchHit:
  assign fetchTarget = fetchEntry[TARGET_MSB:TARGET_LSB];
  assign fetchHit = fetchEntry[VALID_BIT] && (fetchTagBtb == fetchTag) && percep_pred_taken;

  // sequential updates: BTB store, local GHR shift and training issue
  always_ff @(posedge clk) begin
    if (!rst) begin
      // update BTB entry (same as original)
      if (exHit | exTaken)
        btb_mem[exIndex] <= exEntryUpdated;

      // update local GHR when an instruction is a branch and resolved
      if (exBranch) begin
        ghr_local <= {ghr_local[P_HIST-1:1], exTaken};
        // issue a train request (perceptron handles handshake internally)
        percep_train_valid <= 1'b1;
        percep_train_pc <= exPc;
        percep_train_taken <= exTaken;
      end else begin
        percep_train_valid <= 1'b0;
      end
    end
  end

endmodule