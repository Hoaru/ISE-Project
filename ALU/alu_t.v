module alu_t;
		reg [31:0] a;           //����
		reg [31:0] b;
		reg [2:0] aluc;	
		wire [31:0] alu_out;    // ���
		wire zero;
		wire over;
		alu uut (.a(a),.b(b), .aluc(aluc), .alu_out(alu_out), .zero(zero), .over(over));               // ����
		initial begin
			a = 0;             // ��ʼ������
			b = 0;
			aluc = 0;
			#10;
			a = 32'h7fffffff;       //�ӷ�
			b = 32'h7fffffff;
			aluc = 0;      	
			#10;
        	a = 32'h01ffffff;       //����
			b = 32'h80000000;
			aluc = 1;
			#10;                //��
        	a = 32'h0555ffff;
			b = 32'h0aaabbbb;
			aluc = 2;
			#10;                //��
        	a = 32'h0555ffff;
			b = 32'h0aaabbbb;
			aluc = 3;		
		end      
endmodule

