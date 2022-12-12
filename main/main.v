`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:08:23 04/29/2019 
// Design Name: 
// Module Name:    main 
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
module main(ra0,rb0,rw0,we0,rd0,s0,clk0,aluc0,z0,v0);
input clk0,s0,we0;
input[1:0] aluc0;
input[4:0] ra0,rb0,rw0;
input[31:0] rd0;
output z0,v0;
wire[31:0] qa0,qb0,alu_out0,mux2_out;
rf rf0(.clk(clk0),.we(we0),.ra(ra0),.rb(rb0),.rw(rw0),.rd(mux2_out),.qa(qa0),.qb(qb0));
alu alu0(.a(qa0),.b(qb0),.aluc(aluc0),.alu_out(alu_out0),.zero(z0),.over(v0));
mux2 m0(.A(alu_out0),.B(rd0),.Z(mux2_out),.s(s0));
endmodule