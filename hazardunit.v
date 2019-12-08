`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:15:54 12/11/2017 
// Design Name: 
// Module Name:    hazardunit 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
`define OPCODE 31:26
`define RS 25:21
`define RT 20:16
`define RD 15:11
`define SHAMT 10:6
`define FUNCT 5:0
`define IMM 15:0
`define INDEX 25:0
`define MEMTOREG_M GPR_WDSEL_M == 3'b01
`define MEMTOREG_E GPR_WDSEL_E == 3'b01
`define MFC0_M GPR_WDSEL_M == 3'b100
`define MFC0_E GPR_WDSEL_E == 3'b100
`define MTC0_E CP0_WE_E
`define MTC0_EPC_M CP0_WE_M && INST_M[`RD] == 5'd14
`define BRANCH_D CTL_NPCSEL_D == 2'b01
`define JR_D CTL_NPCSEL_D == 2'b11
`define RTYPE (INST_D[`OPCODE]==0 || INST_D!=32'b0)
`define MFHI `RTYPE && INST_D[`FUNCT]==6'b010000
`define MFLO `RTYPE && INST_D[`FUNCT]==6'b010010
`define MTHI `RTYPE && INST_D[`FUNCT]==6'b010001
`define MTLO `RTYPE && INST_D[`FUNCT]==6'b010011
`define MULT `RTYPE && INST_D[`FUNCT]==6'b011000
`define MULTU `RTYPE && INST_D[`FUNCT]==6'b011001
`define DIV `RTYPE && INST_D[`FUNCT]==6'b011010
`define DIVU `RTYPE && INST_D[`FUNCT]==6'b011011
`define USEMDU (`MFHI||`MFLO||`MTHI||`MTLO||`MULT||`MULTU||`DIV||`DIVU)
`define RTYPE_E (INST_E[`OPCODE]==0 || INST_E!=32'b0)
`define MULT_E `RTYPE_E && INST_E[`FUNCT]==6'b011000
`define MULTU_E `RTYPE_E && INST_E[`FUNCT]==6'b011001
`define DIV_E `RTYPE_E && INST_E[`FUNCT]==6'b011010
`define DIVU_E `RTYPE_E && INST_E[`FUNCT]==6'b011011
`define WRITE_MDU_E (`MULT_E || `MULTU_E || `DIV_E || `DIVU_E)
`define ERET_D INST_D == 32'h42000018
module hazardunit(
    input [31:0] INST_M,
    input [31:0] INST_E,
	 input [31:0] INST_D,
    input [4:0] REG_TOWRITE_M,
	 input [4:0] REG_TOWRITE_W,
	 input [4:0] REG_TOWRITE_E,
    input GPR_WE_W,
    input GPR_WE_M,
	 input GPR_WE_E,
	 input MDU_BUSY_E,
    output [1:0] FORWARD_A_E,
    output [1:0] FORWARD_B_E,
	 output [1:0] FORWARD_A_D,
	 output [1:0] FORWARD_B_D,
	 output STALL_F,
	 output STALL_D,
	 output FLUSH_E,
	 input [2:0] GPR_WDSEL_E,
	 input [2:0] GPR_WDSEL_M,
	 input [1:0] CTL_NPCSEL_D,
	 input CP0_WE_E,
	 output FORWARD_EPC,
	 input CP0_WE_M
    );
assign FORWARD_A_E = (INST_E[`RS] != 5'b0) && (INST_E[`RS] == REG_TOWRITE_M) && GPR_WE_M ? 2'b10 :
							(INST_E[`RS] != 5'b0) && (INST_E[`RS] == REG_TOWRITE_W) && GPR_WE_W ? 2'b01 : 2'b00;
assign FORWARD_B_E = (INST_E[`RT] != 5'b0) && (INST_E[`RT] == REG_TOWRITE_M) && GPR_WE_M ? 2'b10 :
							(INST_E[`RT] != 5'b0) && (INST_E[`RT] == REG_TOWRITE_W) && GPR_WE_W ? 2'b01 : 2'b00;
wire lwstall;
wire branchstall;
wire jrstall;
wire MDUstall;
wire stall;
wire cp0stall;
wire eretstall;
assign eretstall = `ERET_D && `MTC0_E;
assign lwstall =  ((INST_D[`RS] == INST_E[`RT] || INST_D[`RT] == INST_E[`RT]) && `MEMTOREG_E) ||
						((INST_D[`RS] == INST_M[`RT] || INST_D[`RT] == INST_M[`RT]) && `MEMTOREG_M) ?  1'b1 : 1'b0;
assign cp0stall =  ((INST_D[`RS] == INST_E[`RT] || INST_D[`RT] == INST_E[`RT]) && `MFC0_E) ||
						((INST_D[`RS] == INST_M[`RT] || INST_D[`RT] == INST_M[`RT]) && `MFC0_M) ?  1'b1 : 1'b0;
assign branchstall =  `BRANCH_D && ((GPR_WE_E && (REG_TOWRITE_E == INST_D[`RS] || REG_TOWRITE_E == INST_D[`RT]))||
							(`MEMTOREG_M && (REG_TOWRITE_M== INST_D[`RS] || REG_TOWRITE_M == INST_D[`RT]))) ? 1'b1 : 1'b0;
assign jrstall = `JR_D && ((GPR_WE_E && (REG_TOWRITE_E == INST_D[`RS] || REG_TOWRITE_E == INST_D[`RT]))||
							(`MEMTOREG_M && (REG_TOWRITE_M== INST_D[`RS] || REG_TOWRITE_M == INST_D[`RT]))) ? 1'b1 : 1'b0;
assign MDUstall = `USEMDU && (MDU_BUSY_E ||`WRITE_MDU_E )? 1 : 0;
assign stall = (lwstall || branchstall || jrstall || MDUstall || cp0stall || eretstall) ? 1'b1 : 1'b0;							
assign STALL_F = stall;
assign STALL_D = stall;
assign FLUSH_E = stall;
assign FORWARD_A_D = (INST_D[`RS] != 5'b0) && (INST_D[`RS] == REG_TOWRITE_M) && GPR_WE_M ? 2'b10 : 2'b00;
assign FORWARD_B_D = (INST_D[`RT] != 5'b0) && (INST_D[`RT] == REG_TOWRITE_M) && GPR_WE_M ? 2'b10 : 2'b00;
assign FORWARD_EPC  = `ERET_D && `MTC0_EPC_M;
endmodule
