; ModuleID = '/home/centos/src/project_data/AWS_Projects/cordic/_xocc_cordic_cordic.sw_emu.dir/impl/kernels/cordic/cordic/solution_OCL_REGION_0/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535]
@cordic_str = internal unnamed_addr constant [7 x i8] c"cordic\00"
@p_str7 = internal unnamed_addr constant [1 x i8] zeroinitializer
@p_str5 = private unnamed_addr constant [8 x i8] c"control\00", align 1
@p_str4 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1
@p_str3 = private unnamed_addr constant [6 x i8] c"slave\00", align 1
@p_str2 = private unnamed_addr constant [5 x i8] c"gmem\00", align 1
@p_str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1
@p_str = private unnamed_addr constant [6 x i8] c"m_axi\00", align 1

declare i64 @llvm.part.select.i64(i64, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define void @cordic(double* %gmem, i64 %theta, i64 %s, i64 %c) {
  %c_read = call i64 @_ssdm_op_Read.s_axilite.i64(i64 %c)
  %s_read = call i64 @_ssdm_op_Read.s_axilite.i64(i64 %s)
  %theta_read = call i64 @_ssdm_op_Read.s_axilite.i64(i64 %theta)
  %tmp_3 = call i61 @_ssdm_op_PartSelect.i61.i64.i32.i32(i64 %c_read, i32 3, i32 63)
  %tmp_4_cast = zext i61 %tmp_3 to i62
  %tmp_4 = call i61 @_ssdm_op_PartSelect.i61.i64.i32.i32(i64 %s_read, i32 3, i32 63)
  %tmp_5_cast = zext i61 %tmp_4 to i62
  %tmp_5 = call i61 @_ssdm_op_PartSelect.i61.i64.i32.i32(i64 %theta_read, i32 3, i32 63)
  %tmp_6_cast = zext i61 %tmp_5 to i62
  call void (...)* @_ssdm_op_SpecBitsMap(double* %gmem), !map !24
  call void (...)* @_ssdm_op_SpecTopModule([7 x i8]* @cordic_str) nounwind
  call void (...)* @_ssdm_op_SpecInterface(double* %gmem, [6 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [5 x i8]* @p_str2, [6 x i8]* @p_str3, [1 x i8]* @p_str1, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i64 %theta, [10 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [8 x i8]* @p_str5, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i64 %s, [10 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [8 x i8]* @p_str5, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i64 %c, [10 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [8 x i8]* @p_str5, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [8 x i8]* @p_str5, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  br label %1

; <label>:1                                       ; preds = %_ifconv, %0
  %i1 = phi i7 [ 1, %0 ], [ %i, %_ifconv ]
  %exitcond1 = icmp eq i7 %i1, -37
  br i1 %exitcond1, label %2, label %_ifconv

_ifconv:                                          ; preds = %1
  %i1_cast1 = zext i7 %i1 to i32
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str7) nounwind
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 90, i64 90, i64 90) nounwind
  %tmp = sitofp i32 %i1_cast1 to double
  %tmp_1 = fmul double %tmp, 0x400921FB54442D18
  %radian = fdiv double %tmp_1, 1.800000e+02
  %tmp_2 = add i7 -1, %i1
  %tmp_3_cast = zext i7 %tmp_2 to i62
  %theta2_sum = add i62 %tmp_6_cast, %tmp_3_cast
  %theta2_sum_cast = zext i62 %theta2_sum to i64
  %gmem_addr = getelementptr inbounds double* %gmem, i64 %theta2_sum_cast
  %gmem_addr_3_req = call i1 @_ssdm_op_WriteReq.m_axi.doubleP(double* %gmem_addr, i32 1)
  call void @_ssdm_op_Write.m_axi.doubleP(double* %gmem_addr, double %radian, i8 -1)
  %gmem_addr_3_resp = call i1 @_ssdm_op_WriteResp.m_axi.doubleP(double* %gmem_addr)
  %radian_to_int = bitcast double %radian to i64
  %tmp_s = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %radian_to_int, i32 52, i32 62)
  %tmp_6 = trunc i64 %radian_to_int to i52
  %notlhs = icmp ne i11 %tmp_s, -1
  %notrhs = icmp eq i52 %tmp_6, 0
  %tmp_8 = or i1 %notrhs, %notlhs
  %tmp_9 = fcmp ogt double %radian, 0.000000e+00
  %tmp_7 = and i1 %tmp_8, %tmp_9
  %current_1 = select i1 %tmp_7, double 0x3FE921FB54442D18, double 0xBFE921FB54442D18
  %Y_1 = select i1 %tmp_7, double 0x3FE36E9DB5086BCB, double 0xBFE36E9DB5086BCB
  %current_1_to_int = bitcast double %current_1 to i64
  %tmp_10 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %current_1_to_int, i32 52, i32 62)
  %tmp_11 = trunc i64 %current_1_to_int to i52
  %notlhs2 = icmp ne i11 %tmp_10, -1
  %notrhs2 = icmp eq i52 %tmp_11, 0
  %tmp_12 = or i1 %notrhs2, %notlhs2
  %tmp_13 = and i1 %tmp_8, %tmp_12
  %tmp_14 = fcmp ogt double %radian, %current_1
  %tmp_15 = and i1 %tmp_13, %tmp_14
  %tmp_9_1 = fmul double %Y_1, 5.000000e-01
  %T_s = fsub double 0x3FE36E9DB5086BCB, %tmp_9_1
  %T_1_1 = fadd double %tmp_9_1, 0x3FE36E9DB5086BCB
  %X_1_1 = select i1 %tmp_15, double %T_s, double %T_1_1
  %current_1_1_v = select i1 %tmp_15, double 0x3FDDAC670561BB4F, double 0xBFDDAC670561BB4F
  %current_1_1 = fadd double %current_1, %current_1_1_v
  %Y_1_1_v = select i1 %tmp_15, double 0x3FD36E9DB5086BCB, double 0xBFD36E9DB5086BCB
  %Y_1_1 = fadd double %Y_1, %Y_1_1_v
  %current_1_1_to_int = bitcast double %current_1_1 to i64
  %tmp_16 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %current_1_1_to_int, i32 52, i32 62)
  %tmp_17 = trunc i64 %current_1_1_to_int to i52
  %notlhs4 = icmp ne i11 %tmp_16, -1
  %notrhs4 = icmp eq i52 %tmp_17, 0
  %tmp_18 = or i1 %notrhs4, %notlhs4
  %tmp_19 = and i1 %tmp_8, %tmp_18
  %tmp_20 = fcmp ogt double %radian, %current_1_1
  %tmp_21 = and i1 %tmp_19, %tmp_20
  %tmp_9_2 = fmul double %Y_1_1, 2.500000e-01
  %T_2 = fsub double %X_1_1, %tmp_9_2
  %tmp_2_4 = fmul double %X_1_1, 2.500000e-01
  %Y_2_2 = fadd double %tmp_2_4, %Y_1_1
  %T_1_2 = fadd double %X_1_1, %tmp_9_2
  %Y_3_2 = fsub double %Y_1_1, %tmp_2_4
  %X_1_2 = select i1 %tmp_21, double %T_2, double %T_1_2
  %current_1_2_v = select i1 %tmp_21, double 0x3FCF5B75F92C80DD, double 0xBFCF5B75F92C80DD
  %current_1_2 = fadd double %current_1_1, %current_1_2_v
  %Y_1_2 = select i1 %tmp_21, double %Y_2_2, double %Y_3_2
  %current_1_2_to_int = bitcast double %current_1_2 to i64
  %tmp_22 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %current_1_2_to_int, i32 52, i32 62)
  %tmp_23 = trunc i64 %current_1_2_to_int to i52
  %notlhs6 = icmp ne i11 %tmp_22, -1
  %notrhs6 = icmp eq i52 %tmp_23, 0
  %tmp_24 = or i1 %notrhs6, %notlhs6
  %tmp_25 = and i1 %tmp_8, %tmp_24
  %tmp_26 = fcmp ogt double %radian, %current_1_2
  %tmp_27 = and i1 %tmp_25, %tmp_26
  %tmp_9_3 = fmul double %Y_1_2, 1.250000e-01
  %T_3 = fsub double %X_1_2, %tmp_9_3
  %tmp_3_5 = fmul double %X_1_2, 1.250000e-01
  %Y_2_3 = fadd double %tmp_3_5, %Y_1_2
  %T_1_3 = fadd double %X_1_2, %tmp_9_3
  %Y_3_3 = fsub double %Y_1_2, %tmp_3_5
  %X_1_3 = select i1 %tmp_27, double %T_3, double %T_1_3
  %current_1_3_v = select i1 %tmp_27, double 0x3FBFD5BA9AAC2F6E, double 0xBFBFD5BA9AAC2F6E
  %current_1_3 = fadd double %current_1_2, %current_1_3_v
  %Y_1_3 = select i1 %tmp_27, double %Y_2_3, double %Y_3_3
  %current_1_3_to_int = bitcast double %current_1_3 to i64
  %tmp_28 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %current_1_3_to_int, i32 52, i32 62)
  %tmp_29 = trunc i64 %current_1_3_to_int to i52
  %notlhs8 = icmp ne i11 %tmp_28, -1
  %notrhs8 = icmp eq i52 %tmp_29, 0
  %tmp_30 = or i1 %notrhs8, %notlhs8
  %tmp_31 = and i1 %tmp_8, %tmp_30
  %tmp_32 = fcmp ogt double %radian, %current_1_3
  %tmp_33 = and i1 %tmp_31, %tmp_32
  %tmp_9_4 = fmul double %Y_1_3, 6.250000e-02
  %T_4 = fsub double %X_1_3, %tmp_9_4
  %tmp_4_6 = fmul double %X_1_3, 6.250000e-02
  %Y_2_4 = fadd double %tmp_4_6, %Y_1_3
  %T_1_4 = fadd double %X_1_3, %tmp_9_4
  %Y_3_4 = fsub double %Y_1_3, %tmp_4_6
  %X_1_4 = select i1 %tmp_33, double %T_4, double %T_1_4
  %current_1_4_v = select i1 %tmp_33, double 0x3FAFF55BB72CFDEA, double 0xBFAFF55BB72CFDEA
  %current_1_4 = fadd double %current_1_3, %current_1_4_v
  %Y_1_4 = select i1 %tmp_33, double %Y_2_4, double %Y_3_4
  %current_1_4_to_int = bitcast double %current_1_4 to i64
  %tmp_34 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %current_1_4_to_int, i32 52, i32 62)
  %tmp_35 = trunc i64 %current_1_4_to_int to i52
  %notlhs1 = icmp ne i11 %tmp_34, -1
  %notrhs1 = icmp eq i52 %tmp_35, 0
  %tmp_36 = or i1 %notrhs1, %notlhs1
  %tmp_37 = and i1 %tmp_8, %tmp_36
  %tmp_38 = fcmp ogt double %radian, %current_1_4
  %tmp_39 = and i1 %tmp_37, %tmp_38
  %tmp_9_5 = fmul double %Y_1_4, 3.125000e-02
  %T_5 = fsub double %X_1_4, %tmp_9_5
  %tmp_5_7 = fmul double %X_1_4, 3.125000e-02
  %Y_2_5 = fadd double %tmp_5_7, %Y_1_4
  %T_1_5 = fadd double %X_1_4, %tmp_9_5
  %Y_3_5 = fsub double %Y_1_4, %tmp_5_7
  %X_1_5 = select i1 %tmp_39, double %T_5, double %T_1_5
  %current_1_5_v = select i1 %tmp_39, double 0x3F9FFD55BBA97625, double 0xBF9FFD55BBA97625
  %current_1_5 = fadd double %current_1_4, %current_1_5_v
  %Y_1_5 = select i1 %tmp_39, double %Y_2_5, double %Y_3_5
  %current_1_5_to_int = bitcast double %current_1_5 to i64
  %tmp_40 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %current_1_5_to_int, i32 52, i32 62)
  %tmp_41 = trunc i64 %current_1_5_to_int to i52
  %notlhs3 = icmp ne i11 %tmp_40, -1
  %notrhs3 = icmp eq i52 %tmp_41, 0
  %tmp_42 = or i1 %notrhs3, %notlhs3
  %tmp_43 = and i1 %tmp_8, %tmp_42
  %tmp_44 = fcmp ogt double %radian, %current_1_5
  %tmp_45 = and i1 %tmp_43, %tmp_44
  %tmp_9_6 = fmul double %Y_1_5, 1.562500e-02
  %T_6 = fsub double %X_1_5, %tmp_9_6
  %tmp_6_8 = fmul double %X_1_5, 1.562500e-02
  %Y_2_6 = fadd double %tmp_6_8, %Y_1_5
  %T_1_6 = fadd double %X_1_5, %tmp_9_6
  %Y_3_6 = fsub double %Y_1_5, %tmp_6_8
  %X_1_6 = select i1 %tmp_45, double %T_6, double %T_1_6
  %current_1_6_v = select i1 %tmp_45, double 0x3F8FFF555BBB729B, double 0xBF8FFF555BBB729B
  %current_1_6 = fadd double %current_1_5, %current_1_6_v
  %Y_1_6 = select i1 %tmp_45, double %Y_2_6, double %Y_3_6
  %current_1_6_to_int = bitcast double %current_1_6 to i64
  %tmp_46 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %current_1_6_to_int, i32 52, i32 62)
  %tmp_47 = trunc i64 %current_1_6_to_int to i52
  %notlhs5 = icmp ne i11 %tmp_46, -1
  %notrhs5 = icmp eq i52 %tmp_47, 0
  %tmp_48 = or i1 %notrhs5, %notlhs5
  %tmp_49 = and i1 %tmp_8, %tmp_48
  %tmp_50 = fcmp ogt double %radian, %current_1_6
  %tmp_51 = and i1 %tmp_49, %tmp_50
  %tmp_9_7 = fmul double %Y_1_6, 7.812500e-03
  %T_7 = fsub double %X_1_6, %tmp_9_7
  %tmp_7_9 = fmul double %X_1_6, 7.812500e-03
  %Y_2_7 = fadd double %tmp_7_9, %Y_1_6
  %T_1_7 = fadd double %X_1_6, %tmp_9_7
  %Y_3_7 = fsub double %Y_1_6, %tmp_7_9
  %X_1_7 = select i1 %tmp_51, double %T_7, double %T_1_7
  %current_1_7_v = select i1 %tmp_51, double 0x3F7FFFD555BBBA97, double 0xBF7FFFD555BBBA97
  %current_1_7 = fadd double %current_1_6, %current_1_7_v
  %Y_1_7 = select i1 %tmp_51, double %Y_2_7, double %Y_3_7
  %current_1_7_to_int = bitcast double %current_1_7 to i64
  %tmp_52 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %current_1_7_to_int, i32 52, i32 62)
  %tmp_53 = trunc i64 %current_1_7_to_int to i52
  %notlhs7 = icmp ne i11 %tmp_52, -1
  %notrhs7 = icmp eq i52 %tmp_53, 0
  %tmp_54 = or i1 %notrhs7, %notlhs7
  %tmp_55 = and i1 %tmp_8, %tmp_54
  %tmp_56 = fcmp ogt double %radian, %current_1_7
  %tmp_57 = and i1 %tmp_55, %tmp_56
  %tmp_9_8 = fmul double %Y_1_7, 3.906250e-03
  %T_8 = fsub double %X_1_7, %tmp_9_8
  %tmp_8_10 = fmul double %X_1_7, 3.906250e-03
  %Y_2_8 = fadd double %tmp_8_10, %Y_1_7
  %T_1_8 = fadd double %X_1_7, %tmp_9_8
  %Y_3_8 = fsub double %Y_1_7, %tmp_8_10
  %X_1_8 = select i1 %tmp_57, double %T_8, double %T_1_8
  %current_1_8_v = select i1 %tmp_57, double 0x3F6FFFF5555BBBB7, double 0xBF6FFFF5555BBBB7
  %current_1_8 = fadd double %current_1_7, %current_1_8_v
  %Y_1_8 = select i1 %tmp_57, double %Y_2_8, double %Y_3_8
  %current_1_8_to_int = bitcast double %current_1_8 to i64
  %tmp_58 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %current_1_8_to_int, i32 52, i32 62)
  %tmp_59 = trunc i64 %current_1_8_to_int to i52
  %notlhs9 = icmp ne i11 %tmp_58, -1
  %notrhs9 = icmp eq i52 %tmp_59, 0
  %tmp_60 = or i1 %notrhs9, %notlhs9
  %tmp_61 = and i1 %tmp_8, %tmp_60
  %tmp_62 = fcmp ogt double %radian, %current_1_8
  %tmp_63 = and i1 %tmp_61, %tmp_62
  %tmp_9_9 = fmul double %Y_1_8, 1.953125e-03
  %T_9 = fsub double %X_1_8, %tmp_9_9
  %tmp_9_11 = fmul double %X_1_8, 1.953125e-03
  %Y_2_9 = fadd double %tmp_9_11, %Y_1_8
  %T_1_9 = fadd double %X_1_8, %tmp_9_9
  %Y_3_9 = fsub double %Y_1_8, %tmp_9_11
  %X_1_9 = select i1 %tmp_63, double %T_9, double %T_1_9
  %Y_1_9 = select i1 %tmp_63, double %Y_2_9, double %Y_3_9
  %s4_sum = add i62 %tmp_5_cast, %tmp_3_cast
  %s4_sum_cast = zext i62 %s4_sum to i64
  %gmem_addr_1 = getelementptr inbounds double* %gmem, i64 %s4_sum_cast
  %gmem_addr_4_req = call i1 @_ssdm_op_WriteReq.m_axi.doubleP(double* %gmem_addr_1, i32 1)
  call void @_ssdm_op_Write.m_axi.doubleP(double* %gmem_addr_1, double %Y_1_9, i8 -1)
  %gmem_addr_4_resp = call i1 @_ssdm_op_WriteResp.m_axi.doubleP(double* %gmem_addr_1)
  %c6_sum = add i62 %tmp_4_cast, %tmp_3_cast
  %c6_sum_cast = zext i62 %c6_sum to i64
  %gmem_addr_2 = getelementptr inbounds double* %gmem, i64 %c6_sum_cast
  %gmem_addr_5_req = call i1 @_ssdm_op_WriteReq.m_axi.doubleP(double* %gmem_addr_2, i32 1)
  call void @_ssdm_op_Write.m_axi.doubleP(double* %gmem_addr_2, double %X_1_9, i8 -1)
  %gmem_addr_5_resp = call i1 @_ssdm_op_WriteResp.m_axi.doubleP(double* %gmem_addr_2)
  %i = add i7 1, %i1
  br label %1

