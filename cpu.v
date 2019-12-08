`timescale 1ns / 1ps
`include "alu.v"
`include "dm.v"
`include "gpr.v"
`include "im.v"
`include "pipeline_reg.v"
`include "pc.v"
`include "comparator.v"
`include "controller.v"
`include "npc.v"
`include "branchctl.v"
`include "ext.v"
`include "hazardunit.v"
`include "dmext.v"
`include "mdu.v"
`include "cp0.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:41:55 12/10/2017 
// Design Name: 
// Module Name:    mips 
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
`define ADDR_DM(addr) (addr >= 32'h0 && addr <= 32'h00002FFF) 
module cpu(
    input clk,
    input reset,
	 input [31:0] RD_bridge,
	 input [5:0] intr_bridge,
	 output [31:0] addr_bridge,
	 output [31:0] WD_bridge,
	 output WE_bridge
    );
assign addr_bridge = ALURES_M;
assign WD_bridge = RTD_M;
assign WE_bridge = DM_WE_M;
wire [31:0] RTD_M;
wire [31:0] NPC_D;
wire [4:0] CTL_GPR_WADDR_W;
wire [4:0] CTL_GPR_WADDR_M;
wire [4:0] CTL_GPR_WADDR_E;
wire [2:0] CTL_GPR_WDSEL_W;
wire [2:0] CTL_GPR_WDSEL_E;
wire [2:0] CTL_GPR_WDSEL_M;
wire CTL_GPR_WE_W;
wire CTL_GPR_WE_M;
wire CTL_GPR_WE_E;
wire [31:0] INST_D;
wire [1:0] CTL_NPCSEL_D;
wire [31:0] INST_E;
wire MDU_BUSY_E;
/****************Hazard Unit*****************/
wire [1:0] FORWARD_A_E;
wire [1:0] FORWARD_B_E;
wire [1:0] FORWARD_A_D;
wire [1:0] FORWARD_B_D;
wire STALL_F;
wire STALL_D;
wire FLUSH_E;
wire [31:0] PC_W;
wire CP0_WE_E;
wire FORWARD_ERET;
hazardunit uHU(
	.INST_M(INST_M),
	.INST_E(INST_E),
	.INST_D(INST_D),
	.REG_TOWRITE_W(CTL_GPR_WADDR_W),
	.REG_TOWRITE_M(CTL_GPR_WADDR_M),
	.REG_TOWRITE_E(CTL_GPR_WADDR_E),
	.GPR_WE_W(CTL_GPR_WE_W),
	.GPR_WE_M(CTL_GPR_WE_M),
	.GPR_WE_E(CTL_GPR_WE_E),
	.GPR_WDSEL_E(CTL_GPR_WDSEL_E),
	.GPR_WDSEL_M(CTL_GPR_WDSEL_M),
	.CTL_NPCSEL_D(CTL_NPCSEL_D),
	.FORWARD_A_E(FORWARD_A_E),
	.FORWARD_B_E(FORWARD_B_E),
	.FORWARD_A_D(FORWARD_A_D),
	.FORWARD_B_D(FORWARD_B_D),
	.STALL_F(STALL_F),
	.STALL_D(STALL_D),
	.FLUSH_E(FLUSH_E),
	.MDU_BUSY_E(MDU_BUSY_E),
	.CP0_WE_E(CP0_WE_E),
	.CP0_WE_M(CP0_WE),
	.FORWARD_EPC(FORWARD_ERET)
);/******IF******/
wire [31:0] PC_F;
wire [31:0] INST_F;
wire PC_WE_F;
wire [31:0] PC_WD_D;
wire [4:0] EX_F;
pcmodule uPC(
	.clk(clk),
	.clr(reset),
	.WD(PC_WD_D),
	.PC(PC_F),
	.stall(STALL_F || ERET_FLUSH),
	.intr(CP0_IRQ)
);
wire[31:0] EPC_M;
assign EPC_M = FORWARD_ERET ? RTD_M : CP0_EPC;
assign PC_WD_D =  INST_D == 32'h42000018 ? EPC_M : (CTL_NPCSEL_D!=0 ? NPC_D : PC_F + 4);
IM uIM(
	.PC(PC_F),
	.INST(INST_F)
);	
assign EX_F = (PC_F < 32'h00003000 || PC_F >= 32'h00005000 || PC_F[1:0]!=0) ? 5'd4 : 5'd0;
//****************REG F/D****************//
wire ERET_FLUSH;
wire [31:0] PC_D;
pipeline_reg reg_D(
	.INST_I(INST_F),
	.INST_O(INST_D),
	.PC_I(PC_F),
	.PC_O(PC_D),
	.clk(clk),
	.clr(reset),
	.stall(STALL_D),
	.EX_I(EX_F),
	.EX_O(EX_D),
	.flush(CP0_IRQ || ERET_FLUSH)
);
assign ERET_FLUSH = INST_E == 32'h42000018;
//****************ID****************//
wire [4:0] EX_D;
wire CTL_EX_D;
wire [31:0] RSD_D;
wire [31:0] RTD_D;
wire [31:0] IMM32_D;
wire COMP_EQ_D;
wire COMP_LTZ_D;
wire COMP_GTZ_D;
wire COMP_EZ_D;
wire BRANCH_D;
wire [1:0] CTL_EXT_SEL_D;
wire [31:0] REG_WD_W;
wire [31:0] CMP_DS_D;
wire [31:0] CMP_DT_D;
GPR uGPR(
	.clk(clk),
	.clr(reset),
	.rs(INST_D[`RS]),
	.rt(INST_D[`RT]),
	.dat_rs(RSD_D),
	.dat_rt(RTD_D),
	//WB
	.WE(CTL_GPR_WE_W),
	.WD(REG_WD_W),
	.Waddr(CTL_GPR_WADDR_W),
	.PC(PC_W)
);
extender uEXT(
	.ext_sel(CTL_EXT_SEL_D),
	.imm(INST_D[`IMM]),
	.imm32(IMM32_D),
	.shamt(INST_D[`SHAMT])
);
comparator uCMP(
	.D1(CMP_DS_D),
	.D2(CMP_DT_D),
	.comp_eq(COMP_EQ_D),
	.comp_ltz(COMP_LTZ_D),
	.comp_gtz(COMP_GTZ_D),
	.comp_ez(COMP_EZ_D)
);
wire[31:0] REG_WD_M;
assign REG_WD_M = CTL_GPR_WDSEL_M == 0 ? ALURES_M : 
						CTL_GPR_WDSEL_M == 2 ? PC_M+8 : 
						CTL_GPR_WDSEL_M == 3 ? MDU_M : 0;
assign CMP_DS_D = FORWARD_A_D == 2'b10 ? REG_WD_M : RSD_D;
assign CMP_DT_D = FORWARD_B_D == 2'b10 ? REG_WD_M : RTD_D;

branchctl BCTL(
	.opcode(INST_D[`OPCODE]),
	.rt(INST_D[`RT]),
	.comp_eq(COMP_EQ_D),
	.comp_ltz(COMP_LTZ_D),
	.comp_gtz(COMP_GTZ_D),
	.comp_ez(COMP_EZ_D),
	.branch(BRANCH_D)
);
npc unPC(
	.PC(PC_D),
	.nPCsel(CTL_NPCSEL_D),
	.imm(INST_D[`IMM]),
	.index(INST_D[`INDEX]),
	.branch(BRANCH_D),
	.regd(CMP_DS_D), //use CMP_DS_D which is the same as RSD actually
	.nPC(NPC_D)
);
controller CTL_D(
	.INST(INST_D),
	.nPCsel(CTL_NPCSEL_D),
	.ext_sel(CTL_EXT_SEL_D),
	.exception(CTL_EX_D)
);
wire [4:0] EX_CODE_D;
assign EX_CODE_D = EX_D != 5'd0 ? EX_D :
				  CTL_EX_D ? 5'd10 : 5'd0;
//****************REG D/E****************//
wire [4:0] EX_E;
wire [31:0] RSD_E;
wire [31:0] RTD_E;
wire [31:0] PC_E;
wire [31:0] IMM32_E;
pipeline_reg reg_E(
	.INST_I(INST_D),
	.INST_O(INST_E),
	.RSD_I(RSD_D), 
	.RSD_O(RSD_E),
	.RTD_I(RTD_D),
	.RTD_O(RTD_E),
	.PC_I(PC_D),
	.PC_O(PC_E),
	.IMM32_I(IMM32_D),
	.IMM32_O(IMM32_E),
	.EX_I(EX_CODE_D),
	.EX_O(EX_E),
	.clk(clk),
	.clr(reset),
	.flush(FLUSH_E||CP0_IRQ)
);
//****************EX****************//
wire CTL_USEIMM_E;
wire [31:0] ALURES_E;
wire [31:0] MDU_OUT_E;
wire [31:0] ALU_SRC_A;
wire [31:0] ALU_SRC_B;
wire [3:0] CTL_MDU_CTL_E;
wire [3:0] CTL_ALUOP_E;
wire CTL_USESHAMT_E;
wire ALU_SIGN_E;
wire ALU_EX_E;
ALU uALU(
	.A(CTL_USESHAMT_E ? {27'b0,INST_E[`SHAMT]} : ALU_SRC_A),
	.B(CTL_USEIMM_E ? IMM32_E : ALU_SRC_B),
	.op(CTL_ALUOP_E),
	.res(ALURES_E),
	.exception(ALU_EX_E)
);
MDU uMDU(
	.clk(clk),
	.clr(reset),
	.RSD(ALU_SRC_A),
	.RTD(ALU_SRC_B),
	.CTL(CTL_MDU_CTL_E),
	.busy(MDU_BUSY_E),
	.out(MDU_OUT_E),
	.IRQ(CP0_IRQ)
);
assign ALU_SRC_A = FORWARD_A_E == 2'b10 ? REG_WD_M : 
						 FORWARD_A_E == 2'b01 ? REG_WD_W : RSD_E;
