module CTRL(op,zero,func,RegWrite,ALUsrc,RegDst,MemToReg,MemWrite,npcctrol,ExtOp,ALUctr);
input [5:0] op,func;
input zero;
output reg RegWrite,ALUsrc,RegDst,MemWrite;
output reg [1:0] MemToReg;
output reg [1:0] npcctrol;
output reg [1:0] ExtOp;
output reg [2:0] ALUctr;
reg [2:0] mux0;
reg [2:0] mux1;
integer muxop;
always@(*)
  begin
	 RegWrite=0;
	 ALUsrc=0;
	 RegDst=0;
	 MemWrite=0;
	 MemToReg[1:0]=2'b00;
	 npcctrol[1:0]=2'b00;
	 ExtOp[1:0]=2'b00;
	 ALUctr[2:0]=3'b000;
	 mux0[2:0]=3'b000;
	 mux1[2:0]=3'b000;
	 muxop=0;
    case(op)
	   6'b000000://R-Type
	     begin
		    RegWrite=1;
			 RegDst=1;
			 mux0[2:0]=3'b001;
			 muxop=1;
		  end
		6'b001101://ori
		  begin
		    RegWrite=1;
			 ALUsrc=1;
			 mux0[2:0]=3'b010;
		  end
	   6'b100011://lw
	     begin
		    RegWrite=1;
			 ALUsrc=1;
			 MemToReg[1:0]=2'b01;
			 ExtOp[1:0]=2'b01;
		  end
		6'b101011://sw
		  begin
		    ALUsrc=1;
			 MemWrite=1;
			 ExtOp[1:0]=2'b01;
		  end
	   6'b000100://beg
	     begin
		    if(zero==1)
			   npcctrol[1:0]=2'b10;
			 else
			   npcctrol[1:0]=2'b00;
			 mux0[2:0]=3'b100;
		  end
		6'b000010://jmp
		  begin
		    npcctrol[1:0]=2'b01;
		  end
	   6'b001000://addi
	     begin
		    RegWrite=1;
			 ALUsrc=1;
		  end
		6'b001111://lui
	     begin
		    RegWrite=1;
			 MemToReg[1:0]=2'b10;
			 ExtOp[1:0]=2'b10;
		  end
		default:;
	 endcase
	 case(func)
	   6'b000100:
	     begin
		    mux1[2:0]=3'b001;
		  end
		6'b001010:
		  begin
		    mux1[2:0]=3'b111;
		  end
	   6'b000101:
	     begin
		    mux1[2:0]=3'b010;
		  end
		6'b000010:
		  begin
		    mux1[2:0]=3'b100;
		  end
		6'b101010:
		  begin
		    mux1[2:0]=3'b111;
		  end
		default:;
	 endcase
	 ALUctr=(muxop==0)?mux0:mux1;
  end
endmodule