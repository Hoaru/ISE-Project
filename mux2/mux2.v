//----------------------------------------------
//ѡ����ģ��
//----------------------------------------------
module mux2(A,B,Z,s); 
input[15:0] A,B; 
input s;
output[15:0] Z;
assign Z = (s == 1)?A:B;
endmodule