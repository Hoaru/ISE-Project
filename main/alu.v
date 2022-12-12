module alu(a,b,aluc,alu_out,zero,over);

input [31:0] a,b;
input [1:0] aluc;
output [31:0] alu_out;
output zero;
output over;

reg [31:0] alu_out;
reg zero;
reg over;
reg s1;
reg s2;
reg s0;
always @(a,b,aluc,alu_out)
begin
	case(aluc) 
		2'b00: alu_out <= a+b;
		2'b01: alu_out <= a-b;
		2'b10: alu_out <= a | b;
		default: alu_out <= a & b;
	endcase
   if (alu_out == 32'h00000000)
	    zero <= 1;
	else
		 zero <= 0;
	s1 = a[31];
	s2 = b[31];
	s0 = alu_out[31];
	
	over <= 0;
	if(s1 == 0 && s2 == 0 && s0 == 1 && (aluc == 00 || aluc == 01) )
		over <= 1;
	if(s1 == 1 && s2 == 1 && s0 == 0 && (aluc == 00 || aluc == 01) )
		over <= 1;
	if(s1 == 1 && s2 == 0 && s0 == 0 && (aluc == 00 || aluc == 01) )
		over <= 1;
	if(s1 == 0 && s2 == 1 && s0 == 1 && (aluc == 00 || aluc == 01) )
		over <= 1;
end;
endmodule
