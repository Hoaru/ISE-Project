module DM(clk,clr,we,addr,din,dout);
input clk,clr,we;
input [31:0] addr;
input [31:0] din;
output reg[31:0] dout;
integer i;
reg [23:0] addr0;
reg [31:0] ram[255:0];

always @(posedge clk)   //Ê±ÖÓÉÏÉıÑØĞ´¼Ä´æÆ÷
  begin 
	 addr0[23:0]=addr[23:0];
    if (clr == 1)
      for(i=0;i<255;i=i+1)
	     ram[i] = 0;
    else if (we == 1)
      ram[addr0] = din;
	 else ;
	 dout = ram[addr0];
  end

endmodule