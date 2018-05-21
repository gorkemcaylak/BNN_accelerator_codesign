#include "libspir_types.h"
#define EXPORT_PIPE_SYMBOLS 1
#include "cpu_pipes.h"
#undef EXPORT_PIPE_SYMBOLS
#include "xcl_half.h"
#include <cstddef>
#include <vector>
#include <pthread.h>

extern "C" {

void cordic(size_t theta, size_t s, size_t c);

static pthread_mutex_t __xlnx_cl_cordic_mutex = PTHREAD_MUTEX_INITIALIZER;
void __stub____xlnx_cl_cordic(char **argv) {
  void **args = (void **)argv;
  size_t theta = *((size_t*)args[0+1]);
  size_t s = *((size_t*)args[1+1]);
  size_t c = *((size_t*)args[2+1]);
  pthread_mutex_lock(&__xlnx_cl_cordic_mutex);
  cordic(theta, s, c);
  pthread_mutex_unlock(&__xlnx_cl_cordic_mutex);
}
}
