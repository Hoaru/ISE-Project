`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:36:44 04/28/2019
// Design Name:   main
// Module Name:   D:/Xilinx_ISE_14.7/ISE_project/main/main_t.v
// Project Name:  main
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

module main_t;

	// Inputs
	reg [4:0] ra0;
	reg [4:0] rb0;
	reg [4:0] rw0;
	reg we0;
	reg [31:0] rd0;
	reg s0;
	reg clk0;
	reg [1:0] aluc0;

	// Outputs
	wire z0;
	wire v0;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.ra0(ra0), 
		.rb0(rb0), 
		.rw0(rw0), 
		.we0(we0), 
		.rd0(rd0), 
		.s0(s0), 
		.clk0(clk0), 
		.aluc0(aluc0), 
		.z0(z0), 
		.v0(v0)
	);

	initial begin
		// Initialize Inputs
		ra0 = 0;
		rb0 = 0;
		rw0 = 0;
		we0 = 0;
		rd0 = 0;
		s0 = 0;
		aluc0 = 0;
#20;
		// Initialize Inputs
		ra0 = 0;
		rb0 = 0;
		rw0 = 1;//1号寄存器
		we0 = 1;
		rd0 = 5;//写入5
		s0 = 0;
		aluc0 = 0;
#20;
		// Initialize Inputs
		ra0 = 0;
		rb0 = 0;
		rw0 = 2;//2号寄存器
		we0 = 1;
		rd0 = 4;//写入4
		s0 = 0;
		aluc0 = 0;
#20;
		// Initialize Inputs
		ra0 = 1;//从1号寄存器取数
		rb0 = 2;//从2号寄存器取数
		rw0 = 0;
		we0 = 0;
		aluc0 = 1;//做减法
		s0 = 1;
		rw0 = 3;//3号寄存器
		we0 = 1;


#20;
		// Initialize Inputs
		ra0 = 0;
		rb0 = 0;
		rw0 = 4;//4号寄存器
		we0 = 1;
		rd0 = 66;//写入66
		s0 = 0;
		aluc0 = 0;
#20;
		// Initialize Inputs
		ra0 = 0;
		rb0 = 0;
		rw0 = 5;//5号寄存器
		we0 = 1;
		rd0 = 21;//写入21
		s0 = 0;
		aluc0 = 0;
#20;
		// Initialize Inputs
		ra0 = 4;//从4号寄存器取数
		rb0 = 5;//从5号寄存器取数
		rw0 = 0;
		we0 = 0;
		aluc0 = 0;//做加法
		s0 = 1;
		rw0 = 6;//6号寄存器
		we0 = 1;		


#20;
		// Initialize Inputs
		ra0 = 0;
		rb0 = 0;
		rw0 = 7;//7号寄存器
		we0 = 1;
		rd0 = 33;//写入33
		s0 = 0;
		aluc0 = 0;
#20;
		// Initialize Inputs
		ra0 = 0;
		rb0 = 0;
		rw0 = 8;//8号寄存器
		we0 = 1;
		rd0 = 11;//写入11
		s0 = 0;
		aluc0 = 0;
#20;
		// Initialize Inputs
		ra0 = 7;//从7号寄存器取数
		rb0 = 8;//从8号寄存器取数
		rw0 = 0;
		we0 = 0;
		aluc0 = 2;//做或运算
		s0 = 1;
		rw0 = 9;//9号寄存器
		we0 = 1;


#20;
		// Initialize Inputs
		ra0 = 0;
		rb0 = 0;
		rw0 = 10;//10号寄存器
		we0 = 1;
		rd0 = 18;//写入18
		s0 = 0;
		aluc0 = 0;
#20;
		// Initialize Inputs
		ra0 = 0;
		rb0 = 0;
		rw0 = 11;//11号寄存器
		we0 = 1;
		rd0 = 8;//写入8
		s0 = 0;
		aluc0 = 0;
#20;
		// Initialize Inputs
		ra0 = 10;//从10号寄存器取数
		rb0 = 11;//从11号寄存器取数
		rw0 = 0;
		we0 = 0;
		aluc0 = 3;//做与运算
		s0 = 1;
		rw0 = 12;//12号寄存器
		we0 = 1;
	end
initial    //产生时钟信号
	begin
	   clk0 = 0;
	   forever #10 clk0 = ~clk0;
	end    
endmodule

