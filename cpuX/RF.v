module RF(clk,clr,we,ra,rb,rw,rd,qa,qb,r8,r16,r17,r18);
input clk,clr,we;
input [4:0] ra,rb,rw;
input [31:0] rd;
output[31:0] qa,qb;
integer i;
reg [31:0] register[31:0];//����32��32λ�ļĴ���
output reg[31:0] r8,r16,r17,r18;

initial
	begin
		r8=32'h00000000;
		r16=32'h00000000;
		r17=32'h00000000;
		r18=32'h00000000;
	end

//˫�˿ڶ�
assign qa = (ra == 0) ? 0:register[ra];     //�Ĵ�����,R0Ϊ0��������������Ĵ�����ֵ
assign qb = (rb == 0) ? 0:register[rb];

//���˿�д
always @(posedge clk)   //ʱ��������д�Ĵ���
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