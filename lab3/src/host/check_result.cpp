/*===============================================================*/
/*                                                               */
/*                       check_result.cpp                        */
/*                                                               */
/*      Software evaluation of training and test error rate      */
/*                                                               */
/*===============================================================*/

#include <cstdio>
#include "typedefs.h"

void check_results(bit8_t * result, const bit8_t * expected, int cnt)
{
  int correct_cnt = 0;
  for (int i = 0; i < cnt; i ++ )
  {
    if (result[i] != expected[i])
        std::cout<<"Test "<<i<<": expected= "<<expected[i]<<", result= "<<result[i]<<std::endl;
    else
        correct_cnt++;
  }
  std::cout<<"\n\t "<<correct_cnt<<" / "<<cnt<<" correct!"<<std::endl;
}
