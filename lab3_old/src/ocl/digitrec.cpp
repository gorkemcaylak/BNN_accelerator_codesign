//==========================================================================
//digitrec.cpp
//==========================================================================
// @brief: A k-nearest-neighbor implementation for digit recognition (k=1)


#include "../host/typedefs.h"
void update_knn( digit test_inst, digit train_inst, bit6_t min_distances[K_CONST] );
bit4_t knn_vote( bit6_t knn_set[10][K_CONST] );

//extern "C" 
//{
  //----------------------------------------------------------
  // Digitrec
  //----------------------------------------------------------
  // @param[in] : input - the testing instance
  // @return : the recognized digit (0~9)
  void DigitRec( digit* training_data, digit* testing_data, bit4_t* results) 
  { 
    #pragma HLS INTERFACE m_axi port=training_data offset=slave bundle=gmem
    #pragma HLS INTERFACE m_axi port=testing_data offset=slave bundle=gmem
    #pragma HLS INTERFACE m_axi port=results offset=slave bundle=gmem
    #pragma HLS INTERFACE s_axilite port=training_data bundle=control
    #pragma HLS INTERFACE s_axilite port=testing_data bundle=control
    #pragma HLS INTERFACE s_axilite port=results bundle=control
    #pragma HLS INTERFACE s_axilite port=return bundle=control

    // This array stores K minimum distances per training set
    bit6_t knn_set[10][K_CONST];

    // Initialize the knn set
    for ( int i = 0; i < 10; i++ )
      for ( int k = 0; k < K_CONST; k++ )
        // Note that the max distance is 49
        knn_set[i][k] = 50; 

    // for each of the test data
    L180: for ( int k = 0 ; k < NUM_TEST; k++){
      // for each training set
      L10: for ( int i = 0; i < 10; i++ ) {
        // for each of the trainging data
        L1800: for ( int j = 0; j < TRAINING_SIZE; j++ ) {
          // Update the KNN set
          update_knn( testing_data[k], training_data[i][j], knn_set[i] );
        }
      } 
      // collect the results
      results[k] = knn_vote(knn_set);
    }
  }


  //-----------------------------------------------------------------------
  // update_knn function
  //-----------------------------------------------------------------------
  // Given the test instance and a (new) training instance, this
  // function maintains/updates an array of K minimum
  // distances per training set.

  // @param[in] : test_inst - the testing instance
  // @param[in] : train_inst - the training instance
  // @param[in/out] : min_distances[K_CONST] - the array that stores the current
  //                  K_CONST minimum distance values per training set

  void update_knn( digit test_inst, digit train_inst, bit6_t min_distances[K_CONST] )
  {
    // Compute the difference using XOR
    digit diff = test_inst ^ train_inst;

    bit6_t dist = 0;
    // Count the number of set bits
    for ( int i = 0; i < 49; ++i ) { 
      dist += diff[i];
    }

    bit6_t max_dist = 0;
    int max_dist_id = K_CONST+1; 

    // Find the max distance
    for ( int k = 0; k < K_CONST; ++k ) {
      if ( min_distances[k] > max_dist ) {
        max_dist = min_distances[k];
        max_dist_id = k;
      }
    }
    
    // Replace the entry with the max distance
    if ( dist < max_dist )
      min_distances[max_dist_id] = dist;
  }


  //-----------------------------------------------------------------------
  // knn_vote function
  //-----------------------------------------------------------------------
  // Given 10xK minimum distance values, this function 
  // finds the actual K nearest neighbors and determines the
  // final output based on the most common digit represented by 
  // these nearest neighbors (i.e., a vote among KNNs). 
  //
  // @param[in] : knn_set - 10xK_CONST min distance values
  // @return : the recognized digit
  // 

  bit4_t knn_vote( bit6_t knn_set[10][K_CONST] )
  {
    bit4_t min_index = 0;

    // This array keeps keeps of the occurences
    // of each digit in the knn_set
    int score[10]; 

    // Initialize score array  
    for ( int i = 0; i < 10; i++ )
        score[i] = 0; 

    // Find the K nearest neighbors
    for ( int k = 0; k < K_CONST; k++ ) { 
      bit6_t min_dist = 50;
      bit4_t min_dist_id = 10;
      int  min_dist_record = K_CONST + 1;
      // find the min distance in knn_set[10][K_CONST]
      for ( int i = 0; i < 10; i++ ) {
        for (int k = 0; k < K_CONST; i++ ) {
          if ( knn_set[i][k] < min_dist ) {
            min_dist = knn_set[i][k];
            min_dist_id = i;
            min_dist_record = k;
          }
        }
      }
      // record this neighbor's label
      score[min_dist_id]++;
      // Erase the minimum difference entry once it's recorded
      knn_set[min_dist_id][min_dist_record] = 50;
    }


    // Calculate the maximum score
    int max_score = 0; 
    for ( int i = 0; i < 10; ++i ) {
      if ( score[i] > max_score ) {
        max_score = score[i];
        min_index = i;
      }
    }

    return min_index;
  }

//}

