//===========================================================================
// cnn.h
//===========================================================================
// @brief: This header file defines the interface for the core functions.

#ifndef CNN_H
#define CNN_H

#include "model_conv.h"
#include "typedefs.h"


// Top function for cnn accelerator
void cnn_xcel(digit input, bit32_t* output);

void perform_conv(float input[MAX_FMAP], float output[MAX_FMAP], const float weight[MAX_W_CONV], const float bias[MAX_B_CONV], int M, int N, int O);

// Top function for synthesis
extern "C"{
    void CNN(bit64_t in[1], bit32_t out[576]);
}
#endif

