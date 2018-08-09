//==========================================================================
// cnn.cpp
//==========================================================================
// @brief: A convolution kernel for CNN on digit recognition

//#include "../host/cnn.h"
//#include "../host/layer.h"

#include "../host/model_conv.h"
#include "../host/typedefs.h"
#include <cstdio>
#include <stdint.h>
#include <iostream>

using namespace std;

//----------------------------------------------------------
// Perform Convolution Layer
//----------------------------------------------------------
// @param[in] : input - input fmaps
//              weight - filters
//              bias - biases
//              M - number of input fmaps
//              N - number of output fmaps
//              O - width of output fmaps
// @param[out] : output - output fmaps

void perform_conv(float input[MAX_FMAP], float output[MAX_FMAP], const float weight[MAX_W_CONV], const float bias[MAX_B_CONV], int M, int N, int O) {
    
    const int I = O+K-1;
    const int ifmap_size = I*I;
    const int ofmap_size = O*O;
    
    // initialize output fmaps
    for (int i = 0; i < MAX_FMAP; i++) output[i] = 0;
    
    // perform convolution kernel
    for (int n = 0; n < N; n++) {
        for (int m = 0; m < M; m++) {
            for (int x = 0; x < O; x++) {
                for (int y = 0; y < O; y++) {
                    for (int c = 0; c < K; c++) {
                        for (int r = 0; r < K; r++) {
#pragma HLS UNROLL
                            int i_index = x + c + (y + r) * I + m * ifmap_size;
                            int w_index = c + r * K + (n * M + m) * FILTER_SIZE;
                            int o_index = x + y * O + n * ofmap_size;
                            output[o_index] += input[i_index] * weight[w_index];
                        }
                    }
                }
            }
        }
    }
    
    // add biases and perform ReLU
    for (int n = 0; n < N; n++) {
        for (int x = 0; x < O; x++) {
            for (int y = 0; y < O; y++) {
#pragma HLS UNROLL
                int index = x + y * O + n * ofmap_size;
                float biased = output[index] + bias[n];
                output[index] = (biased > 0) ? biased : 0;
            }
        }
    }
    
}
//----------------------------------------------------------
// CNN Accelerator
//----------------------------------------------------------
// @param[in] : input - the testing instance
// @return : the output of second conv layer

void cnn_xcel(digit input , bit32_t* output)
{
    
    float mem_conv1[800];
    float mem_conv2[800];
    
    // prepare input fmaps
    for (int i = 0; i < 49; i++) mem_conv1[i] = input[i];
    
    // first conv layer
    perform_conv(mem_conv1, mem_conv2, w_conv1, b_conv1, 1, 32, 5);
    // second conv layer
    perform_conv(mem_conv2, mem_conv1, w_conv2, b_conv2, 32, 64, 3);
    
    // prepare outputs
    union_f_i val;
    
    for (int i = 0; i < 576; i++) {
        val.f = mem_conv1[i];
        output[i] = (bit32_t)val.i;
    }
    
}

//----------------------------------------------------------
// Top function
//----------------------------------------------------------
extern "C"
{
void CNN(bit64_t in[1], bit32_t out[576])
{
#pragma HLS INTERFACE m_axi port=in offset=slave bundle=gmem
#pragma HLS INTERFACE m_axi port=out offset=slave bundle=gmem
#pragma HLS INTERFACE s_axilite port=in bundle=control
#pragma HLS INTERFACE s_axilite port=out bundle=control
#pragma HLS INTERFACE s_axilite port=return bundle=control
    
    
  digit digit;
  bit4_t nearest;
  bit32_t result[576];
  digit = in[0];

  // call digitrec
  cnn_xcel(digit, result);

  // write out the result
  for (int i = 0; i < 576; i++) out[i] = result[i];

 }
}


