#/usr/bin/env python.exe -f

import sys
import io

PRG_FLAG = 4
CHR_FLAG = 5
PRG_START = 16

sys.stdin.seek(PRG_FLAG, io.SEEK_SET)
prgBanks = sys.stdin.buffer.read(1)[0]
sys.stdin.seek(CHR_FLAG, io.SEEK_SET)
chrBanks = sys.stdin.buffer.read(1)[0]
sys.stdin.seek(PRG_START + 16 * 1024 * prgBanks, io.SEEK_SET)
sys.stdout.buffer.write(sys.stdin.buffer.read(chrBanks * 8 * 1024))
