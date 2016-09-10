`timescale 1ns / 1ps

module Main(
	input [15:0]data_in,
	input clk, 
	input [7:0]inst_add,
	input [1:0] reg_address,
	input isntruction_wenable,
	output [2:0]Flags,
	output [7:0]registro
	,output reg[7:0]LEDS
	,input btnLEDS,
	output ledsito
    );
	 
	reg [7:0] PC;
	wire [7:0]instr_address =  isntruction_wenable? inst_add : PC;
	wire [15:0] out_inst;
	wire [15:0]debuggin;
	Instr_Memory IM(data_in, clk, instr_address, isntruction_wenable, out_inst, debuggin);
	wire [15:0]Inst = isntruction_wenable? 16'h0 : out_inst;
	
	//borrar 
	assign ledsito = isntruction_wenable;
	
	
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
	wire [1:0]writeData_select;
	UnitControl UC(Inst[15:11], reg_write, is_move, is_mem_access, is_imm, alu_function, flags_write, dm_write_enable, is_jz, is_jnz, is_jl, is_jg, is_jump,writeData_select);
	
	wire [7:0]write_data;
	wire[7:0] read_data1;
	wire[7:0] read_data2;
	Reg_File RF(Inst[10:9], Inst[8:7], Inst[10:9], write_data, clk,reg_write, read_data1,read_data2, reg_address, registro);
	
	wire [7:0] result;
	wire [2:0] flags;
	wire [7:0] input2_ALU;
	assign input2_ALU = (is_imm)?Inst[8:1]:read_data2;
	ALU alu(read_data1, input2_ALU, alu_function,result, flags);
	
	wire [7:0] data_out;
	SyncRAM ram(dm_write_enable, clk,read_data2,read_data1, data_out);
	
	wire [7:0]data_ismove = is_move? result:read_data2;
	
	reg [2:0]ALU_Flags;
	wire jump;
	JumpLogic JL(ALU_Flags,is_jz, is_jnz, is_jl, is_jg, is_jump, jump );
	assign Flags = ALU_Flags;
	
	select_writeData swd(writeData_select,result,read_data2,data_out,Inst[8:1],write_data);
	
	always @(posedge clk)begin
		if(flags_write)begin
			ALU_Flags = flags;
		end
		if (!isntruction_wenable) begin
			if(jump) begin
				PC = Inst[10:3];
			end else begin
				if (PC < 255)begin
					PC = PC +1;
				end
			end
		end else begin
			PC =0;
		end
	end
	
	always @(*)begin
		if(btnLEDS)
			LEDS = debuggin[7:0];
		else
			LEDS = debuggin[15:8];
		//LEDS = inst_add;
		//LEDS = reg_address;
		//LEDS = registro;
	end
	
endmodule
