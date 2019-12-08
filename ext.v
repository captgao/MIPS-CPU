`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:42:29 11/28/2017 
// Design Name: 
// Module Name:    ext 
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
module extender(
    input [1:0] ext_sel,
    input [15:0] imm,
    output [31:0] imm32,
	 input [4:0] shamt
    );
	assign imm32 = ext_sel == 0 ? {16'b0,imm} : 
						ext_sel == 1 ? {{16{imm[15]}},imm} :
						ext_sel == 2 ? {27'b0,shamt} : 
						ext_sel == 3 ? {imm,16'b0} : 0;


endmodule
