#!/bin/bash
wget -P https://github.com/hazemKhaled12/alx-low_level_programming/raw/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD= /tmp/nrandom.so