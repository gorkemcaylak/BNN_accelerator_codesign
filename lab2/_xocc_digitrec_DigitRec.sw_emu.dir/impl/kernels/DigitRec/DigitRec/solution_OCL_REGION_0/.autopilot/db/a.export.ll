; ModuleID = '/home/centos/src/project_data/AWS_Projects/lab2/_xocc_digitrec_DigitRec.sw_emu.dir/impl/kernels/DigitRec/DigitRec/solution_OCL_REGION_0/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535]
@L1800_L10_str = internal unnamed_addr constant [10 x i8] c"L1800_L10\00"
@DigitRec_str = internal unnamed_addr constant [9 x i8] c"DigitRec\00"
@p_str8 = private unnamed_addr constant [4 x i8] c"L10\00", align 1
@p_str6 = private unnamed_addr constant [5 x i8] c"L180\00", align 1
@p_str5 = private unnamed_addr constant [8 x i8] c"control\00", align 1
@p_str4 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1
@p_str3 = private unnamed_addr constant [6 x i8] c"slave\00", align 1
@p_str2 = private unnamed_addr constant [5 x i8] c"gmem\00", align 1
@p_str19 = internal unnamed_addr constant [1 x i8] zeroinitializer
@p_str18 = internal unnamed_addr constant [1 x i8] zeroinitializer
@p_str17 = internal unnamed_addr constant [1 x i8] zeroinitializer
@p_str16 = internal unnamed_addr constant [1 x i8] zeroinitializer
@p_str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1
@p_str = private unnamed_addr constant [6 x i8] c"m_axi\00", align 1

