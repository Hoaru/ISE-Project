module MUX232(alu_out,dout,eximm,MemToReg,mux232data);
input [31:0] alu_out,dout,eximm;
input [1:0] MemToReg;
output reg [31:0] mux232data;
always@(*)
  begin
    case(MemToReg)
      2'b00:mux232data[31:0]=alu_out[31:0];
      2'b01:mux232data[31:0]=dout[31:0];
      2'b10:mux232data[31:0]=eximm[31:0];
		default:mux232data[31:0]=32'h00000000;
	 endcase
  end
endmodule