`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:02:11 12/19/2017 
// Design Name: 
// Module Name:    MDU 
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
module MDU(
    input [31:0] RSD,
    input [31:0] RTD,
    input [3:0] CTL,
	 input clk,
	 input clr,
    output busy,
    output [31:0] out,
	 input IRQ
    );
	 reg [4:0] count;
	 reg [31:0] HI;
	 reg [31:0] LO;
	 reg [31:0] _HI;
	 reg [31:0] _LO;
	 assign out = CTL == 0 ? LO :
					  CTL == 1 ? HI : 0;
	 assign busy = count != 0 ? 1 : 0;
	 initial begin
		count = 0;
		HI = 0;
		LO = 0;
		_HI = 0;
		_LO = 0;
	 end
	 always @(posedge clk) begin
		if(clr) begin
			count <= 0;
			HI <= 0;
			LO <= 0;
		end
		else begin
			if(IRQ) count <= 0;
			else begin
				if(busy) begin
					count<=count-1;
					if(count==1) begin
						HI <= _HI;
						LO <= _LO;
					end
				end
				else begin
				case(CTL)
					2: HI<=RSD;
					3: LO<=RSD;
					4: begin
						{_HI,_LO} <= $signed(RSD) * $signed(RTD);
						count <= 5;
						end
					5: begin
						{_HI,_LO} <= RSD * RTD;
						count <= 5;
						end
					6: begin
						_HI <= $signed(RSD) % $signed(RTD);
						_LO <= $signed(RSD) / $signed(RTD);
						count <= 10;
						end
					7: begin
						_HI <= RSD % RTD;
						_LO <= RSD / RTD;
						count <= 10;
						end
				endcase
			end
			end
		end
	 end	
endmodule
