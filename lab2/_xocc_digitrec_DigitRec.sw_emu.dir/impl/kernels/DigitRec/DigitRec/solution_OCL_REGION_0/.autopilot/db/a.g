#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/centos/src/project_data/AWS_Projects/lab2/_xocc_digitrec_DigitRec.sw_emu.dir/impl/kernels/DigitRec/DigitRec/solution_OCL_REGION_0/.autopilot/db/a.g.bc ${1+"$@"}
