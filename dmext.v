`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:45:43 12/19/2017 
// Design Name: 
// Module Name:    DMext 
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
module DMext(
    input [31:0] worddata,
    input [2:0] CTL,
    output [31:0] out,
    input [1:0] addr
    );

	wire [1:0] _byte;
	wire _half;
	assign _byte = addr;
	assign _half = addr == 2 ? 1 : 0;
	wire [7:0] bytedata;
	wire [15:0] halfdata;
	assign bytedata = _byte == 0 ? worddata[7:0] : _byte == 1 ? worddata[15:8] : _byte ==2 ? worddata[23:16] : worddata[31:24];
	assign halfdata = _half ? worddata[31:16] : worddata[15:0];
	assign out = CTL == 0 ? {{24{bytedata[7]}},bytedata} :
					 CTL == 1 ? {24'b0, bytedata} : 
					 CTL == 2 ? {{16{halfdata[15]}},halfdata} :
					 CTL == 3 ? {16'b0, halfdata} :
					 CTL == 4 ? worddata : 0;
endmodule
