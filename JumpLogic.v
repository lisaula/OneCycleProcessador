`timescale 1ns / 1ps
module JumpLogic(
	input [2:0] ALU_Flags,
	input isjz,
	input isjnz,
	input isjl,
	input isjg,
	input isjump,
	output jump
    );
	 
	 wire jz;
	 wire jnz;
	 wire jl;
	 wire jg;
	 
	 wire data_xor;
	 wire not_zero;
	 
	 
	assign not_zero = !ALU_Flags[2];
	assign data_xor = (ALU_Flags[1] ^ ALU_Flags[0]);
		
	assign jz = isjz && ALU_Flags[2];
	assign jnz =  not_zero && isjnz;
	assign jl =  data_xor && isjl;
	assign jg = !data_xor && not_zero && isjg;
		
	assign jump = jz || jnz || jl || jg;
		
	 
	 
	 


endmodule
