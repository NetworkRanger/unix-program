#!/usr/bin/env bash

make clean
make
pwd=$(pwd)
./${pwd##*/} "sleep 5" "date" "man bash >/dev/null"
