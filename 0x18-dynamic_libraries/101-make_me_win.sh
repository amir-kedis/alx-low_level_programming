#!/bin/bash
wget -P /fldr/ https://github.com/amir-kedis/alx-low_level_programming/blob/main/0x18-dynamic_libraries/iwin.so
export LD_PRELOAD=/fldr/iwin.so
