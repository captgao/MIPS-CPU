`timescale 1ns / 1ps
`define OP 31:26
`define RS 25:21
`define RT 20:16
`define RD 15:11
`define SHAMT 10:6
`define FUNCT 5:0
`define IMM 15:0
`define INDEX 25:0

`define LB INST[`OP]==6'b100000
`define LBU INST[`OP]==6'b100100
`define LH INST[`OP]==6'b100001
`define LHU INST[`OP]==6'b100101
`define LW INST[`OP]==6'b100011
`define SB INST[`OP]==6'b101000
`define SH INST[`OP]==6'b101001
`define SW INST[`OP]==6'b101011
`define ADDI INST[`OP]==6'b001000
`define ADDIU INST[`OP]==6'b001001
`define ANDI INST[`OP]==6'b001100
`define ORI INST[`OP]==6'b001101
`define XORI INST[`OP]==6'b001110
`define LUI INST[`OP]==6'b001111
`define SLTI INST[`OP]==6'b001010
`define SLTIU INST[`OP]==6'b001011
`define BEQ INST[`OP]==6'b000100
`define BNE INST[`OP]==6'b000101
`define BLEZ INST[`OP]==6'b000110
`define BGEZ INST[`OP]==6'b000001 && INST[`RT]==5'b1
`define BLTZ INST[`OP]==6'b000001 && INST[`RT]==5'b0
`define BGTZ INST[`OP]==6'b000111
`define J INST[`OP]==6'b000010
`define JAL INST[`OP]==6'b000011
`define INST_ADDU (`ADDIU || `ADDU)
`define INST_AND (`AND || `ANDI)
`define RTYPE INST[`OP]==6'b000000 && INST!=32'b0
`define ADD `RTYPE && INST[`FUNCT]==6'b100000
`define ADDU `RTYPE && INST[`FUNCT]==6'b100001
`define SUB `RTYPE && INST[`FUNCT]==6'b100010
`define SUBU `RTYPE && INST[`FUNCT]==6'b100011
`define MULT `RTYPE && INST[`FUNCT]==6'b011000
`define MULTU `RTYPE && INST[`FUNCT]==6'b011001
`define DIV `RTYPE && INST[`FUNCT]==6'b011010
`define DIVU `RTYPE && INST[`FUNCT]==6'b011011
`define SLL `RTYPE && INST[`FUNCT]==6'b0
`define SRL `RTYPE && INST[`FUNCT]==6'b000010
`define SRA `RTYPE && INST[`FUNCT]==6'b000011
`define SLLV `RTYPE && INST[`FUNCT]==6'b000100
`define SRLV `RTYPE && INST[`FUNCT]==6'b000110
`define SRAV `RTYPE && INST[`FUNCT]==6'b000111
`define AND `RTYPE && INST[`FUNCT]==6'b100100
`define OR `RTYPE &&INST[`FUNCT]==6'b100101
`define XOR `RTYPE &&INST[`FUNCT]==6'b100110
`define NOR `RTYPE &&INST[`FUNCT]==6'b100111
`define SLT `RTYPE && INST[`FUNCT]==6'b101010
`define SLTU `RTYPE && INST[`FUNCT]==6'b101011
`define JR `RTYPE && INST[`FUNCT]==6'b001000
`define JALR `RTYPE && INST[`FUNCT]==6'b001001
`define MFHI `RTYPE && INST[`FUNCT]==6'b010000
`define MFLO `RTYPE && INST[`FUNCT]==6'b010010
`define MTHI `RTYPE && INST[`FUNCT]==6'b010001
`define MTLO `RTYPE && INST[`FUNCT]==6'b010011
`define MFC0 INST[`OP]==6'b010000 && INST[`RS] == 5'b0
`define MTC0 INST[`OP]==6'b010000 && INST[`RS] == 5'b00100 
`define ERET INST==32'h42000018
`define NOP INST==32'b0
`define INST_SHAMT (`SRA||`SRL||`SLL)
`define INST_LDM (`LB||`LBU||`LH||`LHU||`LW)
`define INST_SDM (`SB||`SH||`SW)
`define INST_DM (`INST_LDM||`INST_SDM)
`define INST_OR (`OR || `ORI)
`define TYPE_RI (`ANDI || `ORI || `XORI || `SLTI ||`SLTIU || `ADDI || `ADDIU || `LUI)
`define BRANCH (`BEQ || `BNE || `BLEZ || `BGEZ || `BLTZ || `BGTZ)
module controller(
	 input [31:0] INST,
	 output GPR_WE,
    output use_imm,
	 output use_shamt,
    output DM_WE,
	 output [1:0] ext_sel,
	 output [1:0] nPCsel,
    output [3:0] ALUop,
	 output [2:0] GPR_WDsel,
	 output [4:0] GPR_Waddr,
	 output [3:0] MDU_CTL,
	 output [1:0] DM_CTL,
	 output [2:0] DME_CTL,
	 output CP0_WE,
	 output exception,
	 output ALU_sign
    );
	//ALUop define
parameter ALU_ADD = 4'd0;
parameter ALU_SUB = 4'd1;
parameter ALU_OR  = 4'd2;
parameter ALU_AND = 4'd3;
parameter ALU_LUI = 4'd4;
parameter ALU_XOR = 4'd5;
parameter ALU_NOR = 4'd6;
parameter ALU_SLL = 4'd7;
parameter ALU_SRL = 4'd8;
parameter ALU_SRA = 4'd9;
parameter ALU_SLT = 4'd10;
parameter ALU_SLTU = 4'd11;
	//nPCsel define
parameter PC_NEXT = 2'b00;
parameter PC_BRANCH = 2'b01;
parameter PC_INDEX = 2'b10;
parameter PC_REG = 2'b11;

parameter GPR_FROM_ALU = 3'b00;
parameter GPR_FROM_DM = 3'b01;
parameter GPR_FROM_PC = 3'b10;
parameter GPR_FROM_MDU = 3'b11;
parameter GPR_FROM_CP0 = 3'b100;

assign GPR_WE = (`RTYPE && ! (`JR || `MULT || `MULTU || `DIV || `DIVU || `MTHI || `MTLO || `NOP)
						|| `INST_LDM || `TYPE_RI || `JAL || `MFC0) ? 1:0;
assign DM_WE = `INST_SDM ? 1 : 0;
assign use_imm = !(`RTYPE)? 1 : 0;
assign use_shamt = `INST_SHAMT ? 1 : 0;
assign nPCsel = `BRANCH ? PC_BRANCH : 
					 `J || `JAL ? PC_INDEX:
					 `JR || `JALR ? PC_REG : PC_NEXT;
assign ext_sel = (`INST_DM || `SLTI || `SLTIU || `ADDI || `ADDIU ) ? 2'b01 :
						`INST_SHAMT ? 2'b10 : `LUI ? 2'b11 :2'b00;
assign ALUop = `INST_ADDU ? ALU_ADD : 
					`SUBU ? ALU_SUB : 
					`INST_OR ? ALU_OR : 
					`INST_AND ? ALU_AND : 
					`LUI ? ALU_LUI : 
					`XOR || `XORI ? ALU_XOR :
					`NOR ? ALU_NOR : 
					`SLL || `SLLV ? ALU_SLL : 
					`SRL || `SRLV ? ALU_SRL :
					`SRA || `SRAV ? ALU_SRA : 
					`SLT || `SLTI ? ALU_SLT :
					`SLTIU || `SLTU ? ALU_SLTU : 
					`ADD || `ADDI || `INST_DM ? 4'd12:
					`SUB ? 4'd13 : 0;
assign GPR_WDsel = `RTYPE && !(`JALR || `MFHI || `MFLO)||`TYPE_RI ? GPR_FROM_ALU :
						 `INST_LDM ? GPR_FROM_DM :
						 `JAL || `JALR ? GPR_FROM_PC : 
						 `MFC0 ? GPR_FROM_CP0 : GPR_FROM_MDU;
assign GPR_Waddr = (`RTYPE ) ? INST[`RD] :
						 `JAL  ? 5'd31 : INST[`RT];
assign MDU_CTL = `MFLO ? 0 : `MFHI ? 1 : `MTHI ? 2 : `MTLO ? 3 :
						`MULT ? 4 : `MULTU ? 5 : `DIV ? 6 : `DIVU ? 7 : 0;
assign DM_CTL = `SB ? 0 : `SH ? 1 : `SW ? 2 : 0;
assign DME_CTL = `LB ? 0 : `LBU ? 1 : `LH ? 2 : `LHU ? 3 : `LW ? 4 : 0;
assign CP0_WE = `MTC0;
assign exception = !(`RTYPE || `TYPE_RI || `INST_DM || `BRANCH || `J || `JAL || `ERET || `MFC0 || `MTC0 || `NOP);
endmodule
