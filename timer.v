`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:54:24 12/30/2017 
// Design Name: 
// Module Name:    timer 
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
module timer(
    input clk,
    input clr,
    input [1:0] addr,
    input WE,
    input [31:0] Din,
    output [31:0] Dout,
    output IRQ
    );
parameter STAT_IDLE = 2'd0;
parameter STAT_LOAD = 2'd1;
parameter STAT_CONT = 2'd2;
parameter STAT_INTR = 2'd3;
reg [1:0] stat;
reg [3:0] ctrl;
reg [31:0] preset;
reg [31:0] count;
assign Dout = addr == 0 ? {28'b0,ctrl} : 
				  addr == 1 ? preset : 
				  addr == 2 ? count : 0;
assign IRQ = ctrl[3] && stat == STAT_INTR;
initial begin
	ctrl=0;
	preset=0;
	count=0;
end
always @(posedge clk) begin
	if(clr) begin
		ctrl=0;
		preset=0;
		count=0;
	end
	else if(WE) begin
		case(addr)
		0:begin
			ctrl<=Din[3:0];
			if(Din[0])
				stat <= STAT_LOAD;
			else
				stat <= STAT_IDLE;
			end
		1:begin
				preset <= Din;
				count <= Din;
			end
		default:;
		endcase
	end
	else begin
		case(stat)
			STAT_IDLE:;
			STAT_CONT:begin
				if(count == 1)
					stat <= STAT_INTR;
				count <= count - 1;
			end
			STAT_LOAD:begin
				count <= preset;
				stat <= STAT_CONT;
			end
			STAT_INTR:begin
				if(ctrl[1] == 0)begin
					stat <= STAT_IDLE;
					ctrl[0] <= 0;
				end
				else begin
					count <= preset;
					stat <= STAT_CONT;
				end
			end
		endcase
	end
end
endmodule
