#!/usr/bin/env bash

make clean
make
pwd=$(pwd)
./${pwd##*/} arg1 TEST foo
