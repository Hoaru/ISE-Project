module MUX15(rt,rd,RegDst,rw);
input [4:0] rt,rd;
input RegDst;
output reg [4:0] rw;
always@(*)
  rw[4:0]=(RegDst==1'b0)?rt[4:0]:rd[4:0];
endmodule