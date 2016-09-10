`timescale 1ns / 1ps
module tb_IM(
	
    );

	reg [15:0] instruction_in;
	reg clk;
	reg [7:0] instruction_add;
	reg write_enable;
	wire[15:0] instruction_out;
	wire[15:0] instruction_deb;
	
	Instr_Memory IM(instruction_in, clk, instruction_add, write_enable, instruction_out, instruction_deb);
	
	initial 
	begin
		clk = 0;
		instruction_in = 16'h0;
		instruction_add = 0;
		write_enable=0;
		#20;
		write_enable=1;
		#20;
		instruction_in = 16'h4810;
		instruction_add = 0;
		#20;
		instruction_in = 16'h4A0A;
		instruction_add = 1;
		#20;
		instruction_in = 16'h4C02;
		instruction_add = 2;
		
		#20;
		write_enable=0;
		#20;
		instruction_add=0;
		#20;
		instruction_add=1;
		#20;
		instruction_add=2;
	end
	
	always
	begin
		#10;
		clk = !clk;
	end

endmodule
