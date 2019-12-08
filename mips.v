`timescale 1ns / 1ps
`include "cpu.v"
`include "bridge.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:07:28 12/31/2017 
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
module mips(
    input clk,
    input reset
    );
	 wire [31:0] RD_bridge;
	 wire [31:0] WD_bridge;
	 wire [31:0] addr_bridge;
	 wire [5:0] intr_bridge;
	 wire WE_bridge;
cpu CPU(
	.clk(clk),
	.reset(reset),
	.RD_bridge(RD_bridge),
	.intr_bridge(intr_bridge),
	.addr_bridge(addr_bridge),
	.WD_bridge(WD_bridge),
	.WE_bridge(WE_bridge)
);
bridge Bridge(
	.clk(clk),
	.clr(reset),
	.addr(addr_bridge),
	.WD(WD_bridge),
	.RD(RD_bridge),
	.intr(intr_bridge),
	.WE(WE_bridge)
);
endmodule