define internal fastcc void @update_knn(i64 %test_inst_V, i64 %train_inst_V, [30 x i6]* nocapture %min_distances_V, i64 %min_distances_V_offset) {
.preheader.preheader:
  %min_distances_V_offset_read = call i64 @_ssdm_op_Read.ap_auto.i64(i64 %min_distances_V_offset)
  %train_inst_V_read = call i64 @_ssdm_op_Read.ap_auto.i64(i64 %train_inst_V)
  %test_inst_V_read = call i64 @_ssdm_op_Read.ap_auto.i64(i64 %test_inst_V)
  %r_V = xor i64 %train_inst_V_read, %test_inst_V_read
  %tmp_2 = trunc i64 %r_V to i1
  %tmp_cast = zext i1 %tmp_2 to i2
  %tmp_3 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 1)
  %tmp_cast_7 = zext i1 %tmp_3 to i2
  %tmp_5 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 2)
  %tmp_2_cast = zext i1 %tmp_5 to i2
  %tmp_6 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 3)
  %tmp_3_cast = zext i1 %tmp_6 to i2
  %tmp_7 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 4)
  %tmp_1_cast = zext i1 %tmp_7 to i2
  %tmp_8 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 5)
  %tmp_5_cast = zext i1 %tmp_8 to i2
  %tmp_9 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 6)
  %tmp_6_cast = zext i1 %tmp_9 to i2
  %tmp_10 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 7)
  %tmp_14_cast = zext i1 %tmp_10 to i2
  %tmp_11 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 8)
  %tmp_8_cast = zext i1 %tmp_11 to i2
  %tmp_12 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 9)
  %tmp_9_cast = zext i1 %tmp_12 to i2
  %tmp_13 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 10)
  %tmp_10_cast = zext i1 %tmp_13 to i2
  %tmp_14 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 11)
  %tmp_11_cast = zext i1 %tmp_14 to i2
  %tmp_15 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 12)
  %tmp_12_cast = zext i1 %tmp_15 to i2
  %tmp_16 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 13)
  %tmp_13_cast = zext i1 %tmp_16 to i2
  %tmp_17 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 14)
  %tmp_45_cast = zext i1 %tmp_17 to i2
  %tmp_18 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 15)
  %tmp_15_cast = zext i1 %tmp_18 to i2
  %tmp_19 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 16)
  %tmp_16_cast = zext i1 %tmp_19 to i2
  %tmp_20 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 17)
  %tmp_17_cast = zext i1 %tmp_20 to i2
  %tmp_21 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 18)
  %tmp_18_cast = zext i1 %tmp_21 to i2
  %tmp_22 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 19)
  %tmp_19_cast = zext i1 %tmp_22 to i2
  %tmp_23 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 20)
  %tmp_20_cast = zext i1 %tmp_23 to i2
  %tmp_24 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 21)
  %tmp_21_cast = zext i1 %tmp_24 to i2
  %tmp_25 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 22)
  %tmp_22_cast = zext i1 %tmp_25 to i2
  %tmp_26 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 23)
  %tmp_23_cast = zext i1 %tmp_26 to i2
  %tmp_27 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 24)
  %tmp_24_cast = zext i1 %tmp_27 to i2
  %tmp_28 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 25)
  %tmp_25_cast = zext i1 %tmp_28 to i2
  %tmp_29 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 26)
  %tmp_26_cast = zext i1 %tmp_29 to i2
  %tmp_30 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 27)
  %tmp_27_cast = zext i1 %tmp_30 to i2
  %tmp_31 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 28)
  %tmp_28_cast = zext i1 %tmp_31 to i2
  %tmp_32 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 29)
  %tmp_29_cast = zext i1 %tmp_32 to i2
  %tmp_33 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 30)
  %tmp_30_cast = zext i1 %tmp_33 to i2
  %tmp_34 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 31)
  %tmp_31_cast = zext i1 %tmp_34 to i2
  %tmp_35 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 32)
  %tmp_32_cast = zext i1 %tmp_35 to i2
  %tmp_36 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 33)
  %tmp_33_cast = zext i1 %tmp_36 to i2
  %tmp_37 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 34)
  %tmp_34_cast = zext i1 %tmp_37 to i2
  %tmp_38 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 35)
  %tmp_35_cast = zext i1 %tmp_38 to i2
  %tmp_39 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 36)
  %tmp_36_cast = zext i1 %tmp_39 to i2
  %tmp_40 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 37)
  %tmp_37_cast = zext i1 %tmp_40 to i2
  %tmp_41 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 38)
  %tmp_38_cast = zext i1 %tmp_41 to i2
  %tmp_42 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 39)
  %tmp_39_cast = zext i1 %tmp_42 to i2
  %tmp_43 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 40)
  %tmp_40_cast = zext i1 %tmp_43 to i2
  %tmp_44 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 41)
  %tmp_41_cast = zext i1 %tmp_44 to i2
  %tmp_45 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 42)
  %tmp_42_cast = zext i1 %tmp_45 to i2
  %tmp_46 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 43)
  %tmp_43_cast = zext i1 %tmp_46 to i2
  %tmp_47 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 44)
  %tmp_44_cast = zext i1 %tmp_47 to i2
  %tmp_48 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 45)
  %tmp_49_cast = zext i1 %tmp_48 to i2
  %tmp_49 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 46)
  %tmp_46_cast = zext i1 %tmp_49 to i2
  %tmp_50 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 47)
  %tmp_47_cast = zext i1 %tmp_50 to i2
  %tmp_51 = call i1 @_ssdm_op_BitSelect.i1.i64.i32(i64 %r_V, i32 48)
  %tmp_48_cast = zext i1 %tmp_51 to i2
  %tmp = add i2 %tmp_49_cast, %tmp_47_cast
  %tmp1 = add i2 %tmp_46_cast, %tmp
  %tmp50_cast = zext i2 %tmp1 to i3
  %tmp2 = add i2 %tmp_43_cast, %tmp_44_cast
  %tmp3 = add i2 %tmp_42_cast, %tmp2
  %tmp52_cast = zext i2 %tmp3 to i3
  %tmp4 = add i3 %tmp50_cast, %tmp52_cast
  %tmp49_cast = zext i3 %tmp4 to i4
  %tmp5 = add i2 %tmp_37_cast, %tmp_38_cast
  %tmp6 = add i2 %tmp_36_cast, %tmp5
  %tmp55_cast = zext i2 %tmp6 to i3
  %tmp7 = add i2 %tmp_40_cast, %tmp_41_cast
  %tmp8 = add i2 %tmp_39_cast, %tmp7
  %tmp57_cast = zext i2 %tmp8 to i3
  %tmp9 = add i3 %tmp55_cast, %tmp57_cast
  %tmp54_cast = zext i3 %tmp9 to i4
  %tmp10 = add i4 %tmp49_cast, %tmp54_cast
  %tmp48_cast = zext i4 %tmp10 to i5
  %tmp11 = add i2 %tmp_25_cast, %tmp_26_cast
  %tmp12 = add i2 %tmp_24_cast, %tmp11
  %tmp61_cast = zext i2 %tmp12 to i3
  %tmp13 = add i2 %tmp_28_cast, %tmp_29_cast
  %tmp14 = add i2 %tmp_27_cast, %tmp13
  %tmp63_cast = zext i2 %tmp14 to i3
  %tmp15 = add i3 %tmp61_cast, %tmp63_cast
  %tmp60_cast = zext i3 %tmp15 to i4
  %tmp16 = add i2 %tmp_31_cast, %tmp_32_cast
  %tmp17 = add i2 %tmp_30_cast, %tmp16
  %tmp66_cast = zext i2 %tmp17 to i3
  %tmp18 = add i2 %tmp_34_cast, %tmp_35_cast
  %tmp19 = add i2 %tmp_33_cast, %tmp18
  %tmp68_cast = zext i2 %tmp19 to i3
  %tmp20 = add i3 %tmp66_cast, %tmp68_cast
  %tmp65_cast = zext i3 %tmp20 to i4
  %tmp21 = add i4 %tmp60_cast, %tmp65_cast
  %tmp59_cast = zext i4 %tmp21 to i5
  %tmp22 = add i5 %tmp48_cast, %tmp59_cast
  %tmp47_cast = zext i5 %tmp22 to i6
  %tmp23 = add i2 %tmp_cast, %tmp_2_cast
  %tmp24 = add i2 %tmp_cast_7, %tmp23
  %tmp73_cast = zext i2 %tmp24 to i3
  %tmp25 = add i2 %tmp_1_cast, %tmp_5_cast
  %tmp26 = add i2 %tmp_3_cast, %tmp25
  %tmp75_cast = zext i2 %tmp26 to i3
  %tmp27 = add i3 %tmp73_cast, %tmp75_cast
  %tmp72_cast = zext i3 %tmp27 to i4
  %tmp28 = add i2 %tmp_14_cast, %tmp_8_cast
  %tmp29 = add i2 %tmp_6_cast, %tmp28
  %tmp78_cast = zext i2 %tmp29 to i3
  %tmp30 = add i2 %tmp_10_cast, %tmp_11_cast
  %tmp31 = add i2 %tmp_9_cast, %tmp30
  %tmp80_cast = zext i2 %tmp31 to i3
  %tmp32 = add i3 %tmp78_cast, %tmp80_cast
  %tmp77_cast = zext i3 %tmp32 to i4
  %tmp33 = add i4 %tmp72_cast, %tmp77_cast
  %tmp71_cast = zext i4 %tmp33 to i5
  %tmp34 = add i2 %tmp_13_cast, %tmp_45_cast
  %tmp35 = add i2 %tmp_12_cast, %tmp34
  %tmp84_cast = zext i2 %tmp35 to i3
  %tmp36 = add i2 %tmp_16_cast, %tmp_17_cast
  %tmp37 = add i2 %tmp_15_cast, %tmp36
  %tmp86_cast = zext i2 %tmp37 to i3
  %tmp38 = add i3 %tmp84_cast, %tmp86_cast
  %tmp83_cast = zext i3 %tmp38 to i4
  %tmp39 = add i2 %tmp_19_cast, %tmp_20_cast
  %tmp40 = add i2 %tmp_18_cast, %tmp39
  %tmp89_cast = zext i2 %tmp40 to i3
  %tmp41 = add i2 %tmp_23_cast, %tmp_21_cast
  %tmp92_cast = zext i2 %tmp41 to i3
  %tmp42 = add i2 %tmp_48_cast, %tmp_22_cast
  %tmp93_cast = zext i2 %tmp42 to i3
  %tmp43 = add i3 %tmp92_cast, %tmp93_cast
  %tmp44 = add i3 %tmp89_cast, %tmp43
  %tmp88_cast = zext i3 %tmp44 to i4
  %tmp45 = add i4 %tmp83_cast, %tmp88_cast
  %tmp82_cast = zext i4 %tmp45 to i5
  %tmp46 = add i5 %tmp71_cast, %tmp82_cast
  %tmp70_cast = zext i5 %tmp46 to i6
  %dist_V_s = add i6 %tmp47_cast, %tmp70_cast
  %min_distances_V_addr = getelementptr [30 x i6]* %min_distances_V, i64 0, i64 %min_distances_V_offset_read
  %min_distances_V_load = load i6* %min_distances_V_addr, align 1
  %tmp_s = icmp eq i6 %min_distances_V_load, 0
  %p_s = select i1 %tmp_s, i3 -4, i3 0
  %tmp_52 = trunc i64 %min_distances_V_offset_read to i6
  %sum_1 = add i6 1, %tmp_52
  %sum_1_cast = zext i6 %sum_1 to i64
  %sum_1_cast_cast = zext i6 %sum_1 to i32
  %min_distances_V_addr_1 = getelementptr [30 x i6]* %min_distances_V, i64 0, i64 %sum_1_cast
  %min_distances_V_load_1 = load i6* %min_distances_V_addr_1, align 1
  %tmp_6_1 = icmp ugt i6 %min_distances_V_load_1, %min_distances_V_load
  %tmp_53 = trunc i64 %min_distances_V_offset_read to i32
  %p_018_1_1 = select i1 %tmp_6_1, i32 %sum_1_cast_cast, i32 %tmp_53
  %p_018_1_1_cast = zext i32 %p_018_1_1 to i64
  %min_distances_V_addr_4 = getelementptr [30 x i6]* %min_distances_V, i64 0, i64 %p_018_1_1_cast
  %min_distances_V_load_3 = load i6* %min_distances_V_addr_4, align 1
  %sum_2 = add i6 2, %tmp_52
  %sum_2_cast = zext i6 %sum_2 to i64
  %sum_2_cast_cast = zext i6 %sum_2 to i32
  %min_distances_V_addr_2 = getelementptr [30 x i6]* %min_distances_V, i64 0, i64 %sum_2_cast
  %min_distances_V_load_2 = load i6* %min_distances_V_addr_2, align 1
  %tmp_6_2 = icmp ugt i6 %min_distances_V_load_2, %min_distances_V_load_3
  %min_distances_V_load_2_018_1_1 = select i1 %tmp_6_2, i32 %sum_2_cast_cast, i32 %p_018_1_1
  %min_distances_V_load_2_018_1_1_cast = zext i32 %min_distances_V_load_2_018_1_1 to i64
  %min_distances_V_addr_5 = getelementptr [30 x i6]* %min_distances_V, i64 0, i64 %min_distances_V_load_2_018_1_1_cast
  %min_distances_V_load_4 = load i6* %min_distances_V_addr_5, align 1
  %max_dist_id_1_1_cast_cast = select i1 %tmp_6_2, i3 2, i3 1
  %tmp_1 = or i1 %tmp_6_2, %tmp_6_1
  %p_max_dist_id_1_1 = select i1 %tmp_1, i3 %max_dist_id_1_1_cast_cast, i3 %p_s
  %tmp_4 = icmp ult i6 %dist_V_s, %min_distances_V_load_4
  br i1 %tmp_4, label %0, label %._crit_edge68

; <label>:0                                       ; preds = %.preheader.preheader
  %tmp_7_cast = zext i3 %p_max_dist_id_1_1 to i6
  %sum2 = add i6 %tmp_7_cast, %tmp_52
  %sum2_cast = zext i6 %sum2 to i64
  %min_distances_V_addr_3 = getelementptr [30 x i6]* %min_distances_V, i64 0, i64 %sum2_cast
  store i6 %dist_V_s, i6* %min_distances_V_addr_3, align 1
  br label %._crit_edge68

._crit_edge68:                                    ; preds = %0, %.preheader.preheader
  ret void
}

declare i8 @llvm.part.select.i8(i8, i32, i32) nounwind readnone

