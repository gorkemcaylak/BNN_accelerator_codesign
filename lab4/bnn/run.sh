#===============================================================#
#                                                               #
#                       	run.sh                          	#
#                                                               #
#   	A bash script to run the software emulation 			#
#																#
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
echo " Compiling project
echo "####################################################"
make clean
make ocl OCL_TARGET=sw_emu OCL_PLATFORM=$AWS_PLATFORM K_CONST=3
# due to harness configuration, it expects an additional parameter (K_CONST),
# but it does not have an effect on program

### EXECUTION
echo ""; echo ""; echo "" ; echo ""
echo "####################################################"
echo " Executing DigitRec
echo "####################################################"
./BNN_host.exe -f BNN.sw_emu.xclbin 



