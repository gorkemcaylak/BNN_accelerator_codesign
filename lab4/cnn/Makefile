# Set kernel name
KERNEL_NAME = CNN  

# Set host source and headers
HOST_SRC_CPP =  ./src/host/cnn_test.cpp \
		./src/host/layer.cpp \
		./src/host/utils.cpp


HOST_SRC_H   = 	./src/host/layer.h \
		./src/host/model_conv.h \
		./src/host/typedefs.h \
		./src/host/model_dense.h \
		./src/host/utils.h \		
		./src/host/cnn.h

DATA         = 	./data/*

# Set host code include paths
HOST_INC = -I$(XILINX_SDX)/Vivado_HLS/include 
HOST_LIB = -L$(XILINX_SDX)/Vivado_HLS/lib

# Set kernel file
OCL_KERNEL_SRC = ./src/kernel/cnn.cpp
OCL_KERNEL_H = ./src/host/typedefs.h  ./src/host/model_conv.h
 
SDSOC_KERNEL_SRC = ./src/kernel/cnn.cpp
SDSOC_KERNEL_H = ./src/host/typedefs.h   ./src/host/model_conv.h

SW_KERNEL_SRC = ./src/kernel/cnn.cpp
SW_KERNEL_H = ./src/host/typedefs.h   ./src/host/model_conv.h  ./src/host/bnn.h

# Set opencl kernel arguments
OCL_KERNEL_ARGS = --max_memory_ports all 
#--report system



#-------------------------
# Leave the rest to harness
#-------------------------
include ../harness/harness.mk

