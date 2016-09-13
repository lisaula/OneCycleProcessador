`timescale 1ns / 1ps
module Tb_ALU(
    );

	reg signed [7:0] a;
	reg signed [7:0] b;
	reg [2:0] _function;
	wire signed [7:0] result;
	wire[2:0] flags;
	ALU alu(a,b,_function, result, flags);
	
	initial
	begin
		a = 5;
		b=1;
		_function = 0;
	end
	
endmodule
