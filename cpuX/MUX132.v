module MUX132(qb,eximm,ALUsrc,b);
input [31:0] qb,eximm;
input ALUsrc;
output reg [31:0] b;
always@(*)
  b[31:0]=(ALUsrc==1'b0)?qb[31:0]:eximm[31:0];
endmodule