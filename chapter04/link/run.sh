#!/usr/bin/env bash

make clean
make
echo 'temp' > tempfile
ls -l tempfile
df /home
./link &
file unlinked
ls -l tempfile
df /home
df /home
