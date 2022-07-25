#!/bin/bash
gcc -Walll -Wextra -Werror -pedantic -c *.c
ar rc liball.a *.o
