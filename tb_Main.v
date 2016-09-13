`timescale 1ns / 1ps
module tb_Main(
	
    );
	reg [15:0]data_in;
	reg clk;
	reg [7:0]inst_add;
	reg [1:0] reg_address;
	reg isntruction_wenable;
	wire [2:0]Flags;
	wire [7:0]registro;
	wire[7:0]LEDS;
	reg btnLEDS;
	reg boton;
	wire ledsito;

	Main main(data_in, clk, inst_add, reg_address, isntruction_wenable, Flags, registro, LEDS, btnLEDS,boton, ledsito);
	
	initial
	begin
		clk = 0;
		boton =0;
		data_in = 0;
		inst_add= 1;
		reg_address = 0;
		btnLEDS=0;
		isntruction_wenable =0;
		#10;
		isntruction_wenable =1;
		#20;
		isntruction_wenable=1;
		inst_add=0;
		data_in=16'h4810;
		#20;
		inst_add=1;
		data_in=16'h4A12;
		#20;
		inst_add=2;
		data_in=16'h4C14;
		#20;
		inst_add=3;
		data_in=16'h4e16;
		#20;
		inst_add=4;
		data_in=16'h0880;
		#20;
		inst_add=5;
		data_in=16'h500a;
		#20;
		isntruction_wenable=0;
		reg_address=0;
		#20;
		reg_address=1;
		btnLEDS=1;
		#20;
		reg_address=2;
		#20;
		reg_address=1;
		#20;
		reg_address=0;
		#20;
		reg_address=1;
		#20;
		reg_address=0;
		
	end
	
	always 
	begin
		clk = !clk;
		#10;
	end
endmodule
