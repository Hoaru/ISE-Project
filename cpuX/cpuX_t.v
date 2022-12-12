`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:34:49 05/27/2019
// Design Name:   main
// Module Name:   D:/Xilinx_ISE_14.7/ISE_project/cpuX/cpuX_t.v
// Project Name:  cpuX
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cpuX_t;

	// Inputs
	reg we;
	reg clk;
	reg clr;

	// Outputs
	wire [31:0] alu_out;
	wire zero;
	wire RegWrite;
	wire ALUsrc;
	wire RegDst;
	wire [1:0] MemToReg;
	wire MemWrite;
	wire [1:0] npcctrol;
	wire [1:0] ExtOp;
	wire [2:0] ALUctr;
	wire [31:0] dout;
	wire [31:0] eximm;
	wire [31:0] out;
	wire [5:0] op;
	wire [5:0] func;
	wire [4:0] sa;
	wire [4:0] rs;
	wire [4:0] rt;
	wire [4:0] rd;
	wire [15:0] immORoffset;
	wire [25:0] imadr;
	wire [31:0] b;
	wire [4:0] rw;
	wire [31:0] mux232data;
	wire [31:0] npc;
	wire [31:0] pcdata;
	wire [31:0] qa;
	wire [31:0] qb;
	wire [31:0] r8;
	wire [31:0] r16;
	wire [31:0] r17;
	wire [31:0] r18;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.we(we), 
		.clk(clk), 
		.clr(clr), 
		.alu_out(alu_out), 
		.zero(zero), 
		.RegWrite(RegWrite), 
		.ALUsrc(ALUsrc), 
		.RegDst(RegDst), 
		.MemToReg(MemToReg), 
		.MemWrite(MemWrite), 
		.npcctrol(npcctrol), 
		.ExtOp(ExtOp), 
		.ALUctr(ALUctr), 
		.dout(dout), 
		.eximm(eximm), 
		.out(out), 
		.op(op), 
		.func(func), 
		.sa(sa), 
		.rs(rs), 
		.rt(rt), 
		.rd(rd), 
		.immORoffset(immORoffset), 
		.imadr(imadr), 
		.b(b), 
		.rw(rw), 
		.mux232data(mux232data), 
		.npc(npc), 
		.pcdata(pcdata), 
		.qa(qa), 
		.qb(qb), 
		.r8(r8), 
		.r16(r16), 
		.r17(r17), 
		.r18(r18)
	);

	initial begin
		clk = 0;
		we = 1;
		clr = 0;
		#20
		we = 1;
		clr = 1;
		#20
		we = 1;
		clr = 0;

	end
      initial    //产生时钟信号
	begin
	  clk = 0;
	  forever #10 clk = ~clk;
	end	

endmodule

