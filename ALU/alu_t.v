module alu_t;
		reg [31:0] a;           //输入
		reg [31:0] b;
		reg [2:0] aluc;	
		wire [31:0] alu_out;    // 输出
		wire zero;
		wire over;
		alu uut (.a(a),.b(b), .aluc(aluc), .alu_out(alu_out), .zero(zero), .over(over));               // 例化
		initial begin
			a = 0;             // 初始化输入
			b = 0;
			aluc = 0;
			#10;
			a = 32'h7fffffff;       //加法
			b = 32'h7fffffff;
			aluc = 0;      	
			#10;
        	a = 32'h01ffffff;       //减法
			b = 32'h80000000;
			aluc = 1;
			#10;                //或
        	a = 32'h0555ffff;
			b = 32'h0aaabbbb;
			aluc = 2;
			#10;                //与
        	a = 32'h0555ffff;
			b = 32'h0aaabbbb;
			aluc = 3;		
		end      
endmodule

