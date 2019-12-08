`timescale 1ns / 1ps
module pcmodule(
    input clk,
    input clr,
    input [31:0] WD,
    output reg[31:0] PC,
	 input stall,
	 input intr
);
initial begin
	PC <= 32'h00003000;
end
always @(posedge clk) begin
	if(clr) PC <= 32'h00003000;
	else if(intr) 
		PC <= 32'h00004180;
	else if(stall==0) begin
		PC <= WD;
		//$display("@%h: <= %h", PC,WD); 
	end
end
endmodule 