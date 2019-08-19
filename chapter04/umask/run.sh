#!/usr/bin/env bash

make clean
make
umask
./umask
ls -l foo bar
umask
