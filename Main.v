`timescale 1ns / 1ps

module Main(
	input [15:0]data_in,
	input clk, 
	input [7:0]inst_add,
	input isntruction_wenable
    );
	 
	reg [7:0]PC;
	wire instr_address =  isntruction_wenable? inst_add : PC;
	wire [15:0]Inst;
	
	Instr_Memory IM(data_in, clk, instr_address, isntruction_wenable, Inst);
	 
	

endmodule
