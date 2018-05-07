#===============================================================#
#                                                               #
#                       	run.sh                         		#
#                                                               #
#   A bash script to run and collect for K_CONST from 1 to 5	#
#																#
#                                                               #
#===============================================================#


#!/bin/bash

# set up emulation configuration
echo "#################################################"
echo "Setting emulation configuration..."
echo "#################################################"
export  XCL_EMULATION_MODE=true
emconfigutil --platform=$AWS_PLATFORM

# make results directory to store the results
if [ ! -d ./results ]; then
	mkdir results
fi
# create a file to store all the estimate reports
echo "####################################################" > ./results/estimates_summary.xtxt
echo " Summary of Estimate Reports for K_CONST from 1 to 5" >> ./results/estimates_summary.xtxt
echo "####################################################" >> ./results/estimates_summary.xtxt
echo "" >>./results/estimates_summary.xtxt
echo "" >>./results/estimates_summary.xtxt


# loops for K_CONST from 1 to 5 
for index in 1 2 3 4 5
do 
	### COMPILATION
	# create some blank-line space for easy readability
	echo ""; echo ""; echo "" ; echo ""
	echo "####################################################"
	echo " Compiling project..."
	echo "####################################################"
	make clean
	make ocl OCL_TARGET=sw_emu OCL_PLATFORM=$AWS_PLATFORM K_CONST=$index

	### EXECUTION
	echo ""; echo ""; echo "" ; echo ""
	echo "####################################################"
	echo " Executing DigitRec"
	echo "####################################################"
	./DigitRec_host.exe -f DigitRec.sw_emu.xclbin 

	### COLLECTING RESULTS
	echo "####################################################" >> ./results/estimates_summary.xtxt
	echo -e "Estimate Report for K_CONST=$index" >> ./results/estimates_summary.xtxt
	echo "####################################################" >> ./results/estimates_summary.xtxt
	cat system_estimate.xtxt >> ./results/estimates_summary.xtxt
	echo "" >>./results/estimates_summary.xtxt 
	echo "" >>./results/estimates_summary.xtxt 
	echo "" >>./results/estimates_summary.xtxt 

done

# clean up
rm system_estimate.xtxt