; <label>:2                                       ; preds = %1
  ret void
}

define weak i1 @_ssdm_op_WriteResp.m_axi.doubleP(double*) {
entry:
  ret i1 true
}

define weak i1 @_ssdm_op_WriteReq.m_axi.doubleP(double*, i32) {
entry:
  ret i1 true
}

define weak void @_ssdm_op_Write.m_axi.doubleP(double*, double, i8) {
entry:
  ret void
}

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak void @_ssdm_op_SpecPipeline(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i64 @_ssdm_op_Read.s_axilite.i64(i64) {
entry:
  ret i64 %0
}

define weak i61 @_ssdm_op_PartSelect.i61.i64.i32.i32(i64, i32, i32) nounwind readnone {
entry:
  %empty = call i64 @llvm.part.select.i64(i64 %0, i32 %1, i32 %2)
  %empty_12 = trunc i64 %empty to i61
  ret i61 %empty_12
}

declare i52 @_ssdm_op_PartSelect.i52.i64.i32.i32(i64, i32, i32) nounwind readnone

define weak i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64, i32, i32) nounwind readnone {
entry:
  %empty = call i64 @llvm.part.select.i64(i64 %0, i32 %1, i32 %2)
  %empty_13 = trunc i64 %empty to i11
  ret i11 %empty_13
}

