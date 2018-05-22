//==========================================================================
// digitrec.cpp
//==========================================================================
// @brief: A k-nearest-neighbor kernel for digit recognition 

#include "../host/typedefs.h"
#include "./digitrec.cpp"

extern "C" 
{
  //----------------------------------------------------------
  // DigitRec
  //----------------------------------------------------------
  // The is the top function of the kernel, reads in the training 
  // data and testing data, return an array of the recognized labels
  //
  // @param[in] : input - the testing instance
  // @return : the recognized digit (0~9)
  void digitrec_wrapper( digit* training_data, digit* testing_data, bit4_t* results) 
  {  
    // connection settings:
    // students DO NOT need to understand this
    #pragma HLS INTERFACE m_axi port=training_data offset=slave bundle=gmem
    #pragma HLS INTERFACE m_axi port=testing_data offset=slave bundle=gmem
    #pragma HLS INTERFACE m_axi port=results offset=slave bundle=gmem
    #pragma HLS INTERFACE s_axilite port=training_data bundle=control
    #pragma HLS INTERFACE s_axilite port=testing_data bundle=control
    #pragma HLS INTERFACE s_axilite port=results bundle=control
    #pragma HLS INTERFACE s_axilite port=return bundle=control

    digitrec(training_data, testing_data, results);
  }
}
