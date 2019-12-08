`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:25:08 12/10/2017 
// Design Name: 
// Module Name:    npc 
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
module npc(
	input [31:0] PC,
	output [31:0] nPC,
	input [1:0] nPCsel,
	input [15:0] imm,
	input [25:0] index,
	input [31:0] regd,
	input branch
);
assign nPC = nPCsel==0 ? PC+8 : 
					nPCsel==1 ? (branch ? PC + 4 + {{14{imm[15]}} , imm, 2'b0} : PC + 8) :
					nPCsel==2 ? {PC[31:28],index,2'b0} : 
					nPCsel==3 ? regd : 32'h00003000;
endmodule 