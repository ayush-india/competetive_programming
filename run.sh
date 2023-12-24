#!/bin/sh

CFLAGS=" -O2 -j3"
g++ "$1" -O2
./a.out
