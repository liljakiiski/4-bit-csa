module rca_4bit(
	//4-bit inputs
	input logic [3:0] A
	input logic [3:0] B
	//maximum of 5-bit output
	output logic S [4:0]
);
	logic [3:0] carries;
	
	full_adder adder0 (.a(A[0]), .b(B[0]), .cin(0), .s(S[0]), .cout(carries[0]));
	full_adder adder1 (.a(A[1]), .b(B[1]), .cin(carries[0]), .s(S[1]), .cout(carries[1]));
	full_adder adder1 (.a(A[2]), .b(B[2]), .cin(carries[1]), .s(S[2]), .cout(carries[2]));
	full_adder adder1 (.a(A[3]), .b(B[3]), .cin(carries[2]), .s(S[3]), .cout(carries[3]));
	
	//4th bit is carry
	assign S[4] = carries[3];

endmodule