declare i64 @llvm.part.select.i64(i64, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

define internal fastcc i4 @knn_vote([30 x i6]* %knn_set_V) {
  %score = alloca [10 x i32], align 16
  br label %1

; <label>:1                                       ; preds = %2, %0
  %i = phi i4 [ 0, %0 ], [ %i_1, %2 ]
  %exitcond2 = icmp eq i4 %i, -6
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %i_1 = add i4 %i, 1
  br i1 %exitcond2, label %.preheader118.preheader, label %2

.preheader118.preheader:                          ; preds = %1
  %knn_set_V_addr = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 0
  %knn_set_V_addr_1 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 1
  %knn_set_V_addr_2 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 2
  %knn_set_V_addr_3 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 3
  %knn_set_V_addr_4 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 4
  %knn_set_V_addr_5 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 5
  %knn_set_V_addr_6 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 6
  %knn_set_V_addr_7 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 7
  %knn_set_V_addr_8 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 8
  %knn_set_V_addr_9 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 9
  %knn_set_V_addr_10 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 10
  %knn_set_V_addr_11 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 11
  %knn_set_V_addr_12 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 12
  %knn_set_V_addr_13 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 13
  %knn_set_V_addr_14 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 14
  %knn_set_V_addr_15 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 15
  %knn_set_V_addr_16 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 16
  %knn_set_V_addr_17 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 17
  %knn_set_V_addr_18 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 18
  %knn_set_V_addr_19 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 19
  %knn_set_V_addr_20 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 20
  %knn_set_V_addr_21 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 21
  %knn_set_V_addr_22 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 22
  %knn_set_V_addr_23 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 23
  %knn_set_V_addr_24 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 24
  %knn_set_V_addr_25 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 25
  %knn_set_V_addr_26 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 26
  %knn_set_V_addr_27 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 27
  %knn_set_V_addr_28 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 28
  %knn_set_V_addr_29 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 29
  br label %.preheader118

; <label>:2                                       ; preds = %1
  %tmp = zext i4 %i to i64
  %score_addr = getelementptr inbounds [10 x i32]* %score, i64 0, i64 %tmp
  store i32 0, i32* %score_addr, align 4
  br label %1

.preheader118:                                    ; preds = %.preheader.preheader.0, %.preheader118.preheader
  %k = phi i2 [ %k_1, %.preheader.preheader.0 ], [ 0, %.preheader118.preheader ]
  %exitcond3 = icmp eq i2 %k, -1
  %k_1 = add i2 %k, 1
  br i1 %exitcond3, label %.preheader3.preheader, label %.preheader.preheader.0

.preheader3.preheader:                            ; preds = %.preheader118
  br label %.preheader3

.preheader.preheader.0:                           ; preds = %.preheader118
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str16)
  %empty_8 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %knn_set_V_load = load i6* %knn_set_V_addr, align 1
  %tmp_9 = icmp ult i6 %knn_set_V_load, -14
  %p_080_2 = select i1 %tmp_9, i6 %knn_set_V_load, i6 -14
  %knn_set_V_load_1 = load i6* %knn_set_V_addr_1, align 1
  %tmp_9_0_1 = icmp ult i6 %knn_set_V_load_1, %p_080_2
  %knn_set_V_load_1_080_2 = select i1 %tmp_9_0_1, i6 %knn_set_V_load_1, i6 %p_080_2
  %tmp_5 = or i1 %tmp_9_0_1, %tmp_9
  %p_072_2 = select i1 %tmp_5, i4 0, i4 -6
  %min_dist_record_2_cast = zext i1 %tmp_9_0_1 to i3
  %p_min_dist_record_2 = select i1 %tmp_5, i3 %min_dist_record_2_cast, i3 -4
  %knn_set_V_load_2 = load i6* %knn_set_V_addr_2, align 1
  %tmp_9_0_2 = icmp ult i6 %knn_set_V_load_2, %knn_set_V_load_1_080_2
  %p_080_2_0_2 = select i1 %tmp_9_0_2, i6 %knn_set_V_load_2, i6 %knn_set_V_load_1_080_2
  %knn_set_V_load_3 = load i6* %knn_set_V_addr_3, align 1
  %tmp_9_1 = icmp ult i6 %knn_set_V_load_3, %p_080_2_0_2
  %p_080_2_1 = select i1 %tmp_9_1, i6 %knn_set_V_load_3, i6 %p_080_2_0_2
  %p_072_2_0_2 = zext i1 %tmp_9_1 to i4
  %tmp_6 = or i1 %tmp_9_1, %tmp_9_0_2
  %p_072_2_1 = select i1 %tmp_6, i4 %p_072_2_0_2, i4 %p_072_2
  %min_dist_record_2_0_2_cast_cast = select i1 %tmp_9_1, i3 0, i3 2
  %min_dist_record_2_1 = select i1 %tmp_6, i3 %min_dist_record_2_0_2_cast_cast, i3 %p_min_dist_record_2
  %knn_set_V_load_4 = load i6* %knn_set_V_addr_4, align 1
  %tmp_9_1_1 = icmp ult i6 %knn_set_V_load_4, %p_080_2_1
  %knn_set_V_load_4_080_2_1 = select i1 %tmp_9_1_1, i6 %knn_set_V_load_4, i6 %p_080_2_1
  %knn_set_V_load_5 = load i6* %knn_set_V_addr_5, align 1
  %tmp_9_1_2 = icmp ult i6 %knn_set_V_load_5, %knn_set_V_load_4_080_2_1
  %p_080_2_1_2 = select i1 %tmp_9_1_2, i6 %knn_set_V_load_5, i6 %knn_set_V_load_4_080_2_1
  %tmp_7 = or i1 %tmp_9_1_2, %tmp_9_1_1
  %p_min_dist_record_2_1_cast_cast = select i1 %tmp_9_1_2, i3 2, i3 1
  %min_dist_record_2_1_2 = select i1 %tmp_7, i3 %p_min_dist_record_2_1_cast_cast, i3 %min_dist_record_2_1
  %knn_set_V_load_6 = load i6* %knn_set_V_addr_6, align 1
  %tmp_9_2 = icmp ult i6 %knn_set_V_load_6, %p_080_2_1_2
  %p_080_2_2 = select i1 %tmp_9_2, i6 %knn_set_V_load_6, i6 %p_080_2_1_2
  %knn_set_V_load_7 = load i6* %knn_set_V_addr_7, align 1
  %tmp_9_2_1 = icmp ult i6 %knn_set_V_load_7, %p_080_2_2
  %knn_set_V_load_7_080_2_2 = select i1 %tmp_9_2_1, i6 %knn_set_V_load_7, i6 %p_080_2_2
  %tmp_8 = or i1 %tmp_9_2_1, %tmp_9_2
  %p_072_2_1_2_cast = select i1 %tmp_8, i4 2, i4 1
  %tmp_10 = or i1 %tmp_8, %tmp_7
  %p_072_2_2 = select i1 %tmp_10, i4 %p_072_2_1_2_cast, i4 %p_072_2_1
  %min_dist_record_2_2_cast = zext i1 %tmp_9_2_1 to i3
  %p_min_dist_record_2_2 = select i1 %tmp_8, i3 %min_dist_record_2_2_cast, i3 %min_dist_record_2_1_2
  %knn_set_V_load_8 = load i6* %knn_set_V_addr_8, align 1
  %tmp_9_2_2 = icmp ult i6 %knn_set_V_load_8, %knn_set_V_load_7_080_2_2
  %p_080_2_2_2 = select i1 %tmp_9_2_2, i6 %knn_set_V_load_8, i6 %knn_set_V_load_7_080_2_2
  %knn_set_V_load_9 = load i6* %knn_set_V_addr_9, align 1
  %tmp_9_3 = icmp ult i6 %knn_set_V_load_9, %p_080_2_2_2
  %p_080_2_3 = select i1 %tmp_9_3, i6 %knn_set_V_load_9, i6 %p_080_2_2_2
  %p_072_2_2_2_cast_cast = select i1 %tmp_9_3, i4 3, i4 2
  %tmp_11 = or i1 %tmp_9_3, %tmp_9_2_2
  %p_072_2_3 = select i1 %tmp_11, i4 %p_072_2_2_2_cast_cast, i4 %p_072_2_2
  %min_dist_record_2_2_2_cast_cast = select i1 %tmp_9_3, i3 0, i3 2
  %min_dist_record_2_3 = select i1 %tmp_11, i3 %min_dist_record_2_2_2_cast_cast, i3 %p_min_dist_record_2_2
  %knn_set_V_load_10 = load i6* %knn_set_V_addr_10, align 1
  %tmp_9_3_1 = icmp ult i6 %knn_set_V_load_10, %p_080_2_3
  %knn_set_V_load_10_080_2_3 = select i1 %tmp_9_3_1, i6 %knn_set_V_load_10, i6 %p_080_2_3
  %knn_set_V_load_11 = load i6* %knn_set_V_addr_11, align 1
  %tmp_9_3_2 = icmp ult i6 %knn_set_V_load_11, %knn_set_V_load_10_080_2_3
  %p_080_2_3_2 = select i1 %tmp_9_3_2, i6 %knn_set_V_load_11, i6 %knn_set_V_load_10_080_2_3
  %tmp_12 = or i1 %tmp_9_3_2, %tmp_9_3_1
  %p_min_dist_record_2_3_cast_cast = select i1 %tmp_9_3_2, i3 2, i3 1
  %min_dist_record_2_3_2 = select i1 %tmp_12, i3 %p_min_dist_record_2_3_cast_cast, i3 %min_dist_record_2_3
  %knn_set_V_load_12 = load i6* %knn_set_V_addr_12, align 1
  %tmp_9_4 = icmp ult i6 %knn_set_V_load_12, %p_080_2_3_2
  %p_080_2_4 = select i1 %tmp_9_4, i6 %knn_set_V_load_12, i6 %p_080_2_3_2
  %knn_set_V_load_13 = load i6* %knn_set_V_addr_13, align 1
  %tmp_9_4_1 = icmp ult i6 %knn_set_V_load_13, %p_080_2_4
  %knn_set_V_load_13_080_2_4 = select i1 %tmp_9_4_1, i6 %knn_set_V_load_13, i6 %p_080_2_4
  %tmp_13 = or i1 %tmp_9_4_1, %tmp_9_4
  %p_072_2_3_2_cast = select i1 %tmp_13, i4 4, i4 3
  %tmp_14 = or i1 %tmp_13, %tmp_12
  %p_072_2_4 = select i1 %tmp_14, i4 %p_072_2_3_2_cast, i4 %p_072_2_3
  %min_dist_record_2_4_cast = zext i1 %tmp_9_4_1 to i3
  %p_min_dist_record_2_4 = select i1 %tmp_13, i3 %min_dist_record_2_4_cast, i3 %min_dist_record_2_3_2
  %knn_set_V_load_14 = load i6* %knn_set_V_addr_14, align 1
  %tmp_9_4_2 = icmp ult i6 %knn_set_V_load_14, %knn_set_V_load_13_080_2_4
  %p_080_2_4_2 = select i1 %tmp_9_4_2, i6 %knn_set_V_load_14, i6 %knn_set_V_load_13_080_2_4
  %knn_set_V_load_15 = load i6* %knn_set_V_addr_15, align 1
  %tmp_9_5 = icmp ult i6 %knn_set_V_load_15, %p_080_2_4_2
  %p_080_2_5 = select i1 %tmp_9_5, i6 %knn_set_V_load_15, i6 %p_080_2_4_2
  %p_072_2_4_2_cast_cast = select i1 %tmp_9_5, i4 5, i4 4
  %tmp_15 = or i1 %tmp_9_5, %tmp_9_4_2
  %p_072_2_5 = select i1 %tmp_15, i4 %p_072_2_4_2_cast_cast, i4 %p_072_2_4
  %min_dist_record_2_4_2_cast_cast = select i1 %tmp_9_5, i3 0, i3 2
  %min_dist_record_2_5 = select i1 %tmp_15, i3 %min_dist_record_2_4_2_cast_cast, i3 %p_min_dist_record_2_4
  %knn_set_V_load_16 = load i6* %knn_set_V_addr_16, align 1
  %tmp_9_5_1 = icmp ult i6 %knn_set_V_load_16, %p_080_2_5
  %knn_set_V_load_16_080_2_5 = select i1 %tmp_9_5_1, i6 %knn_set_V_load_16, i6 %p_080_2_5
  %knn_set_V_load_17 = load i6* %knn_set_V_addr_17, align 1
  %tmp_9_5_2 = icmp ult i6 %knn_set_V_load_17, %knn_set_V_load_16_080_2_5
  %p_080_2_5_2 = select i1 %tmp_9_5_2, i6 %knn_set_V_load_17, i6 %knn_set_V_load_16_080_2_5
  %tmp_16 = or i1 %tmp_9_5_2, %tmp_9_5_1
  %p_min_dist_record_2_5_cast_cast = select i1 %tmp_9_5_2, i3 2, i3 1
  %min_dist_record_2_5_2 = select i1 %tmp_16, i3 %p_min_dist_record_2_5_cast_cast, i3 %min_dist_record_2_5
  %knn_set_V_load_18 = load i6* %knn_set_V_addr_18, align 1
  %tmp_9_6 = icmp ult i6 %knn_set_V_load_18, %p_080_2_5_2
  %p_080_2_6 = select i1 %tmp_9_6, i6 %knn_set_V_load_18, i6 %p_080_2_5_2
  %knn_set_V_load_19 = load i6* %knn_set_V_addr_19, align 1
  %tmp_9_6_1 = icmp ult i6 %knn_set_V_load_19, %p_080_2_6
  %knn_set_V_load_19_080_2_6 = select i1 %tmp_9_6_1, i6 %knn_set_V_load_19, i6 %p_080_2_6
  %tmp_17 = or i1 %tmp_9_6_1, %tmp_9_6
  %p_072_2_5_2_cast = select i1 %tmp_17, i4 6, i4 5
  %tmp_18 = or i1 %tmp_17, %tmp_16
  %p_072_2_6 = select i1 %tmp_18, i4 %p_072_2_5_2_cast, i4 %p_072_2_5
  %min_dist_record_2_6_cast = zext i1 %tmp_9_6_1 to i3
  %p_min_dist_record_2_6 = select i1 %tmp_17, i3 %min_dist_record_2_6_cast, i3 %min_dist_record_2_5_2
  %knn_set_V_load_20 = load i6* %knn_set_V_addr_20, align 1
  %tmp_9_6_2 = icmp ult i6 %knn_set_V_load_20, %knn_set_V_load_19_080_2_6
  %p_080_2_6_2 = select i1 %tmp_9_6_2, i6 %knn_set_V_load_20, i6 %knn_set_V_load_19_080_2_6
  %knn_set_V_load_21 = load i6* %knn_set_V_addr_21, align 1
  %tmp_9_7 = icmp ult i6 %knn_set_V_load_21, %p_080_2_6_2
  %p_080_2_7 = select i1 %tmp_9_7, i6 %knn_set_V_load_21, i6 %p_080_2_6_2
  %p_072_2_6_2_cast_cast = select i1 %tmp_9_7, i4 7, i4 6
  %tmp_19 = or i1 %tmp_9_7, %tmp_9_6_2
  %p_072_2_7 = select i1 %tmp_19, i4 %p_072_2_6_2_cast_cast, i4 %p_072_2_6
  %min_dist_record_2_6_2_cast_cast = select i1 %tmp_9_7, i3 0, i3 2
  %min_dist_record_2_7 = select i1 %tmp_19, i3 %min_dist_record_2_6_2_cast_cast, i3 %p_min_dist_record_2_6
  %knn_set_V_load_22 = load i6* %knn_set_V_addr_22, align 1
  %tmp_9_7_1 = icmp ult i6 %knn_set_V_load_22, %p_080_2_7
  %knn_set_V_load_22_080_2_7 = select i1 %tmp_9_7_1, i6 %knn_set_V_load_22, i6 %p_080_2_7
  %knn_set_V_load_23 = load i6* %knn_set_V_addr_23, align 1
  %tmp_9_7_2 = icmp ult i6 %knn_set_V_load_23, %knn_set_V_load_22_080_2_7
  %p_080_2_7_2 = select i1 %tmp_9_7_2, i6 %knn_set_V_load_23, i6 %knn_set_V_load_22_080_2_7
  %tmp_20 = or i1 %tmp_9_7_2, %tmp_9_7_1
  %p_min_dist_record_2_7_cast_cast = select i1 %tmp_9_7_2, i3 2, i3 1
  %min_dist_record_2_7_2 = select i1 %tmp_20, i3 %p_min_dist_record_2_7_cast_cast, i3 %min_dist_record_2_7
  %knn_set_V_load_24 = load i6* %knn_set_V_addr_24, align 1
  %tmp_9_8 = icmp ult i6 %knn_set_V_load_24, %p_080_2_7_2
  %p_080_2_8 = select i1 %tmp_9_8, i6 %knn_set_V_load_24, i6 %p_080_2_7_2
  %knn_set_V_load_25 = load i6* %knn_set_V_addr_25, align 1
  %tmp_9_8_1 = icmp ult i6 %knn_set_V_load_25, %p_080_2_8
  %knn_set_V_load_25_080_2_8 = select i1 %tmp_9_8_1, i6 %knn_set_V_load_25, i6 %p_080_2_8
  %tmp_21 = or i1 %tmp_9_8_1, %tmp_9_8
  %p_072_2_7_2 = select i1 %tmp_21, i4 -8, i4 7
  %tmp_22 = or i1 %tmp_21, %tmp_20
  %p_072_2_8 = select i1 %tmp_22, i4 %p_072_2_7_2, i4 %p_072_2_7
  %min_dist_record_2_8_cast = zext i1 %tmp_9_8_1 to i3
  %p_min_dist_record_2_8 = select i1 %tmp_21, i3 %min_dist_record_2_8_cast, i3 %min_dist_record_2_7_2
  %knn_set_V_load_26 = load i6* %knn_set_V_addr_26, align 1
  %tmp_9_8_2 = icmp ult i6 %knn_set_V_load_26, %knn_set_V_load_25_080_2_8
  %p_080_2_8_2 = select i1 %tmp_9_8_2, i6 %knn_set_V_load_26, i6 %knn_set_V_load_25_080_2_8
  %knn_set_V_load_27 = load i6* %knn_set_V_addr_27, align 1
  %tmp_9_9 = icmp ult i6 %knn_set_V_load_27, %p_080_2_8_2
  %p_080_2_9 = select i1 %tmp_9_9, i6 %knn_set_V_load_27, i6 %p_080_2_8_2
  %p_072_2_8_2 = select i1 %tmp_9_9, i4 -7, i4 -8
  %tmp_23 = or i1 %tmp_9_9, %tmp_9_8_2
  %p_072_2_9 = select i1 %tmp_23, i4 %p_072_2_8_2, i4 %p_072_2_8
  %min_dist_record_2_8_2_cast_cast = select i1 %tmp_9_9, i3 0, i3 2
  %min_dist_record_2_9 = select i1 %tmp_23, i3 %min_dist_record_2_8_2_cast_cast, i3 %p_min_dist_record_2_8
  %knn_set_V_load_28 = load i6* %knn_set_V_addr_28, align 1
  %tmp_9_9_1 = icmp ult i6 %knn_set_V_load_28, %p_080_2_9
  %knn_set_V_load_28_080_2_9 = select i1 %tmp_9_9_1, i6 %knn_set_V_load_28, i6 %p_080_2_9
  %knn_set_V_load_29 = load i6* %knn_set_V_addr_29, align 1
  %tmp_9_9_2 = icmp ult i6 %knn_set_V_load_29, %knn_set_V_load_28_080_2_9
  %tmp_24 = or i1 %tmp_9_9_2, %tmp_9_9_1
  %p_072_2_9_2 = select i1 %tmp_24, i4 -7, i4 %p_072_2_9
  %p_min_dist_record_2_9_cast_cast = select i1 %tmp_9_9_2, i3 2, i3 1
  %min_dist_record_2_9_2 = select i1 %tmp_24, i3 %p_min_dist_record_2_9_cast_cast, i3 %min_dist_record_2_9
  %tmp_2 = zext i4 %p_072_2_9_2 to i64
  %score_addr_2 = getelementptr inbounds [10 x i32]* %score, i64 0, i64 %tmp_2
  %score_load = load i32* %score_addr_2, align 4
  %tmp_3 = add nsw i32 %score_load, 1
  store i32 %tmp_3, i32* %score_addr_2, align 4
  %lhs_V_cast2 = zext i4 %p_072_2_9_2 to i7
  %p_shl2 = call i6 @_ssdm_op_BitConcatenate.i6.i4.i2(i4 %p_072_2_9_2, i2 0)
  %p_shl2_cast = zext i6 %p_shl2 to i7
  %r_V = sub i7 %p_shl2_cast, %lhs_V_cast2
  %r_V_cast = sext i7 %r_V to i36
  %lhs_V = zext i36 %r_V_cast to i37
  %rhs_V = zext i3 %min_dist_record_2_9_2 to i37
  %r_V_1 = add nsw i37 %lhs_V, %rhs_V
  %tmp_4 = sext i37 %r_V_1 to i64
  %knn_set_V_addr_30 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 %tmp_4
  store i6 -14, i6* %knn_set_V_addr_30, align 1
  br label %.preheader118

.preheader3:                                      ; preds = %.preheader3.preheader, %._crit_edge119
  %agg_result_V = phi i4 [ %min_index_V_agg_result_V, %._crit_edge119 ], [ 0, %.preheader3.preheader ]
  %max_score = phi i32 [ %max_score_2_max_score, %._crit_edge119 ], [ 0, %.preheader3.preheader ]
  %min_index_V = phi i4 [ %i_2, %._crit_edge119 ], [ 0, %.preheader3.preheader ]
  %exitcond = icmp eq i4 %min_index_V, -6
  %i_2 = add i4 %min_index_V, 1
  br i1 %exitcond, label %3, label %._crit_edge119

._crit_edge119:                                   ; preds = %.preheader3
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str17)
  %empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 10, i64 10, i64 10)
  %tmp_s = zext i4 %min_index_V to i64
  %score_addr_1 = getelementptr inbounds [10 x i32]* %score, i64 0, i64 %tmp_s
  %max_score_1 = load i32* %score_addr_1, align 4
  %tmp_1 = icmp sgt i32 %max_score_1, %max_score
  %min_index_V_agg_result_V = select i1 %tmp_1, i4 %min_index_V, i4 %agg_result_V
  %max_score_2_max_score = select i1 %tmp_1, i32 %max_score_1, i32 %max_score
  br label %.preheader3

