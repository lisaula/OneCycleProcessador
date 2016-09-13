`timescale 1ns / 1ps
module ALU(
	input signed [7:0] a, 
	input signed [7:0] b,
	input [2:0] _function,
	output reg signed[7:0] result,
	output reg [2:0] flags
   );
	 
	parameter
		ADD = 3'H0,
		SUB = 3'H1,
		AND = 3'H2,
		OR = 3'H3,
		XOR = 3'H4;

		wire [7:0]WIDTH = 8;
		wire [7:0]MSB   = WIDTH-1;
		reg extra;
		reg overflow;
		reg underflow;

	always @(a or b or _function)
	begin
		case (_function)
			ADD:	begin
				{extra, result} = {a[MSB], a} + {b[MSB], b} ;
				overflow  = ({extra, result[MSB]} == 2'b01 );
				underflow = ({extra, result[MSB]} == 2'b10 );
			end
			SUB: begin
				{extra, result} = {a[MSB], a} - {b[MSB], b} ;
				underflow = ({extra, result[MSB]} == 2'b01 );
				overflow= ({extra, result[MSB]} == 2'b10 );
			end
			AND: result = a & b;
			OR: result = a | b;
			XOR: result = a ^ b;
			default: result = 4'H0;
		endcase
		flags[2] = result == 0;//zero flag
		flags[1] = result[7]; // sign flag
		flags[0] = overflow | underflow; //overflow flag
	end
	
	initial 
	begin
		result = 0;
	end
endmodule
