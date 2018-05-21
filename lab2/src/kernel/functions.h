//==========================================================================
// functions.h
//==========================================================================
// @brief: declares the two functions that you need to 
//         implement: update_knn and knn_vote



#include "../host/typedefs.h"


//-----------------------------------------------------------------------
// update_knn function
//-----------------------------------------------------------------------
// Given a test instance and a training instance, this
// function maintains/updates an array of K minimum
// distances per training set
// @param[in] : test_inst - the testing instance
// @param[in] : train_inst - the training instance
// @param[in/out] : min_distances[K_CONST] - the array that stores the current
//                  K_CONST minimum distance values per training se
void update_knn( digit test_inst, digit train_inst, bit6_t min_distances[K_CONST] )


//-----------------------------------------------------------------------
// knn_vote function
//-----------------------------------------------------------------------
// Given 10 * K minimum distance values, this function 
// finds the actual K nearest neighbors and determines the
// final output based on the most common digit represented by 
// these nearest neighbors (i.e., a vote among KNNs). 
//
// @param[in] : knn_set - 10 * K_CONST min distance values
// @return : the digit label with most votes
bit4_t knn_vote( bit6_t knn_set[10 * K_CONST] )