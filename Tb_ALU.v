`timescale 1ns / 1ps
module Tb_ALU(
    );

	reg signed [7:0] a;
	reg signed [7:0] b;
	reg [3:0] _function;
	wire signed [7:0] result;
	wire[2:0] flags;
	ALU alu(a,b,_function, result, flags);
	initial
	begin
		a = 127;
		b=-1;
		_function = 1;
	end
	
endmodule
