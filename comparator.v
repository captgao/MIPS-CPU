`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:12:53 12/10/2017 
// Design Name: 
// Module Name:    Comparator 
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
module comparator(
    input signed [31:0] D1,
    input signed [31:0] D2,
    output comp_eq,
    output comp_l,
    output comp_g,
    output comp_ltz,
    output comp_gtz,
    output comp_ez
    );
assign comp_eq = (D1 == D2) ? 1'b1 : 1'b0;
assign comp_l = (D1 > D2) ? 1'b1 : 1'b0;	 
assign comp_g = (D1 < D2) ? 1'b1 : 1'b0;
assign comp_ltz = (D1 < 0) ? 1'b1 : 1'b0;
assign comp_gtz = (D1 > 0) ? 1'b1 : 1'b0;
assign comp_ez = (D1 == 0)? 1'b1 : 1'b0;
endmodule
