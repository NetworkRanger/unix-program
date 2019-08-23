#!/usr/bin/env bash

make clean
make
pwd=$(pwd)
./${pwd##*/}
./${pwd##*/} </etc/passwd 2>/dev/null

