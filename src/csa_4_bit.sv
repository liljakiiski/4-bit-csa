module csa_4_bit(
	input logic [3:0] A,
	input logic [3:0] B,
	input logic [3:0] C,
	output logic [4:0] Sum
);
	logic [3:0] sums;
	logic [3:0] carries;
	logic [4:0] rca_result;

	full_adder adder0(.a(A[0]), .b(B[0]), .cin(C[0]), .s(sums[0]), .cout(carries[0]));
	full_adder adder1(.a(A[1]), .b(B[1]), .cin(C[1]), .s(sums[1]), .cout(carries[1]));
	full_adder adder2(.a(A[2]), .b(B[2]), .cin(C[2]), .s(sums[2]), .cout(carries[2]));
	full_adder adder3(.a(A[3]), .b(B[3]), .cin(C[3]), .s(sums[3]), .cout(carries[3]));

	rca_4_bit rca(
		.A(sums),
		.B({carries[2:0], 1'b0}), //overall shifted left by 1 
		.Cin(1'b0),         	  //0
		.S(rca_result));
	
	assign Sum = rca_result + {carries[3], 4'b0}; //add carries[3] at bit 4

endmodule
