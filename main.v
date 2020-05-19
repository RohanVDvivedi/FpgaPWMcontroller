
// the following logic is a driver program used to drive 
// any servo motor at 400Hz (2.5 millisecond) pwm signal, usin the pwm_channel module

module main(
    input inc,					// button to increase the pwm
    input dec,					// button to decrease the pwm
	 output reg max_lim,		// indicator to show maximum limit reached
	 output reg min_lim,		// indicator to show minimum limit reached
	 output servo_pin,		// pin to connect servo
	 input clk					// input clock to the system
    );

	parameter system_clk = 50000000;

	parameter max_val = 2000;
	parameter min_val = 1000;
	parameter mid_val = ((max_val + min_val)/2);
		 
	// to get 1 MHz clock for our operation
	parameter clocks_to_flip = (system_clk/1000000)/2;
	integer counter = 0;
	reg MHz_1 = 0;
	always@(posedge clk) begin
		if(counter < clocks_to_flip)
			counter <= counter + 1;
		else begin
			counter <= 0;
			MHz_1 <= ~MHz_1;
		end
	end

	reg [15:0] pulse_width = min_val;

	pwm_channel pwm_channel(1'b0, MHz_1, pulse_width, 2500, servo_pin);

	// to get 100 Hz clock for manually controlling the servo
	parameter clocks_Hz_100 = (system_clk/100)/2;
	integer counter_Hz_100 = 0;
	reg Hz_100 = 0;
	always@(posedge clk) begin
		if(counter_Hz_100 < clocks_Hz_100)
			counter_Hz_100 <= counter_Hz_100 + 1;
		else begin
			counter_Hz_100 <= 0;
			Hz_100 <= ~Hz_100;
		end
	end

	// logic to increment or decrement the servo motor,
	// also pressing both button will bring you to the middle
	always@(posedge Hz_100) begin
		if(inc && (!dec)) begin
			if(pulse_width < max_val)
				pulse_width <= pulse_width + 1;
		end
		else if ((!inc) && dec) begin
			if(pulse_width > min_val)
				pulse_width <= pulse_width - 1;
		end
		else if (!inc && !dec) begin
			pulse_width <= mid_val;
		end
	end

	// to indicate if maximum or minimum limit for the servo motor is reached
	always@(posedge clk) begin
		if(pulse_width < max_val)
			max_lim <= 1;
		else
			max_lim <= 0;
			
		if(pulse_width > min_val)
			min_lim <= 1;
		else
			min_lim <= 0;
	end

endmodule
