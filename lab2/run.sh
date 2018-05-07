#!/bin/bash


echo "#################################################"
echo "Setting emulation configuration..."
echo "#################################################"
export  XCL_EMULATION_MODE=true
emconfigutil --platform=$AWS_PLATFORM

echo "#################################################"
echo "Compiling project..."
echo "#################################################"
make ocl OCL_TARGET=sw_emu OCL_PLATFORM=$AWS_PLATFORM

echo "#################################################"
echo "executing DigitRec"
echo "#################################################"
./DigitRec_host.exe -f DigitRec.sw_emu.xclbin 
