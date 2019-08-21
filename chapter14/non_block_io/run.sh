#!/usr/bin/env bash

make clean
make
pwd=$(pwd)
./${pwd##*/} < /etc/services > temp.file 2> stderr.out
