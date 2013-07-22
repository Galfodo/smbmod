all: smbheader.bin smbprg.bin smb.chr
	cat smbheader.bin smbprg.bin smb.chr > smb.nes

smbprg.bin: smbdis.asm
	./asm6.exe smbdis.asm smbprg.bin

smbheader.bin: smbheader.sh
	./smbheader.sh > smbheader.bin

