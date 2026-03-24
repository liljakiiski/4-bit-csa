VERILATE := verilator
VERILATE_FLAGS := --binary --trace-fst

# Default
all: 4_bit_csa

4_bit_csa: src/full_adder.sv src/rca_4bit.sv src/csa_4bit.sv src/tb_csa_4bit.sv
	$(VERILATE) $(VERILATE_FLAGS) --top-module tb_csa_4bit $^
	cp obj_dir/Vtb_4_bit_csa

clean:
	rm -rf obj_dir
	rm -f waveform.fst
	rm -f Vtb_4_bit_csa
