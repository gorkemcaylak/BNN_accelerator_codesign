#!/bin/bash


# echo "#################################################"
# echo "Setting emulation configuration..."
# echo "#################################################"
# export  XCL_EMULATION_MODE=true
# emconfigutil --platform=$AWS_PLATFORM


echo ""
echo ""
echo ""
echo "#################################################"
echo "Compiling project..."
echo "#################################################"
make ocl OCL_TARGET=sw_emu OCL_PLATFORM=$AWS_PLATFORM K_CONST=4

# echo ""
# echo ""
# echo ""
# echo "#################################################"
# echo "executing DigitRec"
# echo "#################################################"
# ./DigitRec_host.exe -f DigitRec.sw_emu.xclbin 
