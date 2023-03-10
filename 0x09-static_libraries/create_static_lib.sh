#!/bin/bash
gcc -Wall -pendantic -Werror -c *.c
ar rc liball.a *.o
