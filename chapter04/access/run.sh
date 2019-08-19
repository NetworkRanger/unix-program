#!/usr/bin/env bash

make clean
make
ls -l access
./access ./access
ls -l /etc/shadow
./access /etc/shadow
su
chown root access
chown u+s access
ls -l access
exit
./access /etc/shadow

