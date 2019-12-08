`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:01:39 12/10/2017 
// Design Name: 
// Module Name:    Pipeline_REG 
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
module pipeline_reg(
	 input clk,
	 input clr,
    input [31:0] INST_I,
    output reg[31:0] INST_O,
    input [31:0] PC_I,
    output reg[31:0] PC_O,
    input [31:0] RSD_I,
    output reg[31:0] RSD_O,
    input [31:0] RTD_I,
    output reg[31:0] RTD_O,
    input [31:0] IMM32_I,
    output reg[31:0] IMM32_O,
    input [31:0] ALURES_I,
    output reg[31:0] ALURES_O,
    input [31:0] DM_I,
    output reg[31:0] DM_O,
	 input [31:0] MDU_I,
	 output reg[31:0] MDU_O,
	 input [31:0] CP0_I,
	 output reg[31:0] CP0_O,
	 input [4:0] EX_I,
	 output reg[4:0] EX_O,
	 input flush,
	 input stall
    );
initial begin
	INST_O <= 32'b0;
	PC_O <= 32'b0;
	RSD_O <= 32'b0;
	RTD_O <= 32'b0;
	IMM32_O <= 32'b0;
	ALURES_O <= 32'b0;
	DM_O <= 32'b0;
	MDU_O <= 32'b0;
	CP0_O <= 32'b0;
	EX_O <= 5'd0;
end
always @(posedge clk) begin
	if(clr || flush) begin
		INST_O <= 32'b0;
		PC_O <= 32'b0;
		RSD_O <= 32'b0;
		RTD_O <= 32'b0;
		IMM32_O <= 32'b0;
		ALURES_O <= 32'b0;
		DM_O <= 32'b0;
		MDU_O <= 32'b0;
		CP0_O <= 32'b0;
		EX_O <= 5'd0;
	end
	else if (stall==1);
	else begin
		INST_O <= INST_I;
		PC_O <= PC_I;
		RSD_O <= RSD_I;
		RTD_O <= RTD_I;
		IMM32_O <= IMM32_I;
		ALURES_O <= ALURES_I;
		DM_O <= DM_I;
		MDU_O <= MDU_I;
		CP0_O <= CP0_I;
		EX_O <= EX_I;
	end
end

endmodule
