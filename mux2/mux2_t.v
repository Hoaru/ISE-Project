module mux2_t;	
				reg [31:0] A;     //����
				reg [31:0] B;
				reg s;
				wire [31:0] Z;   //���
				mux2 uut (	.A(A), .B(B), .Z(Z), .s(s));        //����ģ������
				initial begin
					A = 32'haaaaaaaa;       //���ɼ����ź�
					B = 32'hbbbbbbbb;
					s = 0;

					#10;                    //�ӳ�10ns
        				A = 32'hcccccccc;
					B = 32'hdddddddd;
					s = 0; 
        				#10;
					A = 32'haaaaaaaa;
					B = 32'hbbbbbbbb;
					s = 1;	
					#10;
        				A = 32'hcccccccc;
					B = 32'hdddddddd;
					s = 1; 
					#10;
        				A = 32'heeeeeeee;
					B = 32'hffffffff;
					s = 0;	
				end      
endmodule
