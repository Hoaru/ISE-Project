module EP(imm,ExtOp,eximm);
input [15:0] imm;
input [1:0] ExtOp;
output reg [31:0] eximm;
integer i;
always@(*)
  begin
    eximm[31:0]=32'h00000000;
	 case(ExtOp)
      2'b00:
	     begin
		    eximm[15:0]=imm[15:0];
		    eximm[31:16]=16'h0000;
		  end
	   2'b01:
	     begin
		    eximm[15:0]=imm[15:0];
			 eximm[31:16]=eximm[31]?16'hffff:16'h0000;
	  	  end
	   2'b10:
	     begin
		    eximm[15:0]=16'h0000;
		    eximm[31:16]=imm[15:0];
		  end
		default:;
    endcase
  end
endmodule