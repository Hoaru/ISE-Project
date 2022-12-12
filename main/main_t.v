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
		rw0 = 1;//1�żĴ���
		we0 = 1;
		rd0 = 5;//д��5
		s0 = 0;
		aluc0 = 0;
#20;
		// Initialize Inputs
		ra0 = 0;
		rb0 = 0;
		rw0 = 2;//2�żĴ���
		we0 = 1;
		rd0 = 4;//д��4
		s0 = 0;
		aluc0 = 0;
#20;
		// Initialize Inputs
		ra0 = 1;//��1�żĴ���ȡ��
		rb0 = 2;//��2�żĴ���ȡ��
		rw0 = 0;
		we0 = 0;
		aluc0 = 1;//������
		s0 = 1;
		rw0 = 3;//3�żĴ���
		we0 = 1;


#20;
		// Initialize Inputs
		ra0 = 0;
		rb0 = 0;
		rw0 = 4;//4�żĴ���
		we0 = 1;
		rd0 = 66;//д��66
		s0 = 0;
		aluc0 = 0;
#20;
		// Initialize Inputs
		ra0 = 0;
		rb0 = 0;
		rw0 = 5;//5�żĴ���
		we0 = 1;
		rd0 = 21;//д��21
		s0 = 0;
		aluc0 = 0;
#20;
		// Initialize Inputs
		ra0 = 4;//��4�żĴ���ȡ��
		rb0 = 5;//��5�żĴ���ȡ��
		rw0 = 0;
		we0 = 0;
		aluc0 = 0;//���ӷ�
		s0 = 1;
		rw0 = 6;//6�żĴ���
		we0 = 1;		


#20;
		// Initialize Inputs
		ra0 = 0;
		rb0 = 0;
		rw0 = 7;//7�żĴ���
		we0 = 1;
		rd0 = 33;//д��33
		s0 = 0;
		aluc0 = 0;
#20;
		// Initialize Inputs
		ra0 = 0;
		rb0 = 0;
		rw0 = 8;//8�żĴ���
		we0 = 1;
		rd0 = 11;//д��11
		s0 = 0;
		aluc0 = 0;
#20;
		// Initialize Inputs
		ra0 = 7;//��7�żĴ���ȡ��
		rb0 = 8;//��8�żĴ���ȡ��
		rw0 = 0;
		we0 = 0;
		aluc0 = 2;//��������
		s0 = 1;
		rw0 = 9;//9�żĴ���
		we0 = 1;


#20;
		// Initialize Inputs
		ra0 = 0;
		rb0 = 0;
		rw0 = 10;//10�żĴ���
		we0 = 1;
		rd0 = 18;//д��18
		s0 = 0;
		aluc0 = 0;
#20;
		// Initialize Inputs
		ra0 = 0;
		rb0 = 0;
		rw0 = 11;//11�żĴ���
		we0 = 1;
		rd0 = 8;//д��8
		s0 = 0;
		aluc0 = 0;
#20;
		// Initialize Inputs
		ra0 = 10;//��10�żĴ���ȡ��
		rb0 = 11;//��11�żĴ���ȡ��
		rw0 = 0;
		we0 = 0;
		aluc0 = 3;//��������
		s0 = 1;
		rw0 = 12;//12�żĴ���
		we0 = 1;
	end
initial    //����ʱ���ź�
	begin
	   clk0 = 0;
	   forever #10 clk0 = ~clk0;
	end    
endmodule

