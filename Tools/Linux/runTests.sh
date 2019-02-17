#!/bin/bash
#
# Runs unit tests
#
# ./version.sh <build_number> <path/to/version.h>

cd ../../Test
mkdir build
cd build
cmake ..
make
./runTests --gtest_output="xml:../test-results.xml"
