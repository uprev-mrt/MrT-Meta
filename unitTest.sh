#!/bin/bash
git submodule foreach git pull origin master
mkdir Test/build
cd Test/build
cmake ..
make
./runTests