`timescale 1ns / 1ps
module UnitControl(
	input [4:0] opcode,
	output reg reg_write,
	output reg is_move,
	output reg is_mem_access,
	output reg is_imm,
	output reg [2:0] alu_function,
	output reg flags_write,
	output reg dm_write_enable,
	output reg is_jz,
	output reg is_jnz,
	output reg is_jl,
	output reg is_jg,
	output reg is_jump
    );
	 
	 always @(opcode)
	 begin
		case (opcode)
			5'h0: //nop
				begin
					reg_write <= 1'b0;
					is_move<= 1'b0;
					is_mem_access<= 1'b0;
					is_imm<= 1'b0;
					alu_function<= 3'b000;
					flags_write<= 1'b0;
					dm_write_enable<=1'b0;
					is_jz<= 1'b0;
					is_jnz<= 1'b0;
					is_jl<= 1'b0;
					is_jg<= 1'b0;
					is_jump<= 1'b0;
				end
			5'h1: //add
				begin
					reg_write <= 1'b1;
					is_move<= 1'b0;
					is_mem_access<= 1'b0;//lw
					is_imm<= 1'b0;
					alu_function<= 3'b000;
					flags_write<= 1'b1;
					dm_write_enable<=1'b0;//sw
					is_jz<= 1'b0;
					is_jnz<= 1'b0;
					is_jl<= 1'b0;
					is_jg<= 1'b0;
					is_jump<= 1'b0;
				end
			5'h2: //sub
				begin
					reg_write <= 1'b1;
					is_move<= 1'b0;
					is_mem_access<= 1'b0;
					is_imm<= 1'b0;
					alu_function<= 3'b001;
					flags_write<= 1'b1;
					dm_write_enable<=1'b0;
					is_jz<= 1'b0;
					is_jnz<= 1'b0;
					is_jl<= 1'b0;
					is_jg<= 1'b0;
					is_jump<= 1'b0;

				end
			5'h3: //or
				begin
					reg_write <= 1'b1;
					is_move<= 1'b0;
					is_mem_access<= 1'b0;
					is_imm<= 1'b0;
					alu_function<= 3'h3;
					flags_write<= 1'b1;
					dm_write_enable<=1'b0;
					is_jz<= 1'b0;
					is_jnz<= 1'b0;
					is_jl<= 1'b0;
					is_jg<= 1'b0;
					is_jump<= 1'b0;
					
				end
			5'h4: //and
				begin
					reg_write <= 1'b1;
					is_move<= 1'b0;
					is_mem_access<= 1'b0;
					is_imm<= 1'b0;
					alu_function<= 3'h2;
					flags_write<= 1'b1;
					dm_write_enable<=1'b0;
					is_jz<= 1'b0;
					is_jnz<= 1'b0;
					is_jl<= 1'b0;
					is_jg<= 1'b0;
					is_jump<= 1'b0;
				end
			5'h5: //xor
				begin
					reg_write <= 1'b1;
					is_move<= 1'b0;
					is_mem_access<= 1'b0;
					is_imm<= 1'b0;
					alu_function<= 3'h4;
					flags_write<= 1'b1;
					dm_write_enable<=1'b0;
					is_jz<= 1'b0;
					is_jnz<= 1'b0;
					is_jl<= 1'b0;
					is_jg<= 1'b0;
					is_jump<= 1'b0;					
				end
			5'h6: //mov
				begin
					reg_write <= 1'b1;
					is_move<= 1'b1;
					is_mem_access<= 1'b0;
					is_imm<= 1'b0;
					alu_function<= 3'h0;
					flags_write<= 1'b1;
					dm_write_enable<=1'b0;
					is_jz<= 1'b0;
					is_jnz<= 1'b0;
					is_jl<= 1'b0;
					is_jg<= 1'b0;
					is_jump<= 1'b0;
				end
			5'h7: //lw
				begin
					reg_write <= 1'b1;
					is_move<= 1'b0;
					is_mem_access<= 1'b1;
					is_imm<= 1'b0;
					alu_function<= 3'h0;
					flags_write<= 1'b0;
					dm_write_enable<=1'b0;
					is_jz<= 1'b0;
					is_jnz<= 1'b0;
					is_jl<= 1'b0;
					is_jg<= 1'b0;
					is_jump<= 1'b0;
				end
			5'h8: //sw
				begin
					reg_write <= 1'b0;
					is_move<= 1'b0;
					is_mem_access<= 1'b0;
					is_imm<= 1'b0;
					alu_function<= 3'h0;
					flags_write<= 1'b0;
					dm_write_enable<=1'b1;
					is_jz<= 1'b0;
					is_jnz<= 1'b0;
					is_jl<= 1'b0;
					is_jg<= 1'b0;
					is_jump<= 1'b0;
				end
			5'h9: //li
				begin
					reg_write <= 1'b1;
					is_move<= 1'b0;
					is_mem_access<= 1'b0;
					is_imm<= 1'b1;
					alu_function<= 3'h0;
					flags_write<= 1'b0;
					dm_write_enable<=1'b0;
					is_jz<= 1'b0;
					is_jnz<= 1'b0;
					is_jl<= 1'b0;
					is_jg<= 1'b0;
					is_jump<= 1'b0;
				end
			5'hA: //addi
				begin
					reg_write <= 1'b1;
					is_move<= 1'b0;
					is_mem_access<= 1'b0;
					is_imm<= 1'b1;
					alu_function<= 3'h0;
					flags_write<= 1'b1;
					dm_write_enable<=1'b0;
					is_jz<= 1'b0;
					is_jnz<= 1'b0;
					is_jl<= 1'b0;
					is_jg<= 1'b0;
					is_jump<= 1'b0;
				end
			5'hB: //subi
				begin
					reg_write <= 1'b1;
					is_move<= 1'b0;
					is_mem_access<= 1'b0;
					is_imm<= 1'b1;
					alu_function<= 3'h1;
					flags_write<= 1'b1;
					dm_write_enable<=1'b0;
					is_jz<= 1'b0;
					is_jnz<= 1'b0;
					is_jl<= 1'b0;
					is_jg<= 1'b0;
					is_jump<= 1'b0;
				end
			5'hC: //cmp
				begin
					reg_write <= 1'b0;
					is_move<= 1'b0;
					is_mem_access<= 1'b0;
					is_imm<= 1'b0;
					alu_function<= 3'h1;
					flags_write<= 1'b1;
					dm_write_enable<=1'b0;
					is_jz<= 1'b0;
					is_jnz<= 1'b0;
					is_jl<= 1'b0;
					is_jg<= 1'b0;
					is_jump<= 1'b0;
				end
			5'hD: //jz
				begin
					reg_write <= 1'b0;
					is_move<= 1'b0;
					is_mem_access<= 1'b0;
					is_imm<= 1'b0;
					alu_function<= 3'h0;
					flags_write<= 1'b0;
					dm_write_enable<=1'b0;
					is_jz<= 1'b1;
					is_jnz<= 1'b0;
					is_jl<= 1'b0;
					is_jg<= 1'b0;
					is_jump<= 1'b0;
				end
			5'hE: //jnz
				begin
					reg_write <= 1'b0;
					is_move<= 1'b0;
					is_mem_access<= 1'b0;
					is_imm<= 1'b0;
					alu_function<= 3'h0;
					flags_write<= 1'b0;
					dm_write_enable<=1'b0;
					is_jz<= 1'b0;
					is_jnz<= 1'b1;
					is_jl<= 1'b0;
					is_jg<= 1'b0;
					is_jump<= 1'b0;
				end
			5'hF: //jg
				begin
					reg_write <= 1'b0;
					is_move<= 1'b0;
					is_mem_access<= 1'b0;
					is_imm<= 1'b0;
					alu_function<= 3'h0;
					flags_write<= 1'b0;
					dm_write_enable<=1'b0;
					is_jz<= 1'b0;
					is_jnz<= 1'b0;
					is_jl<= 1'b0;
					is_jg<= 1'b1;
					is_jump<= 1'b0;
				end
			5'h10: //jl
				begin
					reg_write <= 1'b0;
					is_move<= 1'b0;
					is_mem_access<= 1'b0;
					is_imm<= 1'b0;
					alu_function<= 3'h0;
					flags_write<= 1'b0;
					dm_write_enable<=1'b0;
					is_jz<= 1'b0;
					is_jnz<= 1'b0;
					is_jl<= 1'b1;
					is_jg<= 1'b0;
					is_jump<= 1'b0;
				end
			5'h11: //jump
				begin
					reg_write <= 1'b0;
					is_move<= 1'b0;
					is_mem_access<= 1'b0;
					is_imm<= 1'b0;
					alu_function<= 3'h0;
					flags_write<= 1'b0;
					dm_write_enable<=1'b0;
					is_jz<= 1'b0;
					is_jnz<= 1'b0;
					is_jl<= 1'b0;
					is_jg<= 1'b0;
					is_jump<= 1'b1;
				end
			default:
				begin
					reg_write <= 1'b0;
					is_move<= 1'b0;
					is_mem_access<= 1'b0;
					is_imm<= 1'b0;
					alu_function<= 3'h0;
					flags_write<= 1'b0;
					dm_write_enable<=1'b0;
					is_jz<= 1'b0;
					is_jnz<= 1'b0;
					is_jl<= 1'b0;
					is_jg<= 1'b0;
					is_jump<= 1'b0;
				end
		endcase
	 end


endmodule
