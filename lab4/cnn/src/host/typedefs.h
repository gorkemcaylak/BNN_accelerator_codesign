//===========================================================================
// typedefs.h
//===========================================================================
// @brief: This header defines the shorthand of several ap_uint data types.

#ifndef TYPEDEFS_H
#define TYPEDEFS_H

#include "ap_int.h"
#include "ap_fixed.h"

typedef ap_uint<4> bit4_t;
typedef ap_uint<6> bit6_t;
typedef ap_uint<32> bit32_t;
typedef ap_uint<64> bit64_t;
typedef ap_uint<49> digit;
typedef ap_uint<1024> bit1024_t;
typedef ap_fixed<32, 2> fixed32_t;

typedef union {float f; int i;} union_f_i;

#ifdef OCL
#include <string>
// target device
// change here to map to a different device
const std::string TARGET_DEVICE = "xilinx:aws-vu9p-f1:4ddr-xpr-2pr:4.0";
#endif


#endif
