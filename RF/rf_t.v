`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:50:16 04/28/2019
// Design Name:   rf
// Module Name:   D:/Xilinx_ISE_14.7/ISE_project/RF/rf_t.v
// Project Name:  RF
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: rf
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module rf_t;

	// Inputs
	reg clk;
	reg we;
	reg [4:0] ra;
	reg [4:0] rb;
	reg [4:0] rw;
	reg [31:0] rd;

	// Outputs
	wire [31:0] qa;
	wire [31:0] qb;

	// Instantiate the Unit Under Test (UUT)
	rf uut (
		.clk(clk), 
		.we(we), 
		.ra(ra), 
		.rb(rb), 
		.rw(rw), 
		.rd(rd), 
		.qa(qa), 
		.qb(qb)
	);

	initial begin
		// Initialize Inputs
		clk = 0;   // ³õÊ¼»¯
		we = 0;
		ra = 0;
		rb = 0;
		rw = 0;
		rd = 0;		
		#20;       // µÈ´ý20ns
      	we = 1;     //R1¼Ä´æÆ÷Ð´1
		ra = 0;
		rb = 0;
		rw = 1;
		rd = 1;	
#20;		
         we = 1;    //R2¼Ä´æÆ÷Ð´2
		ra = 0;
		rb = 0;
		rw = 2;
		rd = 2;	
#20;
      	we = 1;    //R3¼Ä´æÆ÷Ð´3
		ra = 0;
		rb = 0;
		rw = 3;
		rd = 3;			
#20;
      	we = 1;    //R0Ð´2
		ra = 0;
		rb = 0;
		rw = 0;
		rd = 2;	
#20;
      	we = 0;    //¶ÁR0,R1¼Ä´æÆ÷
		ra = 0;
		rb = 1;
		rw = 0;
		rd = 0;	
#20;		
	  	we = 0;    //¶ÁR2£¬R3¼Ä´æÆ÷
		ra = 2;
		rb = 3;
		rw = 0;
		rd = 0;			
		end	 
   	initial    //²úÉúÊ±ÖÓÐÅºÅ
	begin
	  clk = 0;
	  forever #10 clk = ~clk;
	end	
endmodule


