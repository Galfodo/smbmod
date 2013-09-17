#!/usr/bin/make -f

CA65 = ca65
LD65 = ld65

all: smbheader.bin smbprg.bin smb.chr
	cat smbheader.bin smbprg.bin smb.chr > smb.nes

smbprg.bin: smbdis.o nes.ini
	$(LD65) -o smbprg.bin -C nes.ini smbdis.o

smbdis.o: smbdis.a65
	$(CA65) smbdis.a65

smbheader.bin: smbheader.sh
	./smbheader.sh > smbheader.bin

