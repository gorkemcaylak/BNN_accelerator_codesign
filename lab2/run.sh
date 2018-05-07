#!/bin/bash

echo "Setting emulation configuration..."
export  XCL_EMULATION_MODE=true
emconfigutil --platform=$AWS_PLATFORM

echo "Compiling project..."
make ocl OCL_TARGET=sw_emu OCL_PLATFORM=$AWS_PLATFORM



