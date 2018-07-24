/*===============================================================*/
/*                                                               */
/*                          typedefs.h                           */
/*                                                               */
/*           Constant definitions and typedefs for host.         */
/*                                                               */
/*===============================================================*/

#ifndef __TYPEDEFS_H__
#define __TYPEDEFS_H__

// Include the Vivado HLS ap_int & ap_fixed headers
#include "ap_int.h"

typedef ap_uint<4> bit4_t;  // label type: 0-9
typedef ap_uint<6> bit6_t;  // distance type: 0-49
typedef ap_uint<8> bit8_t;
typedef ap_uint<64> bit64_t;
typedef ap_uint<64> digit;  // data type: training_data and testing_data

// training size
#define NUM_TRAINING 1800
// how many tests
#define NUM_TEST 180

#ifdef OCL
  #include <string>
  // target device
  // change here to map to a different device
  const std::string TARGET_DEVICE = "xilinx:aws-vu9p-f1:4ddr-xpr-2pr:4.0";
#endif

// // parameters
#define K_CONST 3

// // how many small sets you want to divide the whole training set into
// // 40 means set 0-2 is number "0", set 3-5 is number "1" etc
// #define PAR_FACTOR 40

#endif
