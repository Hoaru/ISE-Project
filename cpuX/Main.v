module main(we,clk,clr,
/*a=qa*//*b=b*//*aluc=ALUctr*/alu_out,zero,//ALU
/*op=op*//*zero=zero*//*func=func*/RegWrite,ALUsrc,RegDst,MemToReg,MemWrite,npcctrol,ExtOp,ALUctr,//CTRL
/*clk=clk*//*clr=clr*//*we=MemWrite*//*addr=alu_out*//*din=qb*/dout,//DM
/*imm=immORoffset*//*ExtOp=ExtOp*/eximm,//EP
/*addr=pcdata*/out,op,func,sa,rs,rt,rd,immORoffset,imadr,//IM
/*qb=qb*//*eximm=eximm*//*ALUsrc=ALUsrc*/b,//MUX132
/*rt=rt*//*rd=rd*//*RegDst=RegDst*/rw,//MUX15
/*alu_out=alu_out*//*dout=dout*//*eximm=eximm*//*MemToReg=MemToReg*/mux232data,//MUX232
/*pc=pcdata*//*addr=imadr*//*offset=immORoffset*//*npcctrol=npcctrol*/npc,//NPC
/*pcadr=npc*//*en=we*//*clk=clk*//*clr=clr*/pcdata,//PC
/*clk=clk*//*clr=clr*//*we=RegWrite*//*ra=rs*//*rb=rt*//*rw=rw*//*rd=mux232data*/qa,qb,r8,r16,r17,r18//RF
);

input we,clk,clr;

//ALU
output wire [31:0] alu_out;
output wire zero;

//CTRL
output wire RegWrite,ALUsrc,RegDst,MemWrite;
output wire [1:0] MemToReg;
output wire [1:0] npcctrol;
output wire [1:0] ExtOp;
output wire [2:0] ALUctr;

//DM
output wire [31:0] dout;

//EP
output wire [31:0] eximm;

//IM
output [31:0] out;
output wire [5:0] op;
output wire [5:0] func;
output wire [15:0] immORoffset;
output wire [25:0] imadr;
output [4:0] sa;
output wire [4:0] rs,rt,rd;

//MUX132
output wire [31:0] b;

//MUX15
output wire [4:0] rw;

//MUX232
output wire [31:0] mux232data;

//NPC
output wire [31:0] npc;

//PC
output wire [31:0] pcdata;

//RF
output wire [31:0] qa,qb;
output [31:0]r8,r16,r17,r18;

ALU ALU(qa,b,ALUctr,alu_out,zero);
CTRL CTRL(op,zero,func,RegWrite,ALUsrc,RegDst,MemToReg,MemWrite,npcctrol,ExtOp,ALUctr);
DM DM(clk,clr,MemWrite,alu_out,qb,dout);
EP EP(immORoffset,ExtOp,eximm);
IM IM(pcdata,out,op,func,sa,rs,rt,rd,immORoffset,imadr);
MUX132 MUX132(qb,eximm,ALUsrc,b);
MUX15 MUX15(rt,rd,RegDst,rw);
MUX232 MUX232(alu_out,dout,eximm,MemToReg,mux232data);
NPC NPC(pcdata,imadr,immORoffset,npcctrol,npc);
PC PC(npc,we,clk,clr,pcdata);
RF RF(clk,clr,RegWrite,rs,rt,rw,mux232data,qa,qb,r8,r16,r17,r18);
endmodule