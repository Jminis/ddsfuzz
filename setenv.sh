#!/bin/bash

# Base paths
export INSTALL_PATH=$HOME/DDS-FUZZ
export BUILD_TYPE=Debug

# Compiler
export CC=afl-clang-fast
export CXX=afl-clang-fast++
export CFLAGS='-fno-discard-value-names -fsanitize=address'
export CXXFLAGS='-fno-discard-value-names -fsanitize=address'
export LDFLAGS='-latomic'

# LLVM
export PATH=$INSTALL_PATH/llvm/bin:$PATH
export LD_LIBRARY_PATH=$INSTALL_PATH/llvm/lib:$LD_LIBRARY_PATH

# DDS libs
export PATH=$INSTALL_PATH/cyclonedds/install/bin:$INSTALL_PATH/Fast-DDS/install/bin:$INSTALL_PATH/OpenDDS/install/bin:$PATH
export LD_LIBRARY_PATH=$INSTALL_PATH/cyclonedds/install/lib:$INSTALL_PATH/Fast-DDS/install/lib:$INSTALL_PATH/OpenDDS/install/lib:$LD_LIBRARY_PATH

# CMake config path for CycloneDDS
export CycloneDDS_DIR=$INSTALL_PATH/cyclonedds/install/lib/cmake/CycloneDDS

# AFL
export AFL_USE_ASAN=1
export AFL_TRACE_PC=1
export AFL_NO_FORKSRV=1
export AFL_I_DONT_CARE_ABOUT_MISSING_CRASHES=1
export AFL_SKIP_CPUFREQ=1
export AFL_SKIP_CRASHES=1

# ASAN runtime
export ASAN_OPTIONS=use_sigaltstack=false:abort_on_error=1:symbolize=0:detect_leaks=0

