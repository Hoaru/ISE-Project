module RF(clk,clr,we,ra,rb,rw,rd,qa,qb,r8,r16,r17,r18);
input clk,clr,we;
input [4:0] ra,rb,rw;
input [31:0] rd;
output[31:0] qa,qb;
integer i;
reg [31:0] register[31:0];//定义32个32位的寄存器
output reg[31:0] r8,r16,r17,r18;

initial
	begin
		r8=32'h00000000;
		r16=32'h00000000;
		r17=32'h00000000;
		r18=32'h00000000;
	end

//双端口读
assign qa = (ra == 0) ? 0:register[ra];     //寄存器读,R0为0，否则读出其他寄存器的值
assign qb = (rb == 0) ? 0:register[rb];

//单端口写
always @(posedge clk)   //时钟上升沿写寄存器
  begin
	 if(clr==1)
      for(i=0;i<32;i=i+1)
        register[i]<=32'h00000000;
	 else if ((rw != 0) && we)
		register[rw] <= rd;
	 else ;
r8 <=register[8];
r16 <=register[16];
r17 <=register[17];
r18 <=register[18];
  end
endmodule