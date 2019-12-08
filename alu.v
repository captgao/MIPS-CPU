`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:28:28 11/28/2017 
// Design Name: 
// Module Name:    alu 
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
module ALU(
    input [31:0] A,
    input [31:0] B,
    input [3:0] op,

    output reg[31:0] res,
	 output exception
    );
initial begin
	res = 0;
end

always @* begin
	case(op) 
		0:res=A+B;
		1:res=A-B;
		2:res=A|B;
		3:res=A&B;
		4:res=B;
		5:res=A^B;
		6:res=~(A|B);
		7:res=B<<A[4:0];
		8:res=B>>A[4:0];
		9:res=$signed(B)>>>A[4:0];
		10:res = $signed(A) < $signed(B) ? 32'b1 : 32'b0;
		11:res = A < B ? 32'b1 : 32'b0;
		12:res = $signed(A) + $signed(B);
		13:res = $signed(A) - $signed(B);
		default:res=A+B;
	endcase
end
assign exception = op==4'd12 && ($signed(A)>0 && $signed(B)>0 && $signed(res)<0 || $signed(A)<0 && $signed(B)<0 && $signed(res)>0) ||
									  op==4'd13 && ($signed(A)>0 && $signed(B)<0 && $signed(res)<0 || $signed(A)<0 && $signed(B)>0 && $signed(res)>0);

endmodule
