#!/usr/bin/env bash

make clean
make
pwd=$(pwd)
./${pwd##*/} < /dev/console 2> /dev/null
