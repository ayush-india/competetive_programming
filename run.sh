#!/bin/sh

CFLAGS=" -O2 -std=c++98"
g++ "$1" $CFLAGS
