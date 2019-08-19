#!/usr/bin/env bash

make clean
make
./file_type /etc/passwd /etc/ /dev/log /dev/tty /var/lib/oprofile/opd_pipe /dev/sr0 /dev/cdroom
