#===============================================================#
#                                                               #
#                        run_fixed.sh                           #
#                                                               #
#       A bash script to run the software emulation             #
#                                                               #
#                                                               #
#===============================================================#


#!/bin/bash

# set up emulation configuration
echo "#################################################"
echo " Setting emulation configuration..."
echo "#################################################"
export  XCL_EMULATION_MODE=true
emconfigutil --platform=$AWS_PLATFORM

### COMPILATION
# create some blank-line space for easy readability
echo ""; echo ""; echo "" ; echo ""
echo "####################################################"
echo " Compiling project using fixed point"
echo "####################################################"
make clean
make -f fixed_type.mk ocl OCL_TARGET=sw_emu OCL_PLATFORM=$AWS_PLATFORM FIXED_TYPE

### EXECUTION
echo ""; echo ""; echo "" ; echo ""
echo "####################################################"
echo " Executing cordic using fixed point"
echo "####################################################"
./cordic_host.exe -f cordic.sw_emu.xclbin

