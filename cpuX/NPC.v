module NPC(pc,addr,aaaaaoffset,npcctrol,npc);
input [31:0]pc;
input [25:0]addr;
input [15:0]aaaaaoffset;
input [1:0]npcctrol;
output reg [31:0]npc;
reg [31:0]plusfour;
reg [31:0]offsetextend;
always@(*)
  begin
    plusfour[31:0]=pc[31:0]+32'h00000004;
    case(npcctrol)
	   2'b00:npc[31:0]=plusfour[31:0];
		2'b01:
		  begin
		    npc[31:28]=plusfour[31:28];
			 npc[27:2]=addr[25:0];
			 npc[1:0]=2'b00;
		  end
		2'b10:
		  begin
			 offsetextend[15:0]=aaaaaoffset[15:0];
		    offsetextend[31:16]=16'h0000;
			 offsetextend=offsetextend*4;
			 npc=offsetextend+plusfour;
		  end
		default:npc=32'h00000000;
	 endcase
  end
endmodule
  