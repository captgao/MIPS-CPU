`timescale 1ns / 1ps
`include "timer.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:53:03 12/30/2017 
// Design Name: 
// Module Name:    bridge 
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
`define HIT0 (addr >= 32'h00007F00 && addr <= 32'h00007F0B)
`define HIT1 (addr >= 32'h00007F10 && addr <= 32'h00007F1B)


module bridge(
    input clk,
    input clr,
    input [31:0] addr,
    input [31:0] WD,
    input WE,
    output [31:0] RD,
    output [5:0] intr
    );
wire [31:0] RD0;
wire [31:0] RD1;
wire INT0;
wire INT1;
assign RD = `HIT0 ? RD0 : `HIT1 ? RD1 : 0;
assign intr = {4'b0, INT1, INT0};
timer TC0(
	.clk(clk),
	.clr(clr),
	.addr(addr[3:2]),
	.WE(WE && `HIT0),
	.Din(WD),
	.Dout(RD0),
	.IRQ(INT0)
);
timer TC1(
	.clk(clk),
	.clr(clr),
	.addr(addr[3:2]),
	.WE(WE && `HIT1),
	.Din(WD),
	.Dout(RD1),
	.IRQ(INT1)
);
endmodule
