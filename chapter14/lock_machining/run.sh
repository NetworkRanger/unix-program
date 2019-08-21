#!/usr/bin/env bash

make clean
make
pwd=$(pwd)
./${pwd##*/} temp.file 
