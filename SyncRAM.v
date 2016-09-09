`timescale 1ns / 1ps
module SyncRAM(
	input we,
	input clk_arduino,
	input [7:0] address,
	input [7:0] data_in,
	output [7:0] data_out
    );
	 
	reg [7:0] mem_data [0:255];
	reg [7:0] read_data;
	assign data_out = read_data;
 
	always @ (posedge clk_arduino)
	begin
		if(!we)
			read_data = mem_data [address];
		else
			mem_data [address] = data_in;
	end
	

endmodule
