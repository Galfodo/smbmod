.scope ppu
	CTRL = $2000
	.scope ctrl
		NT0 = 0
		NT1 = 1
		NT2 = 2
		NT3 = 3
		VRAM_ROW = 0
		VRAM_COL = 1 << 2
		SPR0 = 0
		SPR1 = 1 << 3
		BG0 = 0
		BG1 = 1 << 4
		SPR8x8 = 0
		SPR8x16 = 1 << 5
		ENABLE_NMI = 1 << 7
	.endscope

	MASK = $2001
	.scope mask
		GRAYSCALE = 1
		DISABLE_BG_CLIP = 1 << 1
		DISABLE_SPR_CLIP = 1 << 2
		DISABLE_ALL_CLIP = DISABLE_BG_CLIP & DISABLE_SPR_CLIP
		ENABLE_BG = 1 << 3
		ENABLE_SPR = 1 << 4
		ENABLE_ALL = ENABLE_BG & ENABLE_SPR
		EMPHASIZE_RED = 1 << 5
		EMPHASIZE_GREEN = 1 << 6
		EMPHASIZE_BLUE = 1 << 7
	.endscope

	STATUS = $2002
	.scope status
		SPR_OVERFLOW = 1 << 5
		SPR0HIT = 1 << 6
		IN_VBLANK = 1 << 7	
	.endscope	

	SPR_ADDR = $2003
	SPR_DATA = $2004
	SCROLL_REG = $2005
	ADDRESS = $2006
	DATA = $2007
.endscope

