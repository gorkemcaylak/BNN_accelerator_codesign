//==========================================================================
//layer.cpp
//==========================================================================
// @brief: this file contains all layers

#include <stdio.h>
#include <cmath>
#include "typedefs.h"
#include "model_conv.h"
#include "layer.h"

using namespace std;

//----------------------------------------------------------
// Reshpae the Output from Conv Layer
//----------------------------------------------------------
// @param[in] : input - output fmaps from the last conv layer
// @param[out] : output - input famps of the first dense layer

void reshape(float* input, float* output) {
  for (int c = 0; c < 64; c++) {
    for (int y = 0; y < 3; y++) {
      for (int x = 0; x < 3; x++) {
        int o_index = c + (2 - x + (2-y) * 3 ) * 64;
        int i_index = x + y * 3 + c * 9;
        output[o_index] = input[i_index];
      }
    }
  }
}

//----------------------------------------------------------
// Perform Dense Layer
//----------------------------------------------------------
// @param[in] : input - input fmaps
//              weight - weights
//              bias - biases
//              M - number of input fmaps
//              N - number of output fmaps
// @param[out] : output - output fmaps

void perform_dense (float* input, float*output, const float*weight, const float* bias, int M, int N) {

  for (int n = 0; n < N; n++) {
    for (int m = 0; m < M; m++) {
      int w_index = m + n * M;
      output[n] += input[m] * weight[w_index];
    }
    float biased = output[n] + bias[n];
    output[n] = (biased > 0) ? biased : 0;
  }

}

