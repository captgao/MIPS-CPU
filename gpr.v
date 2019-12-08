`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:54:49 11/28/2017 
// Design Name: 
// Module Name:    gpr 
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

module GPR(
    input clk,
    input clr,
    input WE,
    input [31:0] WD,
    input [4:0] rs,
    input [4:0] rt,
    input [4:0] Waddr,
    output [31:0] dat_rs,
    output [31:0] dat_rt,
	 input [31:0] PC
    );

reg [31:0] register[31:1];
assign dat_rs = ( rs == 0 ) ? 0 : Waddr == rs && WE ? WD :register[rs];
assign dat_rt = ( rt == 0 ) ? 0 : Waddr == rt && WE ? WD :register[rt];
integer i;
initial begin
	for(i=1;i<32;i=i+1) register[i]=32'b0;
end
always @(posedge clk) begin
	if(clr) 	for(i=1;i<32;i=i+1) register[i]<=32'b0;
	else if(WE) begin
		if (Waddr!=0)begin
			register[Waddr]<=WD;
			$display("%d@%h: $%d <= %h", $time, PC, Waddr,WD);  
		end
	end
end
endmodule
