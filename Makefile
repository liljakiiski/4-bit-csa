VERILATE := verilator
VERILATE_FLAGS := --binary --trace-fst

# Default
all: 4_bit_csa

4_bit_csa: src/full_adder.sv src/rca_4_bit.sv src/csa_4_bit.sv src/tb_csa_4_bit.sv
	$(VERILATE) $(VERILATE_FLAGS) --top-module tb_csa_4_bit $^
	cp obj_dir/Vtb_csa_4_bit .

clean:
	rm -rf obj_dir
	rm -f Vtb_4_bit_csa
