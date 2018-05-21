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
emconfigutil --xdevice=xilinx:adm-pcie-7v3:1ddr:3.0

### COMPILATION
# create some blank-line space for easy readability
echo ""; echo ""; echo "" ; echo ""
echo "####################################################"
echo " Compiling project using fixed point"
echo "####################################################"
make clean
make -f fixed_type.mk ocl OCL_DEVICE=xilinx:adm-pcie-7v3:1ddr:3.0 OCL_TARGET=sw_emu FIXED_TYPE

### EXECUTION
echo ""; echo ""; echo "" ; echo ""
echo "####################################################"
echo " Executing cordic using fixed point"
echo "####################################################"
./cordic_host.exe -f cordic.sw_emu.xclbin

