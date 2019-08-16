#!/usr/bin/env bash

rm -f temp.foo
make clean
make
./fcntl 0 < /dev/tty
./fcntl 1 > temp.foo
./fcntl 2 2>>temp.foo
./fcntl 5 5<>temp.foo
