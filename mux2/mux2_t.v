module mux2_t;	
				reg [31:0] A;     //输入
				reg [31:0] B;
				reg s;
				wire [31:0] Z;   //输出
				mux2 uut (	.A(A), .B(B), .Z(Z), .s(s));        //测试模块例化
				initial begin
					A = 32'haaaaaaaa;       //生成激励信号
					B = 32'hbbbbbbbb;
					s = 0;

					#10;                    //延迟10ns
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
