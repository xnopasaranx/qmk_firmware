#!/bin/bash
qmk flash -kb handwired/dactyl_manuform/5x6 -km xnopasaranx -e AVR_CFLAGS="-Wno-array-bounds"
