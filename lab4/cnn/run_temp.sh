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

xcpp -DOCL -g -lxilinxopencl -I/opt/Xilinx/SDx/2017.1.op/runtime/include/1_2 -I/opt/Xilinx/SDx/2017.1.op/Vivado_HLS/include  -L/opt/Xilinx/SDx/2017.1.op/runtime/lib/x86_64 -L/opt/Xilinx/SDx/2017.1.op/Vivado_HLS/lib -I../harness/ocl_src -I -DK_CONST=3 -o CNN_host.exe ./src/host/layer.cpp ./src/host/cnn_test.cpp ./src/host/utils.cpp  ../harness/ocl_src/CLKernel.cpp ../harness/ocl_src/CLMemObj.cpp ../harness/ocl_src/CLWorld.cpp

xocc -s -t sw_emu -g  --kernel CNN --platform /home/centos/src/project_data/aws-fpga/SDAccel/aws_platform/xilinx_aws-vu9p-f1_4ddr-xpr-2pr_4_0/xilinx_aws-vu9p-f1_4ddr-xpr-2pr_4_0.xpfm -o CNN.sw_emu.xclbin ./src/kernel/cnn.cpp


### EXECUTION
echo ""; echo ""; echo "" ; echo ""
echo "####################################################"
echo " Executing CNN
echo "####################################################"
./CNN_host.exe -f CNN.sw_emu.xclbin



