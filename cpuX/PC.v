module PC(pcadr,en,clk,clr,pcdata);
input [31:0] pcadr;
input en,clk,clr;
output reg [31:0]pcdata;
always@(posedge clk)
  begin
    if(clr==1)
	  pcdata<=32'b00000000;
	 else if(en==1)
	  pcdata[31:0]<=pcadr[31:0];
  end
endmodule