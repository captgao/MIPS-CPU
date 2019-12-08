`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:24:12 11/28/2017 
// Design Name: 
// Module Name:    dm 
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

module DM(
    input clk,
    input clr,
	 input [31:0] WD,
    input [31:0] addr,
	 input [1:0] CTL,
    input WE,
    output [31:0] RD,
	 input [31:0] PC
    );
	reg[31:0] memory[4095:0];
	wire[31:0] worddata;
	wire[1:0] _byte;
	wire _half;
	assign _byte = addr[1:0];
	assign _half = addr[1:0] == 2 ? 1 : 0;
	integer writeword;
	assign worddata = memory[addr[13:2]];
	assign RD = worddata;
	integer i;
initial begin
	for(i=0;i<4096;i=i+1) memory[i]<=0;
end
always @(posedge clk) begin
	if (clr) for(i=0;i<4096;i=i+1) memory[i]<=0;
	else begin
		if(WE) begin
			case(CTL)
				0: case(_byte)
						0: writeword = {worddata[31:8], WD[7:0]};
						1: writeword = {worddata[31:16], WD[7:0], worddata[7:0]};
						2: writeword = {worddata[31:24], WD[7:0], worddata[15:0]};
						3: writeword = {WD[7:0], worddata[23:0]};
					endcase
				1: case(_half)
						0: writeword = {worddata[31:16], WD[15:0]};
						1: writeword = {WD[15:0], worddata[15:0]};
					endcase
				2: writeword = WD;
			endcase
			memory[addr[11:2]] <= writeword;
			$display("%d@%h: *%h <= %h", $time, PC, {addr[31:2],2'b0}, writeword); 
		end
	end
end 
endmodule