; <label>:3                                       ; preds = %.preheader3
  ret i4 %agg_result_V
}

define weak i1 @_ssdm_op_WriteResp.m_axi.i64P(i64*) {
entry:
  ret i1 true
}

define weak i1 @_ssdm_op_WriteReq.m_axi.i64P(i64*, i32) {
entry:
  ret i1 true
}

define weak void @_ssdm_op_Write.m_axi.i64P(i64*, i64, i8) {
entry:
  ret void
}

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecPipeline(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i1 @_ssdm_op_ReadReq.m_axi.i64P(i64*, i32) {
entry:
  ret i1 true
}

define weak i64 @_ssdm_op_Read.s_axilite.i64(i64) {
entry:
  ret i64 %0
}

define weak i64 @_ssdm_op_Read.m_axi.i64P(i64*) {
entry:
  %empty = load i64* %0
  ret i64 %empty
}

define weak i64 @_ssdm_op_Read.ap_auto.i64(i64) {
entry:
  ret i64 %0
}

define weak i61 @_ssdm_op_PartSelect.i61.i64.i32.i32(i64, i32, i32) nounwind readnone {
entry:
  %empty = call i64 @llvm.part.select.i64(i64 %0, i32 %1, i32 %2)
  %empty_10 = trunc i64 %empty to i61
  ret i61 %empty_10
}

declare i6 @_ssdm_op_PartSelect.i6.i64.i32.i32(i64, i32, i32) nounwind readnone

define weak i4 @_ssdm_op_PartSelect.i4.i8.i32.i32(i8, i32, i32) nounwind readnone {
entry:
  %empty = call i8 @llvm.part.select.i8(i8 %0, i32 %1, i32 %2)
  %empty_11 = trunc i8 %empty to i4
  ret i4 %empty_11
}

declare i32 @_ssdm_op_PartSelect.i32.i64.i32.i32(i64, i32, i32) nounwind readnone

declare i1 @_ssdm_op_PartSelect.i1.i64.i32.i32(i64, i32, i32) nounwind readnone

define weak i1 @_ssdm_op_BitSelect.i1.i64.i32(i64, i32) nounwind readnone {
entry:
  %empty = zext i32 %1 to i64
  %empty_12 = shl i64 1, %empty
  %empty_13 = and i64 %0, %empty_12
  %empty_14 = icmp ne i64 %empty_13, 0
  ret i1 %empty_14
}

define weak i6 @_ssdm_op_BitConcatenate.i6.i4.i2(i4, i2) nounwind readnone {
entry:
  %empty = zext i4 %0 to i6
  %empty_15 = zext i2 %1 to i6
  %empty_16 = shl i6 %empty, 2
  %empty_17 = or i6 %empty_16, %empty_15
  ret i6 %empty_17
}

declare void @_GLOBAL__I_a() nounwind section ".text.startup"

define void @DigitRec(i64* %gmem, i64 %training_data_V, i64 %testing_data_V, i64 %results_V) {
.preheader22.preheader:
  %results_V_read = call i64 @_ssdm_op_Read.s_axilite.i64(i64 %results_V)
  %testing_data_V_read = call i64 @_ssdm_op_Read.s_axilite.i64(i64 %testing_data_V)
  %training_data_V_read = call i64 @_ssdm_op_Read.s_axilite.i64(i64 %training_data_V)
  %tmp = call i61 @_ssdm_op_PartSelect.i61.i64.i32.i32(i64 %results_V_read, i32 3, i32 63)
  %tmp_47_cast = zext i61 %tmp to i62
  %tmp_54 = call i61 @_ssdm_op_PartSelect.i61.i64.i32.i32(i64 %testing_data_V_read, i32 3, i32 63)
  %tmp_48_cast = zext i61 %tmp_54 to i62
  %tmp_55 = call i61 @_ssdm_op_PartSelect.i61.i64.i32.i32(i64 %training_data_V_read, i32 3, i32 63)
  %tmp_49_cast = zext i61 %tmp_55 to i62
  call void (...)* @_ssdm_op_SpecBitsMap(i64* %gmem), !map !82
  call void (...)* @_ssdm_op_SpecTopModule([9 x i8]* @DigitRec_str) nounwind
  %knn_set_V = alloca [30 x i6], align 1
  call void (...)* @_ssdm_op_SpecInterface(i64* %gmem, [6 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [5 x i8]* @p_str2, [6 x i8]* @p_str3, [1 x i8]* @p_str1, i32 16, i32 16, i32 16, i32 16, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i64 %training_data_V, [10 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [8 x i8]* @p_str5, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i64 %testing_data_V, [10 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [8 x i8]* @p_str5, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i64 %results_V, [10 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [8 x i8]* @p_str5, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @p_str4, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [8 x i8]* @p_str5, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  br label %.preheader22

.preheader22:                                     ; preds = %3, %.preheader22.preheader
  %k = phi i8 [ %k_2, %3 ], [ 0, %.preheader22.preheader ]
  %exitcond6 = icmp eq i8 %k, -76
  %k_2 = add i8 %k, 1
  br i1 %exitcond6, label %4, label %0

; <label>:0                                       ; preds = %.preheader22
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 180, i64 180, i64 180)
  call void (...)* @_ssdm_op_SpecLoopName([5 x i8]* @p_str6) nounwind
  %tmp_1 = call i32 (...)* @_ssdm_op_SpecRegionBegin([5 x i8]* @p_str6)
  %tmp_cast = zext i8 %k to i62
  %testing_data_V4_sum = add i62 %tmp_cast, %tmp_48_cast
  %testing_data_V4_sum_cast = zext i62 %testing_data_V4_sum to i64
  %gmem_addr = getelementptr i64* %gmem, i64 %testing_data_V4_sum_cast
  %testing_instance_V_req = call i1 @_ssdm_op_ReadReq.m_axi.i64P(i64* %gmem_addr, i32 1)
  %testing_instance_V = call i64 @_ssdm_op_Read.m_axi.i64P(i64* %gmem_addr)
  br label %1

; <label>:1                                       ; preds = %2, %0
  %i = phi i5 [ 0, %0 ], [ %i_3, %2 ]
  %exitcond7 = icmp eq i5 %i, -2
  %i_3 = add i5 %i, 1
  br i1 %exitcond7, label %.preheader.preheader.preheader, label %2

.preheader.preheader.preheader:                   ; preds = %1
  br label %.preheader.preheader

; <label>:2                                       ; preds = %1
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str19)
  %empty_18 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 30, i64 30, i64 30)
  %tmp_s = zext i5 %i to i64
  %knn_set_V_addr_2 = getelementptr [30 x i6]* %knn_set_V, i64 0, i64 %tmp_s
  store i6 -14, i6* %knn_set_V_addr_2, align 1
  br label %1

.preheader.preheader:                             ; preds = %.preheader.preheader.preheader, %.preheader
  %indvar_flatten = phi i15 [ %indvar_flatten_next, %.preheader ], [ 0, %.preheader.preheader.preheader ]
  %i1 = phi i11 [ %i1_cast4_mid2_v, %.preheader ], [ 0, %.preheader.preheader.preheader ]
  %j = phi i4 [ %j_1, %.preheader ], [ 0, %.preheader.preheader.preheader ]
  %exitcond_flatten = icmp eq i15 %indvar_flatten, -14768
  %indvar_flatten_next = add i15 %indvar_flatten, 1
  br i1 %exitcond_flatten, label %3, label %.preheader

.preheader:                                       ; preds = %.preheader.preheader
  call void (...)* @_ssdm_op_SpecLoopName([10 x i8]* @L1800_L10_str)
  %empty_19 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 18000, i64 18000, i64 18000)
  %exitcond = icmp eq i4 %j, -6
  %j_mid2 = select i1 %exitcond, i4 0, i4 %j
  %i_s = add i11 %i1, 1
  %i1_cast4_mid2_v = select i1 %exitcond, i11 %i_s, i11 %i1
  %i1_cast4_mid2 = zext i11 %i1_cast4_mid2_v to i15
  %j_cast3 = zext i4 %j_mid2 to i15
  %j_cast2 = zext i4 %j_mid2 to i7
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str18)
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @p_str8) nounwind
  %tmp_3 = mul i15 %j_cast3, 1800
  %tmp_4 = add i15 %i1_cast4_mid2, %tmp_3
  %tmp_5_cast = zext i15 %tmp_4 to i62
  %training_data_V2_sum = add i62 %tmp_5_cast, %tmp_49_cast
  %training_data_V2_sum_cast = zext i62 %training_data_V2_sum to i64
  %gmem_addr_2 = getelementptr i64* %gmem, i64 %training_data_V2_sum_cast
  %training_instance_V_req = call i1 @_ssdm_op_ReadReq.m_axi.i64P(i64* %gmem_addr_2, i32 1)
  %training_instance_V = call i64 @_ssdm_op_Read.m_axi.i64P(i64* %gmem_addr_2)
  %p_shl = call i6 @_ssdm_op_BitConcatenate.i6.i4.i2(i4 %j_mid2, i2 0)
  %p_shl_cast = zext i6 %p_shl to i7
  %tmp_6 = sub i7 %p_shl_cast, %j_cast2
  %tmp_13_cast = sext i7 %tmp_6 to i32
  %tmp_7 = zext i32 %tmp_13_cast to i64
  call fastcc void @update_knn(i64 %testing_instance_V, i64 %training_instance_V, [30 x i6]* %knn_set_V, i64 %tmp_7)
  %j_1 = add i4 %j_mid2, 1
  br label %.preheader.preheader

; <label>:3                                       ; preds = %.preheader.preheader
  %op2_V_assign = call fastcc i4 @knn_vote([30 x i6]* %knn_set_V)
  %tmp_56 = call i4 @_ssdm_op_PartSelect.i4.i8.i32.i32(i8 %k, i32 4, i32 7)
  %tmp1_cast = zext i4 %tmp_56 to i62
  %results_V6_sum = add i62 %tmp_47_cast, %tmp1_cast
  %results_V6_sum_cast = zext i62 %results_V6_sum to i64
  %gmem_addr_1 = getelementptr i64* %gmem, i64 %results_V6_sum_cast
  %gmem_load_req = call i1 @_ssdm_op_ReadReq.m_axi.i64P(i64* %gmem_addr_1, i32 1)
  %gmem_addr_1_read = call i64 @_ssdm_op_Read.m_axi.i64P(i64* %gmem_addr_1)
  %tmp_57 = trunc i8 %k to i4
  %tmp_58 = call i6 @_ssdm_op_BitConcatenate.i6.i4.i2(i4 %tmp_57, i2 0)
  %tmp_59 = zext i6 %tmp_58 to i64
  %tmp_60 = shl i64 15, %tmp_59
  %tmp_61 = xor i64 %tmp_60, -1
  %tmp_62 = and i64 %gmem_addr_1_read, %tmp_61
  %tmp_63 = zext i4 %op2_V_assign to i64
  %tmp_64 = shl i64 %tmp_63, %tmp_59
  %tmp_65 = or i64 %tmp_62, %tmp_64
  %gmem_addr_1_req = call i1 @_ssdm_op_WriteReq.m_axi.i64P(i64* %gmem_addr_1, i32 1)
  call void @_ssdm_op_Write.m_axi.i64P(i64* %gmem_addr_1, i64 %tmp_65, i8 -1)
  %gmem_addr_1_resp = call i1 @_ssdm_op_WriteResp.m_axi.i64P(i64* %gmem_addr_1)
  %empty_20 = call i32 (...)* @_ssdm_op_SpecRegionEnd([5 x i8]* @p_str6, i32 %tmp_1)
  br label %.preheader22

; <label>:4                                       ; preds = %.preheader22
  ret void
}