declare void @_GLOBAL__I_a() nounwind section ".text.startup"

!opencl.kernels = !{!0, !7, !7}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!13}
!axi4.master.portmap = !{!20}
!axi4.slave.bundlemap = !{!21, !22, !23}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"theta_type*", metadata !"cos_sin_type*", metadata !"cos_sin_type*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"theta", metadata !"s", metadata !"c"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !12, metadata !6}
!8 = metadata !{metadata !"kernel_arg_addr_space"}
!9 = metadata !{metadata !"kernel_arg_access_qual"}
!10 = metadata !{metadata !"kernel_arg_type"}
!11 = metadata !{metadata !"kernel_arg_type_qual"}
!12 = metadata !{metadata !"kernel_arg_name"}
!13 = metadata !{metadata !14, [1 x i32]* @llvm_global_ctors_0}
!14 = metadata !{metadata !15}
!15 = metadata !{i32 0, i32 31, metadata !16}
!16 = metadata !{metadata !17}
!17 = metadata !{metadata !"llvm.global_ctors.0", metadata !18, metadata !"", i32 0, i32 31}
!18 = metadata !{metadata !19}
!19 = metadata !{i32 0, i32 0, i32 1}
!20 = metadata !{metadata !"gmem", metadata !"theta", metadata !"WRITEONLY", metadata !"s", metadata !"WRITEONLY", metadata !"c", metadata !"WRITEONLY"}
!21 = metadata !{metadata !"theta", metadata !"control"}
!22 = metadata !{metadata !"s", metadata !"control"}
!23 = metadata !{metadata !"c", metadata !"control"}
!24 = metadata !{metadata !25}
!25 = metadata !{i32 0, i32 63, metadata !26}
!26 = metadata !{metadata !27, metadata !28, metadata !29}
!27 = metadata !{metadata !"theta", metadata !18, metadata !"double", i32 0, i32 63}
!28 = metadata !{metadata !"s", metadata !18, metadata !"double", i32 0, i32 63}
!29 = metadata !{metadata !"c", metadata !18, metadata !"double", i32 0, i32 63}
