`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:25:35 12/10/2017 
// Design Name: 
// Module Name:    branchctl 
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
`define BEQ opcode==6'b000100
`define BNE opcode==6'b000101
`define BLEZ opcode==6'b000110
`define BGEZ opcode==6'b000001 && rt==5'b1
`define BLTZ opcode==6'b000001 && rt==5'b0
`define BGTZ opcode==6'b000111
module branchctl(
	input [5:0] opcode,
	input [4:0] rt,
	input comp_eq,
	input comp_ltz,
	input comp_gtz,
	input comp_ez,
	output branch
);
assign branch = (`BEQ && comp_eq || `BNE && !comp_eq || `BLEZ && (comp_ltz||comp_ez) ||
						`BLTZ && comp_ltz || `BGTZ && comp_gtz || `BGEZ && (comp_gtz||comp_ez))? 1'b1 : 1'b0 ;
endmodule 