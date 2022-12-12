`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:32:16 04/28/2019 
// Design Name: 
// Module Name:    rf 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module rf(clk,we,ra,rb,rw,rd,qa,qb);
input clk;
input we;
input [4:0] ra,rb,rw;
input [31:0] rd;
output[31:0]  qa,qb;

wire [31:0] qa,qb;
reg [31:0] register[31:0];//����32��32λ�ļĴ���

//˫�˿ڶ�
assign qa = (ra == 0) ? 0:register[ra];     //�Ĵ�����,R0Ϊ0��������������Ĵ�����ֵ
assign qb = (rb == 0) ? 0:register[rb];

//���˿�д
always @(posedge clk)   //ʱ��������д�Ĵ���
	if ((rw != 0) && we)
		register[rw] <= rd;
endmodule
