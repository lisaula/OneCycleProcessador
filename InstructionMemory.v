module InstructionMemory(
    input [7:0] address,
    output reg [15:0] data
);

    always @ (address)
    begin
        case (address)
            8'h00: data = 16'h4810;
            8'h01: data = 16'h4A12;
            8'h02: data = 16'h4C14;
            8'h03: data = 16'h4e16;
            8'h04: data = 16'h0880;
				8'h05: data = 16'h500a;
            default: data = 16'h0000;
        endcase
    end
	 
endmodule 