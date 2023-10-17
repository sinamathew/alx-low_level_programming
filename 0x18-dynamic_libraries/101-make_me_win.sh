#!/bin/bash
wget https://github.com/sinamathew/alx-low_level_programming/raw/main/0x18-dynamic_libraries/101-winner.so -O "$HOME/winner.so"
export LD_PRELOAD="$HOME/winner.so"
