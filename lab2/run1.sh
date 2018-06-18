#===============================================================#
#                                                               #
#                       	run1.sh                         	#
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
emconfigutil --xdevice=xilinx:adm-pcie-7v3:1ddr:3.0

# the k value of KNN, default is 3
k_value=3
# the directory of this lab
app_dir=`pwd`

### COMPILATION
# create some blank-line space for easy readability
echo ""; echo ""; echo "" ; echo ""
echo "####################################################"
echo " Compiling project with K_CONST=$k_value"
echo "####################################################"
make clean
make ocl OCL_TARGET=sw_emu OCL_DEVICE=xilinx:adm-pcie-7v3:1ddr:3.0 APPLICATION_DIR=$app_dir K_CONST=$k_value

### EXECUTION
echo ""; echo ""; echo "" ; echo ""
echo "####################################################"
echo " Executing DigitRec with K_CONST=$k_value"
echo "####################################################"
./DigitRec_host.exe -f DigitRec.sw_emu.xclbin 



