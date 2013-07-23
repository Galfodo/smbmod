CC65_DIR = /cygdrive/c/cc65
CA65 = $CC65_DIR/ca65
LD65 = $CC65_DIR/ld65

all: smbheader.bin smbprg.bin smb.chr
	cat smbheader.bin smbprg.bin smb.chr > smb.nes

smbprg.bin: smbdis.o nes.ini
	$LD65 -C nes.ini -o smbprg.bin smbdis.o

smbdis.o: smbdis.asm
	$CA65 smbdis.asm

smbheader.bin: smbheader.sh
	./smbheader.sh > smbheader.bin

