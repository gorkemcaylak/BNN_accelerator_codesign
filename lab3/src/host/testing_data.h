/*===============================================================*/
/*                                                               */
/*                       testing_data.h                          */
/*                                                               */
/*              Constant array for test instances.               */
/*                                                               */
/*===============================================================*/


#ifndef TESTING_DATA_H
#define TESTING_DATA_H

#include "typedefs.h"


const digit testing_data[NUM_TEST] = {
  #include "../../data/testing_set.dat"
};

const bit4_t expected[NUM_TEST] = {
  #include "../../data/expected.dat"
};

#endif
