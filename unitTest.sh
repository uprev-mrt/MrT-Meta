#!/bin/bash
git submodule foreach git pull origin master
mkdir Test/build
cd Test/build
cmake ..
make
valgrind --leak-check=full --show-leak-kinds=all --log-file=memcheck.log ./runTests