assign ALU_SRC_B = FORWARD_B_E == 2'b10 ? REG_WD_M : 
						 FORWARD_B_E == 2'b01 ? REG_WD_W : RTD_E;
controller CTL_E(
	.INST(INST_E),
	.use_imm(CTL_USEIMM_E),
	.ALUop(CTL_ALUOP_E),
	.GPR_Waddr(CTL_GPR_WADDR_E),
	.GPR_WE(CTL_GPR_WE_E),
	.GPR_WDsel(CTL_GPR_WDSEL_E),
	.use_shamt(CTL_USESHAMT_E),
	.MDU_CTL(CTL_MDU_CTL_E),
	.DM_WE(DM_WE_E),
	.CP0_WE(CP0_WE_E)
);
wire DM_WE_E;
wire [4:0] EX_CODE_E;
assign EX_CODE_E = EX_E != 5'd0 ? EX_E :
						 ALU_EX_E ? (DM_WE_E ? 5'd5 : CTL_GPR_WDSEL_E == 1 ? 5'd4 : 5'd12) 
						 :5'd0;
//****************REG E/M****************//
wire [4:0] EX_M;
wire [31:0] INST_M;

wire [31:0] PC_M;
wire [31:0] ALURES_M;
wire [31:0] MDU_M;
pipeline_reg reg_M(
	.INST_I(INST_E),
	.INST_O(INST_M),
	.RTD_I(ALU_SRC_B), 
	.RTD_O(RTD_M),
	.PC_I(PC_E),
	.PC_O(PC_M),
	.ALURES_I(ALURES_E),
	.ALURES_O(ALURES_M),
	.MDU_I(MDU_OUT_E),
	.MDU_O(MDU_M),
	.EX_I(EX_CODE_E),
	.EX_O(EX_M),
	.clk(clk),
	.clr(reset),
	.flush(CP0_IRQ)
);
//****************ME****************//
wire [31:0] DM_M;
wire CTL_DM_WE_M;
wire [1:0] CTL_DM_CTL_M;
wire [2:0] DME_CTL_M;
wire DM_LOAD_EX_M;
assign DM_LOAD_EX_M = CTL_GPR_WDSEL_M == 1 &&
							(ALURES_M[1:0]!=0 &&  DME_CTL_M ==4||
							 ALURES_M[0]!=0 && ( DME_CTL_M == 2 || DME_CTL_M == 3) ||
							 !(ALURES_M >= 32'h0 && ALURES_M <= 32'h00002FFF || ALURES_M >= 32'h00007F00 && ALURES_M <= 32'h00007F0B || 
							 ALURES_M >= 32'h00007F10 && ALURES_M <= 32'h00007F1B)) ;
assign DM_STORE_EX_M =  CTL_DM_WE_M && 
								(ALURES_M[1:0]!=0 && CTL_DM_CTL_M == 2 || ALURES_M[0]!=0 && CTL_DM_CTL_M == 1 ||
								!(ALURES_M >= 32'h0 && ALURES_M <= 32'h00002FFF || ALURES_M >= 32'h00007F00 && ALURES_M <= 32'h00007F07 || 
								ALURES_M >= 32'h00007F10 && ALURES_M <= 32'h00007F17)) ;
wire DM_WE_M;
assign DM_WE_M = CTL_DM_WE_M && !DM_STORE_EX_M && !CP0_IRQ;
DM uDM(
	.clk(clk),
	.clr(reset),
	.WD(RTD_M),
	.PC(PC_M),
	.addr(ALURES_M),
	.RD(DM_M),
	.WE(DM_WE_M && `ADDR_DM(ALURES_M)),
	.CTL(CTL_DM_CTL_M)
);
controller CTL_M(
	.INST(INST_M),
	.DM_WE(CTL_DM_WE_M),
	.GPR_Waddr(CTL_GPR_WADDR_M),
	.GPR_WE(CTL_GPR_WE_M),
	.GPR_WDsel(CTL_GPR_WDSEL_M),
	.DM_CTL(CTL_DM_CTL_M),
	.CP0_WE(CP0_WE),
	.DME_CTL(DME_CTL_M)
);
wire [4:0] CP0_ADDR;
assign CP0_ADDR = INST_M[`RD];
wire CP0_WE;
wire [4:0] CP0_EXCODE;
wire [5:0] CP0_INTR;
wire CP0_EXLCLR, CP0_IRQ;
wire [31:0] CP0_RD;
wire [31:0] CP0_EPC;
wire [31:0] CP0_PC_IN;
assign CP0_EXCODE = EX_M != 5'd0 ? EX_M :
						  DM_LOAD_EX_M ? 5'd4:
						  DM_STORE_EX_M ? 5'd5 : 5'd0;
cp0 CP0(
	.clk(clk),
	.clr(reset),
	.addr(CP0_ADDR),
	.Din(RTD_M),
	.PC(CP0_PC_IN),
	.WE(CP0_WE),
	.excode(CP0_EXCODE),
	.intr(intr_bridge),
	.exlclr(INST_W==32'h42000018),
	.IRQ(CP0_IRQ),
	.EPC(CP0_EPC),
	.Dout(CP0_RD),
	.BD(CTL_NPCSEL_W!=0)
);
assign CP0_PC_IN = PC_M != 0 ? PC_M :
						 PC_E != 0 ? PC_E :
						 PC_D != 0 ? PC_D : PC_F;
//****************REG M/W****************//
wire [31:0] INST_W;
wire [31:0] DM_W;
wire [31:0] ALURES_W;
wire [31:0] MDU_W;
wire [31:0] CP0_W;
pipeline_reg reg_W(
	.INST_I(INST_M),
	.INST_O(INST_W),
	.DM_I(`ADDR_DM(ALURES_M) ? DM_M : RD_bridge),
	.DM_O(DM_W),
	.PC_I(PC_M),
	.PC_O(PC_W),
	.ALURES_I(ALURES_M),
	.ALURES_O(ALURES_W),
	.MDU_I(MDU_M),
	.MDU_O(MDU_W),
	.CP0_I(CP0_RD),
	.CP0_O(CP0_W),
	.clk(clk),
	.clr(reset),
	.flush(CP0_IRQ)
);
//****************WB****************//
wire[31:0] DM_DATA_W;
wire[2:0] CTL_DME_CTL_W;
wire [1:0] CTL_NPCSEL_W;
controller CTL_W(
	.INST(INST_W),
	.GPR_Waddr(CTL_GPR_WADDR_W),
	.GPR_WDsel(CTL_GPR_WDSEL_W),
	.GPR_WE(CTL_GPR_WE_W),
	.DME_CTL(CTL_DME_CTL_W),
	.nPCsel(CTL_NPCSEL_W)
);
DMext uDME(
	.worddata(DM_W),
	.CTL(CTL_DME_CTL_W),
	.addr(ALURES_W[1:0]),
	.out(DM_DATA_W)
);
assign REG_WD_W = CTL_GPR_WDSEL_W == 0 ? ALURES_W : 
						CTL_GPR_WDSEL_W == 1 ? DM_DATA_W :
						CTL_GPR_WDSEL_W == 2 ? PC_W+8 :
						CTL_GPR_WDSEL_W == 3 ? MDU_W : CP0_W;
endmodule
