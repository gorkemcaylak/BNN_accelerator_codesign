# Set kernel name
KERNEL_NAME = cordic

# Set host source and headers
HOST_SRC_CPP = ./src/host/cordic_host.cpp ./src/host/check_result.cpp ./src/host/utils.cpp
HOST_SRC_H   = ./src/host/utils.h ./src/host/cordic.h ./src/host/check_result.h ./src/host/typedefs.h 
DATA         = 

# Set host code include paths
HOST_INC = 
HOST_LIB = 

# Set kernel file
OCL_KERNEL_SRC = ./src/ocl/cordic.cpp
OCL_KERNEL_H = ./src/host/typedefs.h

# Set opencl kernel arguments
OCL_KERNEL_ARGS = --max_memory_ports all 

#-------------------------
# Leave the rest to harness
#-------------------------
include ../harness/harness.mk

