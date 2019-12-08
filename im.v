`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:31:32 11/28/2017 
// Design Name: 
// Module Name:    im 
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
module IM(
    input [31:0] PC,
    output [31:0] INST
    );
	integer i;
	reg[31:0] memory[4095:0];
	wire[11:0] maddr;
	assign maddr = PC[13:2]-12'hc00;
	assign INST=memory[maddr];
	initial begin
		for(i=0;i<4096;i=i+1) memory[i]=0;
		$readmemh("code.txt",memory);
		$readmemh("code_handler.txt",memory,1120,2047);
	end

endmodule
