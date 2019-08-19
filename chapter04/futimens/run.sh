#!/usr/bin/env bash

make clean
make
echo 'changedmod' > changemod
echo 'times' > times
ls -l changemod times
date
./futimens changemod times
ls -l changemod times 
ls -lu changemod times
ls -lc changemod times
