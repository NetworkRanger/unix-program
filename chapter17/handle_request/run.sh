#!/usr/bin/env bash

make clean
make
pwd=$(pwd)
./${pwd##*/} 1 test
