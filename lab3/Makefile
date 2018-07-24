# Set kernel name
KERNEL_NAME = DigitRec

# Set host source and headers
HOST_SRC_CPP = ./src/host/digit_recognition.cpp ./src/host/utils.cpp ./src/host/check_result.cpp
HOST_SRC_H   = ./src/host/utils.h ./src/host/check_result.h ./src/host/typedefs.h ./src/host/testing_data.h \
               ./src/host/training_data.h
DATA         = ./data/*.dat

# Set host code include paths
HOST_INC = -I$(XILINX_SDX)/Vivado_HLS/include 
HOST_LIB = -L$(XILINX_SDX)/Vivado_HLS/lib

# Set kernel file
OCL_KERNEL_SRC = ./src/kernel/digitrec.cpp
OCL_KERNEL_H = ./src/host/typedefs.h
# SDSOC_KERNEL_SRC = ./src/sdsoc/digitrec.cpp
# SDSOC_KERNEL_H = ./src/host/typedefs.h
# SW_KERNEL_SRC = ./src/sw/digitrec_sw.cpp
# SW_KERNEL_H = ./src/host/typedefs.h ./src/sw/digitrec_sw.h

# Set opencl kernel arguments   
OCL_KERNEL_ARGS = --max_memory_ports all --report system



#-------------------------
# Leave the rest to harness
#-------------------------
include ../harness/harness.mk