!opencl.kernels = !{!0, !7, !13, !17, !17, !17, !17, !17, !23, !29, !29, !17, !33, !17, !17, !17, !36, !36, !38, !38, !40, !42, !17, !17, !17, !36, !36, !44, !44, !17, !46, !49, !49, !17, !17, !51, !53, !51, !17, !55, !57, !57, !17, !59, !61, !63, !63, !49, !49, !67, !67, !17, !17, !69, !17}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!71}
!axi4.master.portmap = !{!78}
!axi4.slave.bundlemap = !{!79, !80, !81}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0, i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"digit", metadata !"digit", metadata !"bit6_t*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"test_inst", metadata !"train_inst", metadata !"min_distances"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !12, metadata !6}
!8 = metadata !{metadata !"kernel_arg_addr_space", i32 1}
!9 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!10 = metadata !{metadata !"kernel_arg_type", metadata !"bit6_t*"}
!11 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!12 = metadata !{metadata !"kernel_arg_name", metadata !"knn_set"}
!13 = metadata !{null, metadata !14, metadata !2, metadata !15, metadata !4, metadata !16, metadata !6}
!14 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1}
!15 = metadata !{metadata !"kernel_arg_type", metadata !"digit*", metadata !"digit*", metadata !"bit4_t*"}
!16 = metadata !{metadata !"kernel_arg_name", metadata !"training_data", metadata !"testing_data", metadata !"results"}
!17 = metadata !{null, metadata !18, metadata !19, metadata !20, metadata !21, metadata !22, metadata !6}
!18 = metadata !{metadata !"kernel_arg_addr_space"}
!19 = metadata !{metadata !"kernel_arg_access_qual"}
!20 = metadata !{metadata !"kernel_arg_type"}
!21 = metadata !{metadata !"kernel_arg_type_qual"}
!22 = metadata !{metadata !"kernel_arg_name"}
!23 = metadata !{null, metadata !24, metadata !25, metadata !26, metadata !27, metadata !28, metadata !6}
!24 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0}
!25 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!26 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<36, true> &", metadata !"int"}
!27 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!28 = metadata !{metadata !"kernel_arg_name", metadata !"op", metadata !"i_op"}
!29 = metadata !{null, metadata !30, metadata !9, metadata !31, metadata !11, metadata !32, metadata !6}
!30 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!31 = metadata !{metadata !"kernel_arg_type", metadata !"int"}
!32 = metadata !{metadata !"kernel_arg_name", metadata !"op"}
!33 = metadata !{null, metadata !24, metadata !25, metadata !34, metadata !27, metadata !35, metadata !6}
!34 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<36, true> &", metadata !"const ap_int_base<32, true> &"}
!35 = metadata !{metadata !"kernel_arg_name", metadata !"op", metadata !"op2"}
!36 = metadata !{null, metadata !30, metadata !9, metadata !37, metadata !11, metadata !32, metadata !6}
!37 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<32, true> &"}
!38 = metadata !{null, metadata !30, metadata !9, metadata !39, metadata !11, metadata !32, metadata !6}
!39 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<36, true> &"}
!40 = metadata !{null, metadata !24, metadata !25, metadata !41, metadata !27, metadata !28, metadata !6}
!41 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<4, false> &", metadata !"int"}
!42 = metadata !{null, metadata !24, metadata !25, metadata !43, metadata !27, metadata !35, metadata !6}
!43 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<4, false> &", metadata !"const ap_int_base<32, true> &"}
!44 = metadata !{null, metadata !30, metadata !9, metadata !45, metadata !11, metadata !32, metadata !6}
!45 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<4, false> &"}
!46 = metadata !{null, metadata !30, metadata !9, metadata !47, metadata !11, metadata !48, metadata !6}
!47 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<4> &"}
!48 = metadata !{metadata !"kernel_arg_name", metadata !"op2"}
!49 = metadata !{null, metadata !30, metadata !9, metadata !31, metadata !11, metadata !50, metadata !6}
!50 = metadata !{metadata !"kernel_arg_name", metadata !"val"}
!51 = metadata !{null, metadata !30, metadata !9, metadata !52, metadata !11, metadata !48, metadata !6}
!52 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<6, false> &"}
!53 = metadata !{null, metadata !30, metadata !9, metadata !54, metadata !11, metadata !48, metadata !6}
!54 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<6> &"}
!55 = metadata !{null, metadata !24, metadata !25, metadata !56, metadata !27, metadata !35, metadata !6}
!56 = metadata !{metadata !"kernel_arg_type", metadata !"ap_int_base<6, false> &", metadata !"_Bool"}
!57 = metadata !{null, metadata !30, metadata !9, metadata !58, metadata !11, metadata !32, metadata !6}
!58 = metadata !{metadata !"kernel_arg_type", metadata !"_Bool"}
!59 = metadata !{null, metadata !30, metadata !9, metadata !60, metadata !11, metadata !48, metadata !6}
!60 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<1, false> &"}
!61 = metadata !{null, metadata !30, metadata !9, metadata !31, metadata !11, metadata !62, metadata !6}
!62 = metadata !{metadata !"kernel_arg_name", metadata !"index"}
!63 = metadata !{null, metadata !64, metadata !25, metadata !65, metadata !27, metadata !66, metadata !6}
!64 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 0}
!65 = metadata !{metadata !"kernel_arg_type", metadata !"ap_int_base<64, false>*", metadata !"int"}
!66 = metadata !{metadata !"kernel_arg_name", metadata !"bv", metadata !"index"}
!67 = metadata !{null, metadata !30, metadata !9, metadata !68, metadata !11, metadata !32, metadata !6}
!68 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<64, false> &"}
!69 = metadata !{null, metadata !24, metadata !25, metadata !70, metadata !27, metadata !35, metadata !6}
!70 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<64, false> &", metadata !"const ap_int_base<64, false> &"}
!71 = metadata !{metadata !72, [1 x i32]* @llvm_global_ctors_0}
!72 = metadata !{metadata !73}
!73 = metadata !{i32 0, i32 31, metadata !74}
!74 = metadata !{metadata !75}
!75 = metadata !{metadata !"llvm.global_ctors.0", metadata !76, metadata !"", i32 0, i32 31}
!76 = metadata !{metadata !77}
!77 = metadata !{i32 0, i32 0, i32 1}
!78 = metadata !{metadata !"gmem", metadata !"training_data.V", metadata !"READONLY", metadata !"testing_data.V", metadata !"READONLY", metadata !"results.V", metadata !"READWRITE"}
!79 = metadata !{metadata !"training_data.V", metadata !"control"}
!80 = metadata !{metadata !"testing_data.V", metadata !"control"}
!81 = metadata !{metadata !"results.V", metadata !"control"}
!82 = metadata !{metadata !83, metadata !90, metadata !97, metadata !104, metadata !111, metadata !118, metadata !125, metadata !132, metadata !139, metadata !146, metadata !153, metadata !160, metadata !167, metadata !174, metadata !181, metadata !188}
!83 = metadata !{i32 0, i32 3, metadata !84}
!84 = metadata !{metadata !85, metadata !86, metadata !87}
!85 = metadata !{metadata !"training_data.V", metadata !76, metadata !"uint64", i32 0, i32 3}
!86 = metadata !{metadata !"testing_data.V", metadata !76, metadata !"uint64", i32 0, i32 3}
!87 = metadata !{metadata !"results.V", metadata !88, metadata !"uint4", i32 0, i32 3}
!88 = metadata !{metadata !89}
!89 = metadata !{i32 0, i32 0, i32 16}
!90 = metadata !{i32 4, i32 7, metadata !91}
!91 = metadata !{metadata !92, metadata !93, metadata !94}
!92 = metadata !{metadata !"training_data.V", metadata !76, metadata !"uint64", i32 4, i32 7}
!93 = metadata !{metadata !"testing_data.V", metadata !76, metadata !"uint64", i32 4, i32 7}
!94 = metadata !{metadata !"results.V", metadata !95, metadata !"uint4", i32 0, i32 3}
!95 = metadata !{metadata !96}
!96 = metadata !{i32 1, i32 0, i32 16}
!97 = metadata !{i32 8, i32 11, metadata !98}
!98 = metadata !{metadata !99, metadata !100, metadata !101}
!99 = metadata !{metadata !"training_data.V", metadata !76, metadata !"uint64", i32 8, i32 11}
!100 = metadata !{metadata !"testing_data.V", metadata !76, metadata !"uint64", i32 8, i32 11}
!101 = metadata !{metadata !"results.V", metadata !102, metadata !"uint4", i32 0, i32 3}
!102 = metadata !{metadata !103}
!103 = metadata !{i32 2, i32 0, i32 16}
!104 = metadata !{i32 12, i32 15, metadata !105}
!105 = metadata !{metadata !106, metadata !107, metadata !108}
!106 = metadata !{metadata !"training_data.V", metadata !76, metadata !"uint64", i32 12, i32 15}
!107 = metadata !{metadata !"testing_data.V", metadata !76, metadata !"uint64", i32 12, i32 15}
!108 = metadata !{metadata !"results.V", metadata !109, metadata !"uint4", i32 0, i32 3}
!109 = metadata !{metadata !110}
!110 = metadata !{i32 3, i32 0, i32 16}
!111 = metadata !{i32 16, i32 19, metadata !112}
!112 = metadata !{metadata !113, metadata !114, metadata !115}
!113 = metadata !{metadata !"training_data.V", metadata !76, metadata !"uint64", i32 16, i32 19}
!114 = metadata !{metadata !"testing_data.V", metadata !76, metadata !"uint64", i32 16, i32 19}
!115 = metadata !{metadata !"results.V", metadata !116, metadata !"uint4", i32 0, i32 3}
!116 = metadata !{metadata !117}
!117 = metadata !{i32 4, i32 0, i32 16}
!118 = metadata !{i32 20, i32 23, metadata !119}
!119 = metadata !{metadata !120, metadata !121, metadata !122}
!120 = metadata !{metadata !"training_data.V", metadata !76, metadata !"uint64", i32 20, i32 23}
!121 = metadata !{metadata !"testing_data.V", metadata !76, metadata !"uint64", i32 20, i32 23}
!122 = metadata !{metadata !"results.V", metadata !123, metadata !"uint4", i32 0, i32 3}
!123 = metadata !{metadata !124}
!124 = metadata !{i32 5, i32 0, i32 16}
!125 = metadata !{i32 24, i32 27, metadata !126}
!126 = metadata !{metadata !127, metadata !128, metadata !129}
!127 = metadata !{metadata !"training_data.V", metadata !76, metadata !"uint64", i32 24, i32 27}
!128 = metadata !{metadata !"testing_data.V", metadata !76, metadata !"uint64", i32 24, i32 27}
!129 = metadata !{metadata !"results.V", metadata !130, metadata !"uint4", i32 0, i32 3}
!130 = metadata !{metadata !131}
!131 = metadata !{i32 6, i32 0, i32 16}
!132 = metadata !{i32 28, i32 31, metadata !133}
!133 = metadata !{metadata !134, metadata !135, metadata !136}
!134 = metadata !{metadata !"training_data.V", metadata !76, metadata !"uint64", i32 28, i32 31}
!135 = metadata !{metadata !"testing_data.V", metadata !76, metadata !"uint64", i32 28, i32 31}
!136 = metadata !{metadata !"results.V", metadata !137, metadata !"uint4", i32 0, i32 3}
!137 = metadata !{metadata !138}
!138 = metadata !{i32 7, i32 0, i32 16}
!139 = metadata !{i32 32, i32 35, metadata !140}
!140 = metadata !{metadata !141, metadata !142, metadata !143}
!141 = metadata !{metadata !"training_data.V", metadata !76, metadata !"uint64", i32 32, i32 35}
!142 = metadata !{metadata !"testing_data.V", metadata !76, metadata !"uint64", i32 32, i32 35}
!143 = metadata !{metadata !"results.V", metadata !144, metadata !"uint4", i32 0, i32 3}
!144 = metadata !{metadata !145}
!145 = metadata !{i32 8, i32 0, i32 16}
!146 = metadata !{i32 36, i32 39, metadata !147}
!147 = metadata !{metadata !148, metadata !149, metadata !150}
!148 = metadata !{metadata !"training_data.V", metadata !76, metadata !"uint64", i32 36, i32 39}
!149 = metadata !{metadata !"testing_data.V", metadata !76, metadata !"uint64", i32 36, i32 39}
!150 = metadata !{metadata !"results.V", metadata !151, metadata !"uint4", i32 0, i32 3}
!151 = metadata !{metadata !152}
!152 = metadata !{i32 9, i32 0, i32 16}
!153 = metadata !{i32 40, i32 43, metadata !154}
!154 = metadata !{metadata !155, metadata !156, metadata !157}
!155 = metadata !{metadata !"training_data.V", metadata !76, metadata !"uint64", i32 40, i32 43}
!156 = metadata !{metadata !"testing_data.V", metadata !76, metadata !"uint64", i32 40, i32 43}
!157 = metadata !{metadata !"results.V", metadata !158, metadata !"uint4", i32 0, i32 3}
!158 = metadata !{metadata !159}
!159 = metadata !{i32 10, i32 0, i32 16}
!160 = metadata !{i32 44, i32 47, metadata !161}
!161 = metadata !{metadata !162, metadata !163, metadata !164}
!162 = metadata !{metadata !"training_data.V", metadata !76, metadata !"uint64", i32 44, i32 47}
!163 = metadata !{metadata !"testing_data.V", metadata !76, metadata !"uint64", i32 44, i32 47}
!164 = metadata !{metadata !"results.V", metadata !165, metadata !"uint4", i32 0, i32 3}
!165 = metadata !{metadata !166}
!166 = metadata !{i32 11, i32 0, i32 16}
!167 = metadata !{i32 48, i32 51, metadata !168}
!168 = metadata !{metadata !169, metadata !170, metadata !171}
!169 = metadata !{metadata !"training_data.V", metadata !76, metadata !"uint64", i32 48, i32 51}
!170 = metadata !{metadata !"testing_data.V", metadata !76, metadata !"uint64", i32 48, i32 51}
!171 = metadata !{metadata !"results.V", metadata !172, metadata !"uint4", i32 0, i32 3}
!172 = metadata !{metadata !173}
!173 = metadata !{i32 12, i32 0, i32 16}
!174 = metadata !{i32 52, i32 55, metadata !175}
!175 = metadata !{metadata !176, metadata !177, metadata !178}
!176 = metadata !{metadata !"training_data.V", metadata !76, metadata !"uint64", i32 52, i32 55}
!177 = metadata !{metadata !"testing_data.V", metadata !76, metadata !"uint64", i32 52, i32 55}
!178 = metadata !{metadata !"results.V", metadata !179, metadata !"uint4", i32 0, i32 3}
!179 = metadata !{metadata !180}
!180 = metadata !{i32 13, i32 0, i32 16}
!181 = metadata !{i32 56, i32 59, metadata !182}
!182 = metadata !{metadata !183, metadata !184, metadata !185}
!183 = metadata !{metadata !"training_data.V", metadata !76, metadata !"uint64", i32 56, i32 59}
!184 = metadata !{metadata !"testing_data.V", metadata !76, metadata !"uint64", i32 56, i32 59}
!185 = metadata !{metadata !"results.V", metadata !186, metadata !"uint4", i32 0, i32 3}
!186 = metadata !{metadata !187}
!187 = metadata !{i32 14, i32 0, i32 16}
!188 = metadata !{i32 60, i32 63, metadata !189}
!189 = metadata !{metadata !190, metadata !191, metadata !192}
!190 = metadata !{metadata !"training_data.V", metadata !76, metadata !"uint64", i32 60, i32 63}
!191 = metadata !{metadata !"testing_data.V", metadata !76, metadata !"uint64", i32 60, i32 63}
!192 = metadata !{metadata !"results.V", metadata !193, metadata !"uint4", i32 0, i32 3}
!193 = metadata !{metadata !194}
!194 = metadata !{i32 15, i32 0, i32 16}
