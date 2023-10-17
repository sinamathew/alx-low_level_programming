#!/bin/bash
gcc *.c -c -fPIC -Wall -Werror -Wextra -pedantic -std=gnu89
gcc *.o -shared -o liball.so
