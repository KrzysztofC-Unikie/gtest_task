#!/bin/sh
echo --- ENVIRONMENT SETUP FOR QNX ACADEMY GTEST PROJECT ---

echo --- UPDATING LIST OF PACKAGES ---
sudo apt-get update
#echo *** INSTALLING PREREQUISITES FOR CMAKE ***
#sudo apt-get install -y build-essential libssl-dev

echo --- INSTALLING CMAKE ---
sudo snap install cmake --classic


echo --- INSTALLING GOOGLE TESTS ---
echo ""
sudo apt-get install -y libgtest-dev

cd /usr/src/gtest
sudo cmake CMakeLists.txt
sudo make
cd -
cd /usr/src/gtest/lib
sudo cp *.a /usr/lib
cd -

echo --- FINISHED - ENVIRONMENT SETUP FOR QNX ACADEMY GTEST PROJECT ---
