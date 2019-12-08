`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:55:07 12/31/2017 
// Design Name: 
// Module Name:    cp0 
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
module cp0(
    input [4:0] addr,
    input [31:0] Din,
    input [31:0] PC,
    input [4:0] excode,
	 input [5:0] intr,
    input WE,
	 input BD,
    //input exlset,
    input exlclr,
    input clk,
    input clr,
    output IRQ,
    output reg [31:0] EPC,
    output [31:0] Dout
    );
	 wire exlset;
	 assign exlset = IRQ;
	 reg [5:0] im;
	 reg exl,ie;
	 wire [31:0] SR;
	 assign SR = {16'b0, im, 8'b0, exl, ie};
	 wire [31:0] prID;
	 assign prID =  32'h23333333;
	 reg [5:0] IP;
	 reg [4:0] _excode;
	 wire[31:0] CAUSE;
	 reg _BD;
	 assign CAUSE = {_BD, 15'b0, IP, 3'b0, _excode, 2'b0};
	 assign Dout = addr == 12 ? SR : 
						addr == 13 ? CAUSE :
						addr == 14 ? EPC :
						addr == 15 ? prID : 0;
	 assign IRQ = |(intr[5:0] & im[5:0]) && ie && !exl || excode != 5'd0;
	 initial begin
		im = 0;
		exl = 0;
		ie = 0;
		IP = 0;
		EPC = 32'h00003000;
		_excode = 0;
		_BD = 0;
	 end
	 always @(posedge clk) begin
		if(clr) begin
			im <= 0;
			exl <= 0;
			ie <= 0;
			IP <= 0;
			_excode <= 0;
			_BD <= 0;
			EPC <= 32'h00003000;
		end
		else begin
			IP <= intr;
			if(IRQ) begin
				if(|(intr[5:0] & im[5:0]) && ie && !exl) 
					_excode <= 0;
				else
					_excode <= excode;
				if(BD) EPC <= PC - 4;
				else EPC <= PC;
				_BD <= BD;
			end
			if(WE) begin
				case(addr)
					12:begin
						im <= Din[15:10];
						exl <= Din[1];
						ie <= Din[0];
					end
					14:EPC <= Din;
					default:;
				endcase
			end
			else if(exlset) exl <= 1;
			else if(exlclr) exl <= 0;
		end
	end			
endmodule
