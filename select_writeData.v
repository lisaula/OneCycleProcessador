module select_writeData(
    input [1:0] wds,
	 input [7:0] ALU_result,
	 input [7:0] read_data2,
	 input [7:0] DM_result,
	 input [7:0] Imm,
    output reg[7:0] write_data
    );
	
	always @ (wds) begin
		case(wds)
			2'b00: write_data = ALU_result;
			2'b01: write_data = read_data2;
			2'b10: write_data = DM_result;
			2'b11: write_data = Imm;
		endcase
	end

endmodule
