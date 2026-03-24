module tb_csa_4_bit;
	//To delay
	localparam int DELAY = 10;

	logic[3:0] A;
	logic[3:0] B;
	logic[3:0] C;
	logic[4:0] Result;

	csa_4_bit dut(.A(A), .B(B), .C(C), .Sum(Result));

	int numFailed = 0;

	//4096 different possible combinations
	initial begin
		$dumpfile("obj_dir/waveform.fst");
		$dumpvars(0, tb_csa_4_bit);
	
		for (int a = 0; a < 16; a++) begin
			for (int b = 0; b < 16; b++) begin
				for (int c = 0; c < 16; c++) begin
					A = 4'(a);
					B = 4'(b);
					C = 4'(c);
					#DELAY; //Delay

					if (Result !== 5'(a + b + c)) begin
						numFailed++;				
					end	
				end
			end
		end

		//Cool look for the output!
		$display("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+");
		$display("| Carry Save Adder Digital Logic Design                         |");
		$display("|                                                               |");
		$display("| 4096 Test Cases run for Carry Save Adder simulation           |"); 

		if(numFailed == 0) begin
			$display("| All test cases PASSED!                                        |");
		end
		else begin
			$display("| %0d / 4096 test cases FAILED                                 |", numFailed);
		end
	
		$display("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+");
		$finish;
	end
endmodule
