module ALU(a,b,aluc,alu_out,zero);
input [31:0] a,b;
input [2:0] aluc;
output reg [31:0] alu_out;
output reg zero;
always @(a,b,aluc,alu_out)
begin
	case(aluc) 
		3'b000: alu_out <= a+b;
		3'b100: alu_out <= a-b;
		3'b010: alu_out <= a | b;
		3'b001: alu_out <= a & b;
		3'b111: 
		  begin
		    if(a<b | a==b)
			   alu_out <= 32'h00000001;
			 else
			   alu_out <= 32'h00000000;
		  end
		default:alu_out <= 32'h00000000;
	endcase
   if (alu_out == 32'h00000000)
	    zero <= 1'b1;
	else
		 zero <= 1'b0;
end;
endmodule
