#include "libspir_types.h"
#define EXPORT_PIPE_SYMBOLS 1
#include "cpu_pipes.h"
#undef EXPORT_PIPE_SYMBOLS
#include "xcl_half.h"
#include <cstddef>
#include <vector>
#include <pthread.h>

extern "C" {

void DigitRec(size_t training_data, size_t testing_data, size_t results);

static pthread_mutex_t __xlnx_cl_DigitRec_mutex = PTHREAD_MUTEX_INITIALIZER;
void __stub____xlnx_cl_DigitRec(char **argv) {
  void **args = (void **)argv;
  size_t training_data = *((size_t*)args[0+1]);
  size_t testing_data = *((size_t*)args[1+1]);
  size_t results = *((size_t*)args[2+1]);
  pthread_mutex_lock(&__xlnx_cl_DigitRec_mutex);
  DigitRec(training_data, testing_data, results);
  pthread_mutex_unlock(&__xlnx_cl_DigitRec_mutex);
}
}
