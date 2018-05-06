# Digit Recognition

## Description
This design classifies hand-written digits using the K-Nearest-Neighbor (KNN) algorithm. 
The hardware accelerator compares the test instance with all training instances, and votes between the K nearest neighbors to get a final classification result. 
The images of training and test instances are binarized so we can exploit bit-level parallelism on the FPGA. The `data` directory contains a binarized, downsampled subset of the MNIST database.  

## Usage for SDAccel
To execute or simulate the design, do
`./Digitrec_host.exe -f <path_to_xclbin_file>`



<END>
<END>1

