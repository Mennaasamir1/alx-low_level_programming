#!/bin/bash
gcc -c *.c -fpic
gcc *.o -shared -o liball.so
gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -lall 
