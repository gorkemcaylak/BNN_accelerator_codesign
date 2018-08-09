//=========================================================================
// cnn_test.cpp
//=========================================================================
// @brief: testbench for k-nearest-neighbor digit recongnition application

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <sys/time.h>


#ifdef OCL
// opencl harness headers
#include "CLWorld.h"
#include "CLKernel.h"
#include "CLMemObj.h"
// harness namespace
using namespace rosetta;
#endif

#include "cnn.h"
#include "model_dense.h"
#include "layer.h"
#include "utils.h"

//------------------------------------------------------------------------
// Helper function for hex to int conversion
//------------------------------------------------------------------------
int64_t hexstring_to_int64 (std::string h) {
  int64_t x = 0;
  for (int i = 0; i < h.length(); ++i) {
    char c = h[i];
    int k = (c > '9') ? toupper(c)-'A'+10 : c - '0';
    x = x*16 + k;
  }
  return x;
}


//------------------------------------------------------------------------
// Digitrec testbench
//------------------------------------------------------------------------
int main(int argc, char ** argv)
{
    std::cout<<"CNN Application\n";

#ifdef OCL
    // parse command line arguments for opencl version
    std::string kernelFile("");
    parse_sdaccel_command_line_args(argc, argv, kernelFile);
#endif
  // Output file that saves the test bench results

    
    std::ofstream outfile;
  outfile.open("out.dat");
  
  // Read input file for the testing set
  std::string line;
  FILE *fp;
  char *c_line = NULL;
  size_t len = 0;
  fp = fopen("data/testing_set.dat", "r");
  
  // HLS streams for communicating with the cordic block
  /*
    hls::stream<bit32_t> digitrec_in;
  hls::stream<bit32_t> digitrec_out;
  */
  // Number of test instances
  const int N = 180;
  
    
  // Arrays to store test data and expected results
  digit* inputs = new digit[N];
  int* outputs = new int[N];
  int* expected  = new int[N];

    
  
  int nbytes;
  int error = 0;
  int num_test_insts = 0;
  float conv_result[576];
long long total_elapsed=0;

  if ( fp != NULL ) {

    //--------------------------------------------------------------------
    // Read data from the input file into two arrays
    //--------------------------------------------------------------------
    for (int i = 0; i < N; ++i) {
      getline(&c_line, &len, fp);
      line = std::string(c_line);
      // Read handwritten digit input
      std::string hex_digit = line.substr(2, line.find(",")-2);
      digit input_digit = hexstring_to_int64 (hex_digit);
      // Read expected digit
      int input_value =
          strtoul(line.substr(line.find(",") + 1,
                              line.length()).c_str(), NULL, 10);
   
      // Store the digits into arrays
      inputs[i] = input_digit;
      expected[i] = input_value;
    }
      struct timeval start, end;
      
        for (int i = 0; i < N; ++i ) {
#ifdef OCL
      // create OpenCL world
      CLWorld cnn_world = CLWorld(TARGET_DEVICE, CL_DEVICE_TYPE_ACCELERATOR);
      
      // add the bitstream file
      cnn_world.addProgram(kernelFile);
      
      // create kernels
      CLKernel CNN(cnn_world.getContext(), cnn_world.getProgram(), "CNN", cnn_world.getDevice());
      
      // create mem objects
      CLMemObj inputs_mem   ( (void*)&(inputs[i]),    sizeof(bit64_t), 1 , CL_MEM_READ_ONLY);
      CLMemObj outputs_mem  ( (void*)outputs,   sizeof(bit32_t),   576 , CL_MEM_WRITE_ONLY);
      
      // Timer
      
      //Timer timer("digitrec sw");
      
            gettimeofday(&start, 0);

            
      cnn_world.addMemObj(inputs_mem);
      cnn_world.addMemObj(outputs_mem);
      
      
      int global_size[3] = {1, 1, 1};
      int local_size[3] = {1, 1, 1};
      CNN.set_global(global_size);
      CNN.set_local(local_size);
      
      // add them to the world
      cnn_world.addKernel(CNN);
      
      // set kernel arguments
      cnn_world.setMemKernelArg(0, 0, 0);
      cnn_world.setMemKernelArg(0, 1, 1);
      //not sure about this part??????
        
        // run!
        cnn_world.runKernels();  //kernel running inside for loop???
        
        // read the data back
        cnn_world.readMemObj(1);  //outputs_mem read
        
         gettimeofday(&end, 0);
        cnn_world.releaseWorld();
            
#endif
            
        long long elapsed = (end.tv_sec - start.tv_sec) * 1000000LL + end.tv_usec - start.tv_usec;
        total_elapsed += elapsed/N;
        std::cout<<"elapsed time: "<<elapsed<<" us\n";
      // Read result
      union_f_i val;
      for (int j = 0; j < 576; j++) {
          val.i =outputs[j]; //??????
          //(digitrec_out.read()).to_int();
          conv_result[j] = val.f;
      }

      // Start performing dense layer
      float dense_input[576];
      float dense1[256];
      float dense2[256];
      float dense3[10];

      for (int j = 0; j < 256; j++) {
        if (j < 10) dense3[j] = 0;
        dense1[j] = 0;
        dense2[j] = 0;
      }

      reshape(conv_result, dense_input);
      perform_dense(dense_input, dense1, w_dense1, b_dense1, 576, 256);
      perform_dense(dense1, dense2, w_dense2, b_dense2, 256, 256);
      perform_dense(dense2, dense3, w_dense3, b_dense3, 256, 10);

      float max = -50;
      outputs[i] = 0;
      for (int j = 0; j < 10; j++) {
        if (dense3[j] > max) {
          outputs[i] = j;
          max = dense3[j];
        }
      }
      // Finished

      num_test_insts++;
    }   
     

    //timer.stop();

    //--------------------------------------------------------------------
    // Verify results
    //--------------------------------------------------------------------
    for (int i = 0; i < N; ++i) {
      // Print result messages to console
      std::cout << "#" << std::dec << i+1;
      std::cout << ": \tTestInstance=" << std::hex << inputs[i];
      std::cout << " \tInterpreted=" << outputs[i] 
                << " \tExpected=" << expected[i];
      outfile << "#" << std::dec << i+1;
      outfile << ": \tTestInstance=" << std::hex << inputs[i];
      outfile << " \tInterpreted=" << outputs[i] 
              << " \tExpected=" << expected[i];
      
      // Check for any difference between k-NN interpreted digit vs. expected digit
      if ( outputs[i] != expected[i] ) {
        error++;
        std::cout << " \t[Mismatch!]";
        outfile << " \t[Mismatch!]";
      }
      
      std::cout << std::endl;
      outfile << std::endl;
    }
    
    // Report overall error out of all testing instances
    std::cout << "Number of test instances = " << std::dec << num_test_insts << std::endl;
    std::cout << "Overall Error Rate = " << std::setprecision(3)
              << ( (double)error / num_test_insts ) * 100
              << "%" << std::endl;
    outfile << "Number of test instances = " << std::dec << num_test_insts << std::endl;
    outfile << "Overall Error Rate = " << std::setprecision(3)
            << ( (double) error / num_test_insts ) * 100 
            << "%" << std::endl;
    
    // Close input file for the testing set
    
  }
  else
      std::cout << "Unable to open file for the testing set!" << std::endl; 
  
  // Close output file
  fclose(fp);
    
    std::cout <<"average time of operation: "<<total_elapsed<<std::endl;
    
 

  return 0;
}
