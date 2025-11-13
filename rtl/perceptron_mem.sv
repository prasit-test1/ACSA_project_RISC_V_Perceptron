`timescale 1ns/1ps
module perceptron_mem #(
  parameter int INDEX_BITS = 7,
  parameter int HIST = 28,
  parameter int W_BITS = 8
)(
  input  logic                       clk,
  input  logic                       rst,    // active-high reset

  input  logic                       rd_en,
  input  logic [INDEX_BITS-1:0]      rd_idx,
  output logic                       rd_valid,
  output logic [(HIST+1)*W_BITS-1:0] rd_data,

  input  logic                       wr_en,
  input  logic [INDEX_BITS-1:0]      wr_idx,
  input  logic [(HIST+1)*W_BITS-1:0] wr_data
);

  localparam int N = (1<<INDEX_BITS);
  logic [(HIST+1)*W_BITS-1:0] mem [0:N-1];

  always_ff @(posedge clk) begin
    if (rst) begin
      rd_valid <= 0;
      // optional: clear mem on reset (commented to preserve initial weights)
      // integer i; for (i=0; i<N; i=i+1) mem[i] <= '0;
    end else begin
      rd_valid <= rd_en;
      if (rd_en) rd_data <= mem[rd_idx];
      if (wr_en) mem[wr_idx] <= wr_data;
    end
  end

endmodule

