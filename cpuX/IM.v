module IM(addr,out,op,func,sa,rs,rt,rd,immORoffset,adr);
input [31:0] addr;
reg [23:0] addr0;
output reg [31:0] out;
output reg [15:0] immORoffset;
output reg [25:0] adr;
output reg [5:0] op,func;
output reg [4:0] sa,rs,rt,rd;
always @(addr)
  begin
    addr0[23:0]=addr[23:0];  
	 case(addr0)
	
	   /*
	   6'h000000: out = 32'h2012002d;//addi:r18=2d
	   6'h000004: out = 32'hac120040;//sw:r18---m40
	   6'h000008: out = 32'h8c100040;//lw:m40---r16
		*/
		
	   /*
		6'h000000: out = 32'h20100003;//addi:r16=3
		6'h000004: out = 32'h20110004;//addi:r17=4
		6'h000008: out = 32'h0211402a;//slt:if|r16<r17| r8=1;else r8=0
		*/
		
		
	   6'h000000: out = 32'h20100000;
	   6'h000004: out = 32'h20110000;
	   6'h000008: out = 32'h00009024;
	   6'h00000c: out = 32'h2008000a;
	   6'h000010: out = 32'h12280004;
	   6'h000014: out = 32'h02129020;
	   6'h000018: out = 32'h22100001;
	   6'h00001c: out = 32'h22310001;
	   6'h000020: out = 32'h08000004;
	   6'h000024: out = 32'hac120040;
	   6'h000028: out = 32'h8c100040;
		6'h00002c: out = 32'h0211402a;//slt:if|r16<r17| r8=1;else r8=0
	   
		
		
	   default: out = {32{1'b0}};
	 endcase
	 op[5:0]=out[31:26];
	 func[5:0]=out[5:0];
	 sa[4:0]=out[10:6];
	 rs[4:0]=out[25:21];
	 rt[4:0]=out[20:16];
	 rd[4:0]=out[15:11];
	 immORoffset[15:0]=out[15:0];
	 adr[25:0]=out[25:0];
  end
endmodule