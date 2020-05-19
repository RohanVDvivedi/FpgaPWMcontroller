
module pwm_channel(
	 input reset,
	 input clk,
    input [15:0] pulse_width,	// number of clock cycles for +ve pulse
    input [15:0] cycle_width, // number of total clock cycles in the pwm cycle
    output reg pulse_pin
    );

	// counter to count the 
	reg [15:0] counter = 16'b0;

	// this is the pulse width and the cycle width, 
	// that will be applicable for the current cycle of the pwm
	reg [15:0] curr_pulse_width;
	reg [15:0] curr_cycle_width;

	always@(posedge clk)
	begin
		if(reset) begin
			counter <= 0;
			curr_pulse_width <= 0;
			curr_cycle_width <= 0;
			pulse_pin <= 0;
		end
		else begin
			if(counter < curr_cycle_width) begin
				// increment counter and reset pulse pin if clock count reached
				counter <= counter + 1;
				if(counter == curr_pulse_width) begin
					pulse_pin <= 1'b0;
				end
			end
			else begin
				// reset counter, load the new pulse width
				// and the pwm cycle duration, set pulse_pin
				counter <= 16'b1;
				curr_pulse_width <= pulse_width;
				curr_cycle_width <= cycle_width;
				if(pulse_width > 0)
					pulse_pin <= 1'b1;
				else
					pulse_pin <= 1'b0;
			end
		end
	end

endmodule
