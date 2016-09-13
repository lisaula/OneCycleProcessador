`timescale 1ns / 1ps

module Instr_Memory(
	input [15:0] instruction_in,
	input clk, 
	input [7:0] instruction_add,
	input write_enable,
	output [15:0] instruction_out,
	output [15:0] instruction_deb,
	input [7:0] contador
    );

	reg [15:0]instrunction_mem[0:255];
	
	assign instruction_out = instrunction_mem[instruction_add];
	assign instruction_deb =instrunction_mem[contador];
	always @(posedge clk)
	begin
		if(write_enable) begin
			instrunction_mem[instruction_add] = instruction_in;
		end
	end

endmodule
