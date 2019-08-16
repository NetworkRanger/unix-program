#!/usr/bin/env bash

rm -f file1 file2
make clean
make
echo -e "line1\nline2" > file1
./stdio < file1 > file2
