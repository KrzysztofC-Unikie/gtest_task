#!/bin/sh
echo --- CREATE BUILD FOLDER ---
mkdir build
cd build/

echo --- RUN CMAKE ---
cmake ..

echo --- BUILD PROJECT ---
make

echo --- RUN TESTS ---
./run_google_test
