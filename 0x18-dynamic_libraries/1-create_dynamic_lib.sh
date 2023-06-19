#!/bin/bash
gcc -Wall -Wextra -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o -Wl,--allow-multiple-definition
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
