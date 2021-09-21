#!/bin/bash
gcc -g -fPIC -Wall -Wextra -pedantic *.c -shared -o liball.so
