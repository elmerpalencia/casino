#!/bin/bash
set -e
g++ -Wall roulette.cpp -o casino.exe
./casino.exe $*
