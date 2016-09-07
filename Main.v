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
	wire reg_write;
	wire is_move;
	wire is_mem_access;
	wire is_imm;
	wire [2:0] alu_function;
	wire flags_write;
	wire dm_write_enable;
	wire is_jz;
	wire is_jnz;
	wire is_jl;
	wire is_jg;
	wire is_jump;
	UnitControl UC(Inst[15:11], reg_write, is_move, is_mem_access, is_imm, alu_function, flags_write, dm_write_enable, is_jz, is_jnz, is_jl, is_jg, is_jump);
	
	reg [7:0]write_data;
	wire[7:0] read_data1;
	wire[7:0] read_data2;
	Reg_File RF(Inst[10:9], Inst[8:7], Inst[10:9], write_data, clk,reg_write, read_data1,read_data2);
	
	always @(posedge clk)begin
		
	end

endmodule
