#/usr/bin/env sh -eu

prgsize=2
chrsize=1
mapper=0
sramsize=0

printf "NES\x1A\x$prgsize\x$chrsize\x$(((mapper << 4) | 1))\x$((mapper & ~7))\x$sramsize\0\0\0\0\0\0\0"

