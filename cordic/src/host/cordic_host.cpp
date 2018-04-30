/*===============================================================*/
/*                                                               */
/*                       cordic.cpp                              */
/*                                                               */
/*      Main host function for the cordic application.           */
/*                                                               */
/*===============================================================*/

// standard C/C++ headers
#include <cstdio>
#include <cstdlib>
#include <getopt.h>
#include <string>
#include <time.h>
#include <sys/time.h>

#ifdef OCL
  // harness headers
  #include "CLWorld.h"
  #include "CLKernel.h"
  #include "CLMemObj.h"
  // harness namespace
  using namespace rosetta;
#endif

// other headers
#include "typedefs.h"
#include "check_result.h"
#include "utils.h"
#include "cordic.h"

int main(int argc, char ** argv) 
{
  printf("cordic Application\n");

  #ifdef OCL
    // parse command line arguments for opencl version
    std::string kernelFile("");
    parse_sdaccel_command_line_args(argc, argv, kernelFile);
  #endif

  // timers
  struct timeval start, end;

  // opencl version host code
  #ifdef OCL

    // create space for input and output
    theta_type* theta  = new theta_type[NUM_DEGREE];
    cos_sin_type* s = new cos_sin_type[NUM_DEGREE];
    cos_sin_type* c = new cos_sin_type[NUM_DEGREE];
  
    // create OpenCL world
    CLWorld cordic_world = CLWorld(TARGET_DEVICE, CL_DEVICE_TYPE_ACCELERATOR);
  
    // add the bitstream file
    cordic_world.addProgram(kernelFile);
  
    // create kernels
    // this kernel is written in C++
    CLKernel cordic(cordic_world.getContext(), cordic_world.getProgram(), "cordic", cordic_world.getDevice());
  
    // create mem objects
    CLMemObj theta_mem ( (void*)theta,  sizeof(theta_type), NUM_DEGREE, CL_MEM_READ_ONLY);
    CLMemObj s_mem( (void*)s, sizeof(cos_sin_type), NUM_DEGREE, CL_MEM_WRITE_ONLY);
    CLMemObj c_mem( (void*)c, sizeof(cos_sin_type), NUM_DEGREE, CL_MEM_WRITE_ONLY);
  
    // start timer
    gettimeofday(&start, 0);
  
    // add them to the world
    // added in sequence, each of them can be referenced by an index
    cordic_world.addMemObj(theta_mem);
    cordic_world.addMemObj(s_mem);
    cordic_world.addMemObj(c_mem);
  
    // set work size
    int global_size[3] = {1, 1, 1};
    int local_size[3] = {1, 1, 1};
    cordic.set_global(global_size);
    cordic.set_local(local_size);
  
    // add them to the world
    cordic_world.addKernel(cordic);
  
    // set kernel arguments
    cordic_world.setMemKernelArg(0, 0, 0);
    cordic_world.setMemKernelArg(0, 1, 1);
    cordic_world.setMemKernelArg(0, 2, 2);
  
    // run!
    cordic_world.runKernels();
  
    // read the data back
    cordic_world.readMemObj(1);
    cordic_world.readMemObj(2);
    
    // end timer
    gettimeofday(&end, 0);
  #endif

    check_results(s, c);

  // cleanup
  #ifdef OCL
    cordic_world.releaseWorld();
    delete []theta;
    delete []s;
    delete []c;
  #endif

  return EXIT_SUCCESS;

}
