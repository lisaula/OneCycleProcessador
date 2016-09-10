`timescale 1ns / 1ps

module Instr_Memory(
	input [15:0] instruction_in,
	input clk, 
	input [7:0] instruction_add,
	input write_enable,
	output reg [15:0] instruction_out,
	output reg [15:0] instruction_deb
    );

	reg [15:0]instrunction_mem[0:255];
	
	always @(posedge clk)
	begin
		if(write_enable) begin
			instrunction_mem[instruction_add] = instruction_in;
		end else begin
			instruction_out = instrunction_mem[instruction_add];
		end
		
		instruction_deb =instrunction_mem[1];
	end

endmodule
