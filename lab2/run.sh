#!/bin/bash


# echo "#################################################"
# echo "Setting emulation configuration..."
# echo "#################################################"
# export  XCL_EMULATION_MODE=true
# emconfigutil --platform=$AWS_PLATFORM


if [ ! -d ./results ]; then
	mkdir results
fi
echo "####################################################" > ./results/estimates_summary.xtxt
echo " Summary of K_CONST from 1 to 5" >> ./results/estimates_summary.xtxt
echo "####################################################" >> ./results/estimates_summary.xtxt
echo "" >>./results/estimates_summary.xtxt
echo "" >>./results/estimates_summary.xtxt

for index in 1 2 
do 
	echo ""; echo ""; echo "" ; echo ""
	echo "####################################################"
	echo " Compiling project..."
	echo "####################################################"
	make clean
	make ocl OCL_TARGET=sw_emu OCL_PLATFORM=$AWS_PLATFORM K_CONST=$index

	echo ""; echo ""; echo "" ; echo ""
	echo "####################################################"
	echo " Executing DigitRec"
	echo "####################################################"
	./DigitRec_host.exe -f DigitRec.sw_emu.xclbin 

	echo "####################################################" >> ./results/estimates_summary.xtxt
	echo -e "Result for K_CONST=$index" >> ./results/estimates_summary.xtxt
	echo "####################################################" >> ./results/estimates_summary.xtxt
	cat system_estimate.xtxt >> ./results/estimates_summary.xtxt
	echo "" >>./results/estimates_summary.xtxt 
	echo "" >>./results/estimates_summary.xtxt 
	echo "" >>./results/estimates_summary.xtxt 
done
