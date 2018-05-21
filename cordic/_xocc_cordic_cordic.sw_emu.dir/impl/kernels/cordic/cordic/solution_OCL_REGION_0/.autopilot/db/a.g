#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/centos/src/project_data/AWS_Projects/cordic/_xocc_cordic_cordic.sw_emu.dir/impl/kernels/cordic/cordic/solution_OCL_REGION_0/.autopilot/db/a.g.bc ${1+"$@"}
