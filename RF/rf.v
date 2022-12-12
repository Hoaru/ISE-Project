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
reg [31:0] register[31:0];//定义32个32位的寄存器

//双端口读
assign qa = (ra == 0) ? 0:register[ra];     //寄存器读,R0为0，否则读出其他寄存器的值
assign qb = (rb == 0) ? 0:register[rb];

//单端口写
always @(posedge clk)   //时钟上升沿写寄存器
	if ((rw != 0) && we)
		register[rw] <= rd;
endmodule
