#===============================================================#
#                                                               #
#                               run1.sh                         #
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

# the number of iteration, default is 10
num_iter=20

### COMPILATION
# create some blank-line space for easy readability
echo ""; echo ""; echo "" ; echo ""
echo "####################################################"
echo " Compiling project with NUM_ITER=$num_iter"
echo "####################################################"
make clean
make -f Makefile  ocl OCL_TARGET=sw_emu OCL_PLATFORM=$AWS_PLATFORM NUM_ITER=$num_iter

### EXECUTION
echo ""; echo ""; echo "" ; echo ""
echo "####################################################"
echo " Executing cordic with NUM_ITER=$num_iter"
echo "####################################################"
./cordic_host.exe -f cordic.sw_emu.xclbin

