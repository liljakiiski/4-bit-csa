module csa_4bit(
	input logic [3:0] A,
	input logic [3:0] B,
	input logic [3:0] C,
	output logic [4:0] Sum
);
	logic [3:0] sums, carries;

	full_adder adder0(.a(A[0]), .b(B[0]), .c(C[0]), .s(sums[0]), .cout(carries[0]));
	full_adder adder1(.a(A[1]), .b(B[1]), .c(C[1]), .s(sums[1]), .cout(carries[1]));
	full_adder adder2(.a(A[2]), .b(B[2]), .c(C[2]), .s(sums[2]), .cout(carries[2]));
	full_adder adder3(.a(A[3]), .b(B[3]), .c(C[3]), .s(sums[3]), .cout(carries[3]));

	rca_4bit rca(
		.A(sums), 
		.B({carries[2:0], 1'b0}), //shifted left by 1 
		.Cin(carries[3]),         //overflows into bit 4
		.S(Sum));

endmodule
