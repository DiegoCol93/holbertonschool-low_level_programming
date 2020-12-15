#!/bin/bash
wget -P /tmp/ https://github.com/DiegoCol93/holbertonschool-low_level_programming/raw/f90d4336d0442409c03f90b4a2ed0d6ec9104cef/0x18-dynamic_libraries/winner.so
export LD_PRELOAD=/tmp/winner.so
