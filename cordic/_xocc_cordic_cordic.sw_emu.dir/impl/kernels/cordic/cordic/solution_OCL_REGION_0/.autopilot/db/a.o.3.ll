; ModuleID = '/home/centos/src/project_data/AWS_Projects/cordic/_xocc_cordic_cordic.sw_emu.dir/impl/kernels/cordic/cordic/solution_OCL_REGION_0/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a] ; [#uses=0 type=[1 x void ()*]*]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535] ; [#uses=0 type=[1 x i32]*]
@cordic_str = internal unnamed_addr constant [7 x i8] c"cordic\00" ; [#uses=1 type=[7 x i8]*]
@p_str7 = internal unnamed_addr constant [1 x i8] zeroinitializer ; [#uses=1 type=[1 x i8]*]
@p_str5 = private unnamed_addr constant [8 x i8] c"control\00", align 1 ; [#uses=4 type=[8 x i8]*]
@p_str4 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=4 type=[10 x i8]*]
@p_str3 = private unnamed_addr constant [6 x i8] c"slave\00", align 1 ; [#uses=1 type=[6 x i8]*]
@p_str2 = private unnamed_addr constant [5 x i8] c"gmem\00", align 1 ; [#uses=1 type=[5 x i8]*]
@p_str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=24 type=[1 x i8]*]
@p_str = private unnamed_addr constant [6 x i8] c"m_axi\00", align 1 ; [#uses=1 type=[6 x i8]*]

; [#uses=2]
declare i64 @llvm.part.select.i64(i64, i32, i32) nounwind readnone

; [#uses=8]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=0]
define void @cordic(double* %gmem, i64 %theta, i64 %s, i64 %c) {
  %c_read = call i64 @_ssdm_op_Read.s_axilite.i64(i64 %c) ; [#uses=1 type=i64]
  call void @llvm.dbg.value(metadata !{i64 %c_read}, i64 0, metadata !24), !dbg !36 ; [debug line = 20:64] [debug variable = c]
  %s_read = call i64 @_ssdm_op_Read.s_axilite.i64(i64 %s) ; [#uses=1 type=i64]
  call void @llvm.dbg.value(metadata !{i64 %s_read}, i64 0, metadata !37), !dbg !38 ; [debug line = 20:47] [debug variable = s]
  %theta_read = call i64 @_ssdm_op_Read.s_axilite.i64(i64 %theta) ; [#uses=1 type=i64]
  call void @llvm.dbg.value(metadata !{i64 %theta_read}, i64 0, metadata !39), !dbg !40 ; [debug line = 20:26] [debug variable = theta]
  %tmp_3 = call i61 @_ssdm_op_PartSelect.i61.i64.i32.i32(i64 %c_read, i32 3, i32 63) ; [#uses=1 type=i61]
  %tmp_4_cast = zext i61 %tmp_3 to i62            ; [#uses=1 type=i62]
  %tmp_4 = call i61 @_ssdm_op_PartSelect.i61.i64.i32.i32(i64 %s_read, i32 3, i32 63) ; [#uses=1 type=i61]
  %tmp_5_cast = zext i61 %tmp_4 to i62            ; [#uses=1 type=i62]
  %tmp_5 = call i61 @_ssdm_op_PartSelect.i61.i64.i32.i32(i64 %theta_read, i32 3, i32 63) ; [#uses=1 type=i61]
  %tmp_6_cast = zext i61 %tmp_5 to i62            ; [#uses=1 type=i62]
  call void (...)* @_ssdm_op_SpecBitsMap(double* %gmem), !map !41
  call void (...)* @_ssdm_op_SpecTopModule([7 x i8]* @cordic_str) nounwind
  call void @llvm.dbg.value(metadata !{i64 %theta}, i64 0, metadata !39), !dbg !40 ; [debug line = 20:26] [debug variable = theta]
  call void @llvm.dbg.value(metadata !{i64 %s}, i64 0, metadata !37), !dbg !38 ; [debug line = 20:47] [debug variable = s]
  call void @llvm.dbg.value(metadata !{i64 %c}, i64 0, metadata !24), !dbg !36 ; [debug line = 20:64] [debug variable = c]
  call void (...)* @_ssdm_op_SpecInterface(double* %gmem, [6 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [5 x i8]* @p_str2, [6 x i8]* @p_str3, [1 x i8]* @p_str1, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind, !dbg !47 ; [debug line = 22:1]
  call void (...)* @_ssdm_op_SpecInterface(i64 %theta, [10 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [8 x i8]* @p_str5, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind, !dbg !49 ; [debug line = 25:1]
  call void (...)* @_ssdm_op_SpecInterface(i64 %s, [10 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [8 x i8]* @p_str5, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind, !dbg !50 ; [debug line = 26:1]
  call void (...)* @_ssdm_op_SpecInterface(i64 %c, [10 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [8 x i8]* @p_str5, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind, !dbg !51 ; [debug line = 27:1]
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [8 x i8]* @p_str5, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind, !dbg !52 ; [debug line = 28:1]
  br label %1, !dbg !53                           ; [debug line = 42:19]

; <label>:1                                       ; preds = %_ifconv, %0
  %i1 = phi i7 [ 1, %0 ], [ %i, %_ifconv ]        ; [#uses=4 type=i7]
  %exitcond1 = icmp eq i7 %i1, -37, !dbg !53      ; [#uses=1 type=i1] [debug line = 42:19]
  br i1 %exitcond1, label %2, label %_ifconv, !dbg !53 ; [debug line = 42:19]

_ifconv:                                          ; preds = %1
  %i1_cast1 = zext i7 %i1 to i32                  ; [#uses=1 type=i32]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str7) nounwind
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 90, i64 90, i64 90) nounwind ; [#uses=0 type=i32]
  %tmp = sitofp i32 %i1_cast1 to double, !dbg !55 ; [#uses=1 type=double] [debug line = 47:9]
  %tmp_1 = fmul double %tmp, 0x400921FB54442D18, !dbg !55 ; [#uses=1 type=double] [debug line = 47:9]
  %radian = fdiv double %tmp_1, 1.800000e+02, !dbg !55 ; [#uses=12 type=double] [debug line = 47:9]
  call void @llvm.dbg.value(metadata !{double %radian}, i64 0, metadata !57), !dbg !55 ; [debug line = 47:9] [debug variable = radian]
  %tmp_2 = add i7 -1, %i1, !dbg !58               ; [#uses=1 type=i7] [debug line = 48:9]
  %tmp_3_cast = zext i7 %tmp_2 to i62, !dbg !58   ; [#uses=3 type=i62] [debug line = 48:9]
  %theta2_sum = add i62 %tmp_6_cast, %tmp_3_cast, !dbg !58 ; [#uses=1 type=i62] [debug line = 48:9]
  %theta2_sum_cast = zext i62 %theta2_sum to i64, !dbg !58 ; [#uses=1 type=i64] [debug line = 48:9]
  %gmem_addr = getelementptr inbounds double* %gmem, i64 %theta2_sum_cast, !dbg !58 ; [#uses=3 type=double*] [debug line = 48:9]
  %gmem_addr_3_req = call i1 @_ssdm_op_WriteReq.m_axi.doubleP(double* %gmem_addr, i32 1), !dbg !58 ; [#uses=0 type=i1] [debug line = 48:9]
  call void @_ssdm_op_Write.m_axi.doubleP(double* %gmem_addr, double %radian, i8 -1), !dbg !58 ; [debug line = 48:9]
  %gmem_addr_3_resp = call i1 @_ssdm_op_WriteResp.m_axi.doubleP(double* %gmem_addr), !dbg !58 ; [#uses=0 type=i1] [debug line = 48:9]
  %radian_to_int = bitcast double %radian to i64  ; [#uses=2 type=i64]
  %tmp_s = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %radian_to_int, i32 52, i32 62) ; [#uses=1 type=i11]
  %tmp_6 = trunc i64 %radian_to_int to i52        ; [#uses=1 type=i52]
  %notlhs = icmp ne i11 %tmp_s, -1                ; [#uses=1 type=i1]
  %notrhs = icmp eq i52 %tmp_6, 0                 ; [#uses=1 type=i1]
  %tmp_8 = or i1 %notrhs, %notlhs                 ; [#uses=10 type=i1]
  %tmp_9 = fcmp ogt double %radian, 0.000000e+00, !dbg !59 ; [#uses=1 type=i1] [debug line = 70:3]
  %tmp_7 = and i1 %tmp_8, %tmp_9, !dbg !59        ; [#uses=2 type=i1] [debug line = 70:3]
  %current_1 = select i1 %tmp_7, double 0x3FE921FB54442D18, double 0xBFE921FB54442D18, !dbg !59 ; [#uses=3 type=double] [debug line = 70:3]
  %Y_1 = select i1 %tmp_7, double 0x3FE36E9DB5086BCB, double 0xBFE36E9DB5086BCB, !dbg !59 ; [#uses=2 type=double] [debug line = 70:3]
  %current_1_to_int = bitcast double %current_1 to i64 ; [#uses=2 type=i64]
  %tmp_10 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %current_1_to_int, i32 52, i32 62) ; [#uses=1 type=i11]
  %tmp_11 = trunc i64 %current_1_to_int to i52    ; [#uses=1 type=i52]
  %notlhs2 = icmp ne i11 %tmp_10, -1              ; [#uses=1 type=i1]
  %notrhs2 = icmp eq i52 %tmp_11, 0               ; [#uses=1 type=i1]
  %tmp_12 = or i1 %notrhs2, %notlhs2              ; [#uses=1 type=i1]
  %tmp_13 = and i1 %tmp_8, %tmp_12                ; [#uses=1 type=i1]
  %tmp_14 = fcmp ogt double %radian, %current_1, !dbg !59 ; [#uses=1 type=i1] [debug line = 70:3]
  %tmp_15 = and i1 %tmp_13, %tmp_14, !dbg !59     ; [#uses=3 type=i1] [debug line = 70:3]
  %tmp_9_1 = fmul double %Y_1, 5.000000e-01, !dbg !62 ; [#uses=2 type=double] [debug line = 71:7]
  %T_s = fsub double 0x3FE36E9DB5086BCB, %tmp_9_1, !dbg !62 ; [#uses=1 type=double] [debug line = 71:7]
  %T_1_1 = fadd double %tmp_9_1, 0x3FE36E9DB5086BCB, !dbg !64 ; [#uses=1 type=double] [debug line = 77:7]
  %X_1_1 = select i1 %tmp_15, double %T_s, double %T_1_1 ; [#uses=3 type=double]
  %current_1_1_v = select i1 %tmp_15, double 0x3FDDAC670561BB4F, double 0xBFDDAC670561BB4F ; [#uses=1 type=double]
  %current_1_1 = fadd double %current_1, %current_1_1_v ; [#uses=3 type=double]
  %Y_1_1_v = select i1 %tmp_15, double 0x3FD36E9DB5086BCB, double 0xBFD36E9DB5086BCB ; [#uses=1 type=double]
  %Y_1_1 = fadd double %Y_1, %Y_1_1_v             ; [#uses=3 type=double]
  %current_1_1_to_int = bitcast double %current_1_1 to i64 ; [#uses=2 type=i64]
  %tmp_16 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %current_1_1_to_int, i32 52, i32 62) ; [#uses=1 type=i11]
  %tmp_17 = trunc i64 %current_1_1_to_int to i52  ; [#uses=1 type=i52]
  %notlhs4 = icmp ne i11 %tmp_16, -1              ; [#uses=1 type=i1]
  %notrhs4 = icmp eq i52 %tmp_17, 0               ; [#uses=1 type=i1]
  %tmp_18 = or i1 %notrhs4, %notlhs4              ; [#uses=1 type=i1]
  %tmp_19 = and i1 %tmp_8, %tmp_18                ; [#uses=1 type=i1]
  %tmp_20 = fcmp ogt double %radian, %current_1_1, !dbg !59 ; [#uses=1 type=i1] [debug line = 70:3]
  %tmp_21 = and i1 %tmp_19, %tmp_20, !dbg !59     ; [#uses=3 type=i1] [debug line = 70:3]
  %tmp_9_2 = fmul double %Y_1_1, 2.500000e-01, !dbg !62 ; [#uses=2 type=double] [debug line = 71:7]
  %T_2 = fsub double %X_1_1, %tmp_9_2, !dbg !62   ; [#uses=1 type=double] [debug line = 71:7]
  %tmp_2_4 = fmul double %X_1_1, 2.500000e-01, !dbg !66 ; [#uses=2 type=double] [debug line = 72:7]
  %Y_2_2 = fadd double %tmp_2_4, %Y_1_1, !dbg !66 ; [#uses=1 type=double] [debug line = 72:7]
  %T_1_2 = fadd double %X_1_1, %tmp_9_2, !dbg !64 ; [#uses=1 type=double] [debug line = 77:7]
  %Y_3_2 = fsub double %Y_1_1, %tmp_2_4, !dbg !67 ; [#uses=1 type=double] [debug line = 78:7]
  %X_1_2 = select i1 %tmp_21, double %T_2, double %T_1_2 ; [#uses=3 type=double]
  %current_1_2_v = select i1 %tmp_21, double 0x3FCF5B75F92C80DD, double 0xBFCF5B75F92C80DD ; [#uses=1 type=double]
  %current_1_2 = fadd double %current_1_1, %current_1_2_v ; [#uses=3 type=double]
  %Y_1_2 = select i1 %tmp_21, double %Y_2_2, double %Y_3_2 ; [#uses=3 type=double]
  %current_1_2_to_int = bitcast double %current_1_2 to i64 ; [#uses=2 type=i64]
  %tmp_22 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %current_1_2_to_int, i32 52, i32 62) ; [#uses=1 type=i11]
  %tmp_23 = trunc i64 %current_1_2_to_int to i52  ; [#uses=1 type=i52]
  %notlhs6 = icmp ne i11 %tmp_22, -1              ; [#uses=1 type=i1]
  %notrhs6 = icmp eq i52 %tmp_23, 0               ; [#uses=1 type=i1]
  %tmp_24 = or i1 %notrhs6, %notlhs6              ; [#uses=1 type=i1]
  %tmp_25 = and i1 %tmp_8, %tmp_24                ; [#uses=1 type=i1]
  %tmp_26 = fcmp ogt double %radian, %current_1_2, !dbg !59 ; [#uses=1 type=i1] [debug line = 70:3]
  %tmp_27 = and i1 %tmp_25, %tmp_26, !dbg !59     ; [#uses=3 type=i1] [debug line = 70:3]
  %tmp_9_3 = fmul double %Y_1_2, 1.250000e-01, !dbg !62 ; [#uses=2 type=double] [debug line = 71:7]
  %T_3 = fsub double %X_1_2, %tmp_9_3, !dbg !62   ; [#uses=1 type=double] [debug line = 71:7]
  %tmp_3_5 = fmul double %X_1_2, 1.250000e-01, !dbg !66 ; [#uses=2 type=double] [debug line = 72:7]
  %Y_2_3 = fadd double %tmp_3_5, %Y_1_2, !dbg !66 ; [#uses=1 type=double] [debug line = 72:7]
  %T_1_3 = fadd double %X_1_2, %tmp_9_3, !dbg !64 ; [#uses=1 type=double] [debug line = 77:7]
  %Y_3_3 = fsub double %Y_1_2, %tmp_3_5, !dbg !67 ; [#uses=1 type=double] [debug line = 78:7]
  %X_1_3 = select i1 %tmp_27, double %T_3, double %T_1_3 ; [#uses=3 type=double]
  %current_1_3_v = select i1 %tmp_27, double 0x3FBFD5BA9AAC2F6E, double 0xBFBFD5BA9AAC2F6E ; [#uses=1 type=double]
  %current_1_3 = fadd double %current_1_2, %current_1_3_v ; [#uses=3 type=double]
  %Y_1_3 = select i1 %tmp_27, double %Y_2_3, double %Y_3_3 ; [#uses=3 type=double]
  %current_1_3_to_int = bitcast double %current_1_3 to i64 ; [#uses=2 type=i64]
  %tmp_28 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %current_1_3_to_int, i32 52, i32 62) ; [#uses=1 type=i11]
  %tmp_29 = trunc i64 %current_1_3_to_int to i52  ; [#uses=1 type=i52]
  %notlhs8 = icmp ne i11 %tmp_28, -1              ; [#uses=1 type=i1]
  %notrhs8 = icmp eq i52 %tmp_29, 0               ; [#uses=1 type=i1]
  %tmp_30 = or i1 %notrhs8, %notlhs8              ; [#uses=1 type=i1]
  %tmp_31 = and i1 %tmp_8, %tmp_30                ; [#uses=1 type=i1]
  %tmp_32 = fcmp ogt double %radian, %current_1_3, !dbg !59 ; [#uses=1 type=i1] [debug line = 70:3]
  %tmp_33 = and i1 %tmp_31, %tmp_32, !dbg !59     ; [#uses=3 type=i1] [debug line = 70:3]
  %tmp_9_4 = fmul double %Y_1_3, 6.250000e-02, !dbg !62 ; [#uses=2 type=double] [debug line = 71:7]
  %T_4 = fsub double %X_1_3, %tmp_9_4, !dbg !62   ; [#uses=1 type=double] [debug line = 71:7]
  %tmp_4_6 = fmul double %X_1_3, 6.250000e-02, !dbg !66 ; [#uses=2 type=double] [debug line = 72:7]
  %Y_2_4 = fadd double %tmp_4_6, %Y_1_3, !dbg !66 ; [#uses=1 type=double] [debug line = 72:7]
  %T_1_4 = fadd double %X_1_3, %tmp_9_4, !dbg !64 ; [#uses=1 type=double] [debug line = 77:7]
  %Y_3_4 = fsub double %Y_1_3, %tmp_4_6, !dbg !67 ; [#uses=1 type=double] [debug line = 78:7]
  %X_1_4 = select i1 %tmp_33, double %T_4, double %T_1_4 ; [#uses=3 type=double]
  %current_1_4_v = select i1 %tmp_33, double 0x3FAFF55BB72CFDEA, double 0xBFAFF55BB72CFDEA ; [#uses=1 type=double]
  %current_1_4 = fadd double %current_1_3, %current_1_4_v ; [#uses=3 type=double]
  %Y_1_4 = select i1 %tmp_33, double %Y_2_4, double %Y_3_4 ; [#uses=3 type=double]
  %current_1_4_to_int = bitcast double %current_1_4 to i64 ; [#uses=2 type=i64]
  %tmp_34 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %current_1_4_to_int, i32 52, i32 62) ; [#uses=1 type=i11]
  %tmp_35 = trunc i64 %current_1_4_to_int to i52  ; [#uses=1 type=i52]
  %notlhs1 = icmp ne i11 %tmp_34, -1              ; [#uses=1 type=i1]
  %notrhs1 = icmp eq i52 %tmp_35, 0               ; [#uses=1 type=i1]
  %tmp_36 = or i1 %notrhs1, %notlhs1              ; [#uses=1 type=i1]
  %tmp_37 = and i1 %tmp_8, %tmp_36                ; [#uses=1 type=i1]
  %tmp_38 = fcmp ogt double %radian, %current_1_4, !dbg !59 ; [#uses=1 type=i1] [debug line = 70:3]
  %tmp_39 = and i1 %tmp_37, %tmp_38, !dbg !59     ; [#uses=3 type=i1] [debug line = 70:3]
  %tmp_9_5 = fmul double %Y_1_4, 3.125000e-02, !dbg !62 ; [#uses=2 type=double] [debug line = 71:7]
  %T_5 = fsub double %X_1_4, %tmp_9_5, !dbg !62   ; [#uses=1 type=double] [debug line = 71:7]
  %tmp_5_7 = fmul double %X_1_4, 3.125000e-02, !dbg !66 ; [#uses=2 type=double] [debug line = 72:7]
  %Y_2_5 = fadd double %tmp_5_7, %Y_1_4, !dbg !66 ; [#uses=1 type=double] [debug line = 72:7]
  %T_1_5 = fadd double %X_1_4, %tmp_9_5, !dbg !64 ; [#uses=1 type=double] [debug line = 77:7]
  %Y_3_5 = fsub double %Y_1_4, %tmp_5_7, !dbg !67 ; [#uses=1 type=double] [debug line = 78:7]
  %X_1_5 = select i1 %tmp_39, double %T_5, double %T_1_5 ; [#uses=3 type=double]
  %current_1_5_v = select i1 %tmp_39, double 0x3F9FFD55BBA97625, double 0xBF9FFD55BBA97625 ; [#uses=1 type=double]
  %current_1_5 = fadd double %current_1_4, %current_1_5_v ; [#uses=3 type=double]
  %Y_1_5 = select i1 %tmp_39, double %Y_2_5, double %Y_3_5 ; [#uses=3 type=double]
  %current_1_5_to_int = bitcast double %current_1_5 to i64 ; [#uses=2 type=i64]
  %tmp_40 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %current_1_5_to_int, i32 52, i32 62) ; [#uses=1 type=i11]
  %tmp_41 = trunc i64 %current_1_5_to_int to i52  ; [#uses=1 type=i52]
  %notlhs3 = icmp ne i11 %tmp_40, -1              ; [#uses=1 type=i1]
  %notrhs3 = icmp eq i52 %tmp_41, 0               ; [#uses=1 type=i1]
  %tmp_42 = or i1 %notrhs3, %notlhs3              ; [#uses=1 type=i1]
  %tmp_43 = and i1 %tmp_8, %tmp_42                ; [#uses=1 type=i1]
  %tmp_44 = fcmp ogt double %radian, %current_1_5, !dbg !59 ; [#uses=1 type=i1] [debug line = 70:3]
  %tmp_45 = and i1 %tmp_43, %tmp_44, !dbg !59     ; [#uses=3 type=i1] [debug line = 70:3]
  %tmp_9_6 = fmul double %Y_1_5, 1.562500e-02, !dbg !62 ; [#uses=2 type=double] [debug line = 71:7]
  %T_6 = fsub double %X_1_5, %tmp_9_6, !dbg !62   ; [#uses=1 type=double] [debug line = 71:7]
  %tmp_6_8 = fmul double %X_1_5, 1.562500e-02, !dbg !66 ; [#uses=2 type=double] [debug line = 72:7]
  %Y_2_6 = fadd double %tmp_6_8, %Y_1_5, !dbg !66 ; [#uses=1 type=double] [debug line = 72:7]
  %T_1_6 = fadd double %X_1_5, %tmp_9_6, !dbg !64 ; [#uses=1 type=double] [debug line = 77:7]
  %Y_3_6 = fsub double %Y_1_5, %tmp_6_8, !dbg !67 ; [#uses=1 type=double] [debug line = 78:7]
  %X_1_6 = select i1 %tmp_45, double %T_6, double %T_1_6 ; [#uses=3 type=double]
  %current_1_6_v = select i1 %tmp_45, double 0x3F8FFF555BBB729B, double 0xBF8FFF555BBB729B ; [#uses=1 type=double]
  %current_1_6 = fadd double %current_1_5, %current_1_6_v ; [#uses=3 type=double]
  %Y_1_6 = select i1 %tmp_45, double %Y_2_6, double %Y_3_6 ; [#uses=3 type=double]
  %current_1_6_to_int = bitcast double %current_1_6 to i64 ; [#uses=2 type=i64]
  %tmp_46 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %current_1_6_to_int, i32 52, i32 62) ; [#uses=1 type=i11]
  %tmp_47 = trunc i64 %current_1_6_to_int to i52  ; [#uses=1 type=i52]
  %notlhs5 = icmp ne i11 %tmp_46, -1              ; [#uses=1 type=i1]
  %notrhs5 = icmp eq i52 %tmp_47, 0               ; [#uses=1 type=i1]
  %tmp_48 = or i1 %notrhs5, %notlhs5              ; [#uses=1 type=i1]
  %tmp_49 = and i1 %tmp_8, %tmp_48                ; [#uses=1 type=i1]
  %tmp_50 = fcmp ogt double %radian, %current_1_6, !dbg !59 ; [#uses=1 type=i1] [debug line = 70:3]
  %tmp_51 = and i1 %tmp_49, %tmp_50, !dbg !59     ; [#uses=3 type=i1] [debug line = 70:3]
  %tmp_9_7 = fmul double %Y_1_6, 7.812500e-03, !dbg !62 ; [#uses=2 type=double] [debug line = 71:7]
  %T_7 = fsub double %X_1_6, %tmp_9_7, !dbg !62   ; [#uses=1 type=double] [debug line = 71:7]
  %tmp_7_9 = fmul double %X_1_6, 7.812500e-03, !dbg !66 ; [#uses=2 type=double] [debug line = 72:7]
  %Y_2_7 = fadd double %tmp_7_9, %Y_1_6, !dbg !66 ; [#uses=1 type=double] [debug line = 72:7]
  %T_1_7 = fadd double %X_1_6, %tmp_9_7, !dbg !64 ; [#uses=1 type=double] [debug line = 77:7]
  %Y_3_7 = fsub double %Y_1_6, %tmp_7_9, !dbg !67 ; [#uses=1 type=double] [debug line = 78:7]
  %X_1_7 = select i1 %tmp_51, double %T_7, double %T_1_7 ; [#uses=3 type=double]
  %current_1_7_v = select i1 %tmp_51, double 0x3F7FFFD555BBBA97, double 0xBF7FFFD555BBBA97 ; [#uses=1 type=double]
  %current_1_7 = fadd double %current_1_6, %current_1_7_v ; [#uses=3 type=double]
  %Y_1_7 = select i1 %tmp_51, double %Y_2_7, double %Y_3_7 ; [#uses=3 type=double]
  %current_1_7_to_int = bitcast double %current_1_7 to i64 ; [#uses=2 type=i64]
  %tmp_52 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %current_1_7_to_int, i32 52, i32 62) ; [#uses=1 type=i11]
  %tmp_53 = trunc i64 %current_1_7_to_int to i52  ; [#uses=1 type=i52]
  %notlhs7 = icmp ne i11 %tmp_52, -1              ; [#uses=1 type=i1]
  %notrhs7 = icmp eq i52 %tmp_53, 0               ; [#uses=1 type=i1]
  %tmp_54 = or i1 %notrhs7, %notlhs7              ; [#uses=1 type=i1]
  %tmp_55 = and i1 %tmp_8, %tmp_54                ; [#uses=1 type=i1]
  %tmp_56 = fcmp ogt double %radian, %current_1_7, !dbg !59 ; [#uses=1 type=i1] [debug line = 70:3]
  %tmp_57 = and i1 %tmp_55, %tmp_56, !dbg !59     ; [#uses=3 type=i1] [debug line = 70:3]
  %tmp_9_8 = fmul double %Y_1_7, 3.906250e-03, !dbg !62 ; [#uses=2 type=double] [debug line = 71:7]
  %T_8 = fsub double %X_1_7, %tmp_9_8, !dbg !62   ; [#uses=1 type=double] [debug line = 71:7]
  %tmp_8_10 = fmul double %X_1_7, 3.906250e-03, !dbg !66 ; [#uses=2 type=double] [debug line = 72:7]
  %Y_2_8 = fadd double %tmp_8_10, %Y_1_7, !dbg !66 ; [#uses=1 type=double] [debug line = 72:7]
  %T_1_8 = fadd double %X_1_7, %tmp_9_8, !dbg !64 ; [#uses=1 type=double] [debug line = 77:7]
  %Y_3_8 = fsub double %Y_1_7, %tmp_8_10, !dbg !67 ; [#uses=1 type=double] [debug line = 78:7]
  %X_1_8 = select i1 %tmp_57, double %T_8, double %T_1_8 ; [#uses=3 type=double]
  %current_1_8_v = select i1 %tmp_57, double 0x3F6FFFF5555BBBB7, double 0xBF6FFFF5555BBBB7 ; [#uses=1 type=double]
  %current_1_8 = fadd double %current_1_7, %current_1_8_v ; [#uses=2 type=double]
  %Y_1_8 = select i1 %tmp_57, double %Y_2_8, double %Y_3_8 ; [#uses=3 type=double]
  %current_1_8_to_int = bitcast double %current_1_8 to i64 ; [#uses=2 type=i64]
  %tmp_58 = call i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64 %current_1_8_to_int, i32 52, i32 62) ; [#uses=1 type=i11]
  %tmp_59 = trunc i64 %current_1_8_to_int to i52  ; [#uses=1 type=i52]
  %notlhs9 = icmp ne i11 %tmp_58, -1              ; [#uses=1 type=i1]
  %notrhs9 = icmp eq i52 %tmp_59, 0               ; [#uses=1 type=i1]
  %tmp_60 = or i1 %notrhs9, %notlhs9              ; [#uses=1 type=i1]
  %tmp_61 = and i1 %tmp_8, %tmp_60                ; [#uses=1 type=i1]
  %tmp_62 = fcmp ogt double %radian, %current_1_8, !dbg !59 ; [#uses=1 type=i1] [debug line = 70:3]
  %tmp_63 = and i1 %tmp_61, %tmp_62, !dbg !59     ; [#uses=2 type=i1] [debug line = 70:3]
  %tmp_9_9 = fmul double %Y_1_8, 1.953125e-03, !dbg !62 ; [#uses=2 type=double] [debug line = 71:7]
  %T_9 = fsub double %X_1_8, %tmp_9_9, !dbg !62   ; [#uses=1 type=double] [debug line = 71:7]
  %tmp_9_11 = fmul double %X_1_8, 1.953125e-03, !dbg !66 ; [#uses=2 type=double] [debug line = 72:7]
  %Y_2_9 = fadd double %tmp_9_11, %Y_1_8, !dbg !66 ; [#uses=1 type=double] [debug line = 72:7]
  %T_1_9 = fadd double %X_1_8, %tmp_9_9, !dbg !64 ; [#uses=1 type=double] [debug line = 77:7]
  %Y_3_9 = fsub double %Y_1_8, %tmp_9_11, !dbg !67 ; [#uses=1 type=double] [debug line = 78:7]
  %X_1_9 = select i1 %tmp_63, double %T_9, double %T_1_9 ; [#uses=1 type=double]
  %Y_1_9 = select i1 %tmp_63, double %Y_2_9, double %Y_3_9 ; [#uses=1 type=double]
  %s4_sum = add i62 %tmp_5_cast, %tmp_3_cast, !dbg !68 ; [#uses=1 type=i62] [debug line = 85:6]
  %s4_sum_cast = zext i62 %s4_sum to i64, !dbg !68 ; [#uses=1 type=i64] [debug line = 85:6]
  %gmem_addr_1 = getelementptr inbounds double* %gmem, i64 %s4_sum_cast, !dbg !68 ; [#uses=3 type=double*] [debug line = 85:6]
  %gmem_addr_4_req = call i1 @_ssdm_op_WriteReq.m_axi.doubleP(double* %gmem_addr_1, i32 1), !dbg !68 ; [#uses=0 type=i1] [debug line = 85:6]
  call void @_ssdm_op_Write.m_axi.doubleP(double* %gmem_addr_1, double %Y_1_9, i8 -1), !dbg !68 ; [debug line = 85:6]
  %gmem_addr_4_resp = call i1 @_ssdm_op_WriteResp.m_axi.doubleP(double* %gmem_addr_1), !dbg !68 ; [#uses=0 type=i1] [debug line = 85:6]
  %c6_sum = add i62 %tmp_4_cast, %tmp_3_cast, !dbg !69 ; [#uses=1 type=i62] [debug line = 86:6]
  %c6_sum_cast = zext i62 %c6_sum to i64, !dbg !69 ; [#uses=1 type=i64] [debug line = 86:6]
  %gmem_addr_2 = getelementptr inbounds double* %gmem, i64 %c6_sum_cast, !dbg !69 ; [#uses=3 type=double*] [debug line = 86:6]
  %gmem_addr_5_req = call i1 @_ssdm_op_WriteReq.m_axi.doubleP(double* %gmem_addr_2, i32 1), !dbg !69 ; [#uses=0 type=i1] [debug line = 86:6]
  call void @_ssdm_op_Write.m_axi.doubleP(double* %gmem_addr_2, double %X_1_9, i8 -1), !dbg !69 ; [debug line = 86:6]
  %gmem_addr_5_resp = call i1 @_ssdm_op_WriteResp.m_axi.doubleP(double* %gmem_addr_2), !dbg !69 ; [#uses=0 type=i1] [debug line = 86:6]
  %i = add i7 1, %i1, !dbg !70                    ; [#uses=1 type=i7] [debug line = 42:38]
  call void @llvm.dbg.value(metadata !{i7 %i}, i64 0, metadata !71), !dbg !70 ; [debug line = 42:38] [debug variable = i]
  br label %1, !dbg !70                           ; [debug line = 42:38]

; <label>:2                                       ; preds = %1
  ret void, !dbg !73                              ; [debug line = 88:2]
}

; [#uses=3]
define weak i1 @_ssdm_op_WriteResp.m_axi.doubleP(double*) {
entry:
  ret i1 true
}

; [#uses=3]
define weak i1 @_ssdm_op_WriteReq.m_axi.doubleP(double*, i32) {
entry:
  ret i1 true
}

; [#uses=3]
define weak void @_ssdm_op_Write.m_axi.doubleP(double*, double, i8) {
entry:
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecPipeline(...) {
entry:
  ret void
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

; [#uses=5]
define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=3]
define weak i64 @_ssdm_op_Read.s_axilite.i64(i64) {
entry:
  ret i64 %0
}

; [#uses=3]
define weak i61 @_ssdm_op_PartSelect.i61.i64.i32.i32(i64, i32, i32) nounwind readnone {
entry:
  %empty = call i64 @llvm.part.select.i64(i64 %0, i32 %1, i32 %2) ; [#uses=1 type=i64]
  %empty_12 = trunc i64 %empty to i61             ; [#uses=1 type=i61]
  ret i61 %empty_12
}

; [#uses=0]
declare i52 @_ssdm_op_PartSelect.i52.i64.i32.i32(i64, i32, i32) nounwind readnone

; [#uses=10]
define weak i11 @_ssdm_op_PartSelect.i11.i64.i32.i32(i64, i32, i32) nounwind readnone {
entry:
  %empty = call i64 @llvm.part.select.i64(i64 %0, i32 %1, i32 %2) ; [#uses=1 type=i64]
  %empty_13 = trunc i64 %empty to i11             ; [#uses=1 type=i11]
  ret i11 %empty_13
}

; [#uses=1]
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
!24 = metadata !{i32 786689, metadata !25, metadata !"c", metadata !26, i32 50331668, metadata !32, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!25 = metadata !{i32 786478, i32 0, metadata !26, metadata !"cordic", metadata !"cordic", metadata !"", metadata !26, i32 20, metadata !27, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !34, i32 21} ; [ DW_TAG_subprogram ]
!26 = metadata !{i32 786473, metadata !"/home/centos/src/project_data/AWS_Projects/cordic/src/ocl/cordic.cpp", metadata !"/home/centos/src/project_data/AWS_Projects/cordic/_xocc_cordic_cordic.sw_emu.dir/impl/kernels/cordic", null} ; [ DW_TAG_file_type ]
!27 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !28, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!28 = metadata !{null, metadata !29, metadata !32, metadata !32}
!29 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !30} ; [ DW_TAG_pointer_type ]
!30 = metadata !{i32 786454, null, metadata !"theta_type", metadata !26, i32 26, i64 0, i64 0, i64 0, i32 0, metadata !31} ; [ DW_TAG_typedef ]
!31 = metadata !{i32 786468, null, metadata !"double", null, i32 0, i64 64, i64 64, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!32 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !33} ; [ DW_TAG_pointer_type ]
!33 = metadata !{i32 786454, null, metadata !"cos_sin_type", metadata !26, i32 27, i64 0, i64 0, i64 0, i32 0, metadata !31} ; [ DW_TAG_typedef ]
!34 = metadata !{metadata !35}
!35 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!36 = metadata !{i32 20, i32 64, metadata !25, null}
!37 = metadata !{i32 786689, metadata !25, metadata !"s", metadata !26, i32 33554452, metadata !32, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!38 = metadata !{i32 20, i32 47, metadata !25, null}
!39 = metadata !{i32 786689, metadata !25, metadata !"theta", metadata !26, i32 16777236, metadata !29, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!40 = metadata !{i32 20, i32 26, metadata !25, null}
!41 = metadata !{metadata !42}
!42 = metadata !{i32 0, i32 63, metadata !43}
!43 = metadata !{metadata !44, metadata !45, metadata !46}
!44 = metadata !{metadata !"theta", metadata !18, metadata !"double", i32 0, i32 63}
!45 = metadata !{metadata !"s", metadata !18, metadata !"double", i32 0, i32 63}
!46 = metadata !{metadata !"c", metadata !18, metadata !"double", i32 0, i32 63}
!47 = metadata !{i32 22, i32 1, metadata !48, null}
!48 = metadata !{i32 786443, metadata !25, i32 21, i32 2, metadata !26, i32 0} ; [ DW_TAG_lexical_block ]
!49 = metadata !{i32 25, i32 1, metadata !48, null}
!50 = metadata !{i32 26, i32 1, metadata !48, null}
!51 = metadata !{i32 27, i32 1, metadata !48, null}
!52 = metadata !{i32 28, i32 1, metadata !48, null}
!53 = metadata !{i32 42, i32 19, metadata !54, null}
!54 = metadata !{i32 786443, metadata !48, i32 42, i32 5, metadata !26, i32 1} ; [ DW_TAG_lexical_block ]
!55 = metadata !{i32 47, i32 9, metadata !56, null}
!56 = metadata !{i32 786443, metadata !54, i32 42, i32 43, metadata !26, i32 2} ; [ DW_TAG_lexical_block ]
!57 = metadata !{i32 786688, metadata !48, metadata !"radian", metadata !26, i32 39, metadata !31, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!58 = metadata !{i32 48, i32 9, metadata !56, null}
!59 = metadata !{i32 70, i32 3, metadata !60, null}
!60 = metadata !{i32 786443, metadata !61, i32 69, i32 42, metadata !26, i32 4} ; [ DW_TAG_lexical_block ]
!61 = metadata !{i32 786443, metadata !56, i32 69, i32 6, metadata !26, i32 3} ; [ DW_TAG_lexical_block ]
!62 = metadata !{i32 71, i32 7, metadata !63, null}
!63 = metadata !{i32 786443, metadata !60, i32 70, i32 29, metadata !26, i32 5} ; [ DW_TAG_lexical_block ]
!64 = metadata !{i32 77, i32 7, metadata !65, null}
!65 = metadata !{i32 786443, metadata !60, i32 76, i32 8, metadata !26, i32 6} ; [ DW_TAG_lexical_block ]
!66 = metadata !{i32 72, i32 7, metadata !63, null}
!67 = metadata !{i32 78, i32 7, metadata !65, null}
!68 = metadata !{i32 85, i32 6, metadata !56, null}
!69 = metadata !{i32 86, i32 6, metadata !56, null}
!70 = metadata !{i32 42, i32 38, metadata !54, null}
!71 = metadata !{i32 786688, metadata !54, metadata !"i", metadata !26, i32 42, metadata !72, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!72 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!73 = metadata !{i32 88, i32 2, metadata !48, null}
