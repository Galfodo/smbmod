.scope mmc3
	.scope bank
		SELECT = $8000
		DATA = $8001
		FIX_PRG_C000 = 0
		FIX_PRG_8000 = 1 << 6
		NORMAL_CHR = 0
		INVERTED_CHR = 1 << 7
		.enum reg
			CHR2KB0
			CHR2KB1
			CHR1KB0
			CHR1KB1
			CHR1KB2
			CHR1KB3
			PRG0
			PRG1
		.endenum
	.endscope

	MIRROR = $A000
	.scope mirror
		VERT = 0
		HORIZ = 1
	.endscope

	PRG_RAM = $A001
	.scope prgRam
		OFF = 0
		RO = 1 << 7
		RW = RO & (1 << 6)
	.endscope	

	.scope irq
		LATCH = $C000
		RELOAD = $C001
		DISABLE = $E000
		ENABLE = $E001
	.endscope
.endscope
