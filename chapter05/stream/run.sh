#!/usr/bin/env bash

rm -f std.out std.err
make clean
make
./stream < /etc/group > std.out 2> std.err
