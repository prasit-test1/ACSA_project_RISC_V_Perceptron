module branchPredictorGshare#(
    parameter int BTB_ENTRIES = 16,
    parameter int PHT_ENTRIES = 16,
    parameter int GHR_WIDTH = $clog2(PHT_ENTRIES),
    parameter int BTB_INDEX_WIDTH = $clog2(BTB_ENTRIES),
    parameter int BTB_TAG_WIDTH = 32 - BTB_INDEX_WIDTH
  ) (
    input  logic         clk,
    input  logic         rst,

    // Fetch stage inputs
    input  logic [31:0]  fetchPc,
    output logic         fetchHit,
    output logic [31:0]  fetchTarget,

    // EX stage update inputs
    input  logic         exTaken,
    input logic          exBranch,
    input logic [31:0]  exPc,
    input logic [31:0]  exTarget
  );


  typedef struct packed {
            logic valid;
            logic [BTB_TAG_WIDTH-1:0] tag;
            logic [31:0] target;
          } btb_entry;


  btb_entry btb_mem [BTB_ENTRIES-1:0];
  logic [1:0] pht_mem [PHT_ENTRIES-1:0];

  logic [GHR_WIDTH-1:0] ghr,pcBitsGhrFetch,pcBitsGhrEx,phtIndexEx,phtIndexFetch;
  logic [BTB_INDEX_WIDTH-1:0] fetchIndex;
  logic [BTB_TAG_WIDTH-1:0]   fetchTag;
  logic [BTB_INDEX_WIDTH-1:0] exIndex;
  logic [BTB_TAG_WIDTH-1:0]   exTag;
  logic exHit;

  logic [1:0] nextCount,count,countF;
  localparam [1:0]
             sTaken = 2'b10,
             wTaken = 2'b00, //default taken
             wNtaken = 2'b01,
             sNtaken = 2'b11;


  assign exIndex = exPc[BTB_INDEX_WIDTH+1:2];
  assign exTag  = exPc[31:BTB_INDEX_WIDTH];

  assign pcBitsGhrFetch = fetchPc[GHR_WIDTH+1:2];
  assign pcBitsGhrEx = exPc[GHR_WIDTH+1:2];

  assign phtIndexFetch = pcBitsGhrFetch^ghr;
  assign phtIndexEx = pcBitsGhrEx^ghr;
  assign count = pht_mem[phtIndexEx];
  assign countF = pht_mem[phtIndexFetch];


  assign fetchIndex = fetchPc[BTB_INDEX_WIDTH+1:2];
  assign fetchTag  = fetchPc[31:BTB_INDEX_WIDTH];
  assign fetchTarget = btb_mem[fetchIndex].target;
  assign exHit = btb_mem[exIndex].valid && (btb_mem[exIndex].tag == exTag);


  always_ff@(posedge clk)
  begin
    if (!rst)
    begin
      if(exBranch)
      begin
        ghr <= {ghr[GHR_WIDTH-1:1],exTaken}; //Next ghr
        if (exHit)
        begin
          pht_mem[phtIndexEx] <= nextCount; //update PHT
        end
        else //New branch
        begin
          btb_mem[exIndex].valid <= 1;
          btb_mem[exIndex].tag <= exTag;
          btb_mem[exIndex].target <= exTarget;
          pht_mem[phtIndexEx] <= exTaken?wTaken:wNtaken; //First pht entry
        end
      end
    end
  end


  always_comb
  begin
    case (count)
      wTaken:
        nextCount = exTaken?sTaken:wNtaken;
      sTaken:
        nextCount = exTaken?count:wTaken;
      wNtaken:
        nextCount = exTaken?wTaken:sNtaken;
      sNtaken:
        nextCount = exTaken?wNtaken:count;
    endcase
  end


  // ---------------------------
  // Perceptron integration (minimal-change)
  // ---------------------------
  localparam int P_INDEX_BITS = 7;
  localparam int P_HIST = 28;
  localparam int P_WBITS = 8;
  localparam int P_THRESH = 68;

  logic percep_req_valid;
  logic percep_req_ready;
  logic percep_pred_valid;
  logic percep_pred_taken;
  logic signed [31:0] percep_pred_conf;

  logic percep_train_valid;
  logic percep_train_ready;
  logic [31:0] percep_train_pc;
  logic percep_train_taken;
  logic [P_HIST-1:0] percep_req_ghr;
  logic [P_HIST-1:0] percep_train_ghr;

  // instantiate perceptron
  perceptron #(.INDEX_BITS(P_INDEX_BITS), .HIST(P_HIST), .W_BITS(P_WBITS), .THRESH(P_THRESH)) u_percep_gshare (
    .clk(clk), .rst(rst),
    .req_valid(percep_req_valid), .req_pc(fetchPc), .req_ghr(percep_req_ghr),
    .req_ready(percep_req_ready),
    .pred_valid(percep_pred_valid), .pred_taken(percep_pred_taken), .pred_conf(percep_pred_conf),
    .train_valid(percep_train_valid), .train_pc(percep_train_pc), .train_taken(percep_train_taken), .train_ghr(percep_train_ghr),
    .train_ready(percep_train_ready)
  );

  // wire perceptron ghr to module's ghr (approx)
  assign percep_req_ghr = ghr;
  assign percep_train_ghr = ghr;

  // always request prediction
  always_comb begin
    percep_req_valid = 1'b1;
  end

  // use perceptron to decide takenness for fetchHit
  assign fetchHit = (btb_mem[fetchIndex].valid && (btb_mem[fetchIndex].tag == fetchTag)) && percep_pred_taken;

  // augment the existing always_ff to issue training
  always_ff @(posedge clk) begin
    if (!rst) begin
      if (exBranch) begin
        // existing GHR update and BTB/PHT handling
        ghr <= {ghr[GHR_WIDTH-1:1],exTaken};
        if (exHit) begin
          pht_mem[phtIndexEx] <= nextCount;
        end else begin
          btb_mem[exIndex].valid <= 1;
          btb_mem[exIndex].tag <= exTag;
          btb_mem[exIndex].target <= exTarget;
          pht_mem[phtIndexEx] <= exTaken?wTaken:wNtaken;
        end
        // issue perceptron training with current ghr (approx)
        percep_train_valid <= 1'b1;
        percep_train_pc <= exPc;
        percep_train_taken <= exTaken;
      end else begin
        percep_train_valid <= 1'b0;
      end
    end
  end

endmodule