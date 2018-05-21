#include "cordic.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void cordic::thread_X_1_1_fu_538_p3() {
    X_1_1_fu_538_p3 = (!ap_reg_pp0_iter21_tmp_15_reg_1137.read()[0].is_01())? sc_lv<64>(): ((ap_reg_pp0_iter21_tmp_15_reg_1137.read()[0].to_bool())? grp_fu_221_p2.read(): grp_fu_221_p2.read());
}

void cordic::thread_X_1_2_fu_598_p3() {
    X_1_2_fu_598_p3 = (!ap_reg_pp0_iter24_tmp_21_reg_1179.read()[0].is_01())? sc_lv<64>(): ((ap_reg_pp0_iter24_tmp_21_reg_1179.read()[0].to_bool())? grp_fu_221_p2.read(): grp_fu_221_p2.read());
}

void cordic::thread_X_1_3_fu_770_p3() {
    X_1_3_fu_770_p3 = (!ap_reg_pp0_iter32_tmp_27_reg_1214.read()[0].is_01())? sc_lv<64>(): ((ap_reg_pp0_iter32_tmp_27_reg_1214.read()[0].to_bool())? grp_fu_231_p2.read(): grp_fu_231_p2.read());
}

void cordic::thread_X_1_4_fu_830_p3() {
    X_1_4_fu_830_p3 = (!ap_reg_pp0_iter36_tmp_33_reg_1250.read()[0].is_01())? sc_lv<64>(): ((ap_reg_pp0_iter36_tmp_33_reg_1250.read()[0].to_bool())? grp_fu_225_p2.read(): grp_fu_225_p2.read());
}

void cordic::thread_X_1_5_fu_955_p3() {
    X_1_5_fu_955_p3 = (!ap_reg_pp0_iter44_tmp_39_reg_1287.read()[0].is_01())? sc_lv<64>(): ((ap_reg_pp0_iter44_tmp_39_reg_1287.read()[0].to_bool())? grp_fu_235_p2.read(): grp_fu_235_p2.read());
}

void cordic::thread_X_1_6_fu_962_p3() {
    X_1_6_fu_962_p3 = (!ap_reg_pp0_iter47_tmp_45_reg_1323.read()[0].is_01())? sc_lv<64>(): ((ap_reg_pp0_iter47_tmp_45_reg_1323.read()[0].to_bool())? grp_fu_239_p2.read(): grp_fu_239_p2.read());
}

void cordic::thread_X_1_7_fu_983_p3() {
    X_1_7_fu_983_p3 = (!ap_reg_pp0_iter55_tmp_51_reg_1364.read()[0].is_01())? sc_lv<64>(): ((ap_reg_pp0_iter55_tmp_51_reg_1364.read()[0].to_bool())? grp_fu_243_p2.read(): grp_fu_243_p2.read());
}

void cordic::thread_X_1_9_fu_1033_p3() {
    X_1_9_fu_1033_p3 = (!ap_reg_pp0_iter67_tmp_63_reg_1451.read()[0].is_01())? sc_lv<64>(): ((ap_reg_pp0_iter67_tmp_63_reg_1451.read()[0].to_bool())? T_9_reg_1586.read(): grp_fu_239_p2.read());
}

void cordic::thread_Y_1_1_v_fu_477_p3() {
    Y_1_1_v_fu_477_p3 = (!tmp_15_reg_1137.read()[0].is_01())? sc_lv<64>(): ((tmp_15_reg_1137.read()[0].to_bool())? ap_const_lv64_3FD36E9DB5086BCB: ap_const_lv64_BFD36E9DB5086BCB);
}

void cordic::thread_Y_1_2_fu_658_p3() {
    Y_1_2_fu_658_p3 = (!ap_reg_pp0_iter27_tmp_21_reg_1179.read()[0].is_01())? sc_lv<64>(): ((ap_reg_pp0_iter27_tmp_21_reg_1179.read()[0].to_bool())? grp_fu_231_p2.read(): grp_fu_231_p2.read());
}

void cordic::thread_Y_1_3_fu_718_p3() {
    Y_1_3_fu_718_p3 = (!ap_reg_pp0_iter30_tmp_27_reg_1214.read()[0].is_01())? sc_lv<64>(): ((ap_reg_pp0_iter30_tmp_27_reg_1214.read()[0].to_bool())? grp_fu_225_p2.read(): grp_fu_225_p2.read());
}

void cordic::thread_Y_1_4_fu_845_p3() {
    Y_1_4_fu_845_p3 = (!ap_reg_pp0_iter39_tmp_33_reg_1250.read()[0].is_01())? sc_lv<64>(): ((ap_reg_pp0_iter39_tmp_33_reg_1250.read()[0].to_bool())? grp_fu_231_p2.read(): grp_fu_231_p2.read());
}

void cordic::thread_Y_1_5_fu_905_p3() {
    Y_1_5_fu_905_p3 = (!ap_reg_pp0_iter42_tmp_39_reg_1287.read()[0].is_01())? sc_lv<64>(): ((ap_reg_pp0_iter42_tmp_39_reg_1287.read()[0].to_bool())? grp_fu_231_p2.read(): grp_fu_231_p2.read());
}

void cordic::thread_Y_1_6_fu_969_p3() {
    Y_1_6_fu_969_p3 = (!ap_reg_pp0_iter49_tmp_45_reg_1323.read()[0].is_01())? sc_lv<64>(): ((ap_reg_pp0_iter49_tmp_45_reg_1323.read()[0].to_bool())? grp_fu_235_p2.read(): grp_fu_235_p2.read());
}

void cordic::thread_Y_1_7_fu_976_p3() {
    Y_1_7_fu_976_p3 = (!ap_reg_pp0_iter52_tmp_51_reg_1364.read()[0].is_01())? sc_lv<64>(): ((ap_reg_pp0_iter52_tmp_51_reg_1364.read()[0].to_bool())? grp_fu_235_p2.read(): grp_fu_235_p2.read());
}

void cordic::thread_Y_1_9_fu_990_p3() {
    Y_1_9_fu_990_p3 = (!ap_reg_pp0_iter64_tmp_63_reg_1451.read()[0].is_01())? sc_lv<64>(): ((ap_reg_pp0_iter64_tmp_63_reg_1451.read()[0].to_bool())? grp_fu_239_p2.read(): grp_fu_239_p2.read());
}

void cordic::thread_Y_1_fu_416_p3() {
    Y_1_fu_416_p3 = (!tmp_7_fu_403_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_7_fu_403_p2.read()[0].to_bool())? ap_const_lv64_3FE36E9DB5086BCB: ap_const_lv64_BFE36E9DB5086BCB);
}

void cordic::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void cordic::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[2];
}

void cordic::thread_ap_CS_fsm_pp0_stage2() {
    ap_CS_fsm_pp0_stage2 = ap_CS_fsm.read()[3];
}

void cordic::thread_ap_CS_fsm_pp0_stage3() {
    ap_CS_fsm_pp0_stage3 = ap_CS_fsm.read()[4];
}

void cordic::thread_ap_CS_fsm_pp0_stage4() {
    ap_CS_fsm_pp0_stage4 = ap_CS_fsm.read()[5];
}

void cordic::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void cordic::thread_ap_CS_fsm_state346() {
    ap_CS_fsm_state346 = ap_CS_fsm.read()[6];
}

void cordic::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_pp0_stage0_00001() {
    ap_block_pp0_stage0_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_pp0_stage0_01001() {
    ap_block_pp0_stage0_01001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state337_io.read()));
}

void cordic::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state337_io.read()));
}

void cordic::thread_ap_block_pp0_stage1() {
    ap_block_pp0_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_pp0_stage1_00001() {
    ap_block_pp0_stage1_00001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter68.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter68_exitcond1_reg_1064.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()));
}

void cordic::thread_ap_block_pp0_stage1_01001() {
    ap_block_pp0_stage1_01001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter68.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter68_exitcond1_reg_1064.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()));
}

void cordic::thread_ap_block_pp0_stage1_11001() {
    ap_block_pp0_stage1_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state338_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter68.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter68_exitcond1_reg_1064.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read())));
}

void cordic::thread_ap_block_pp0_stage1_subdone() {
    ap_block_pp0_stage1_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state338_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter68.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter68_exitcond1_reg_1064.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read())));
}

void cordic::thread_ap_block_pp0_stage2() {
    ap_block_pp0_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_pp0_stage2_00001() {
    ap_block_pp0_stage2_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_pp0_stage2_01001() {
    ap_block_pp0_stage2_01001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_pp0_stage2_11001() {
    ap_block_pp0_stage2_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state339_io.read()));
}

void cordic::thread_ap_block_pp0_stage2_subdone() {
    ap_block_pp0_stage2_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state339_io.read()));
}

void cordic::thread_ap_block_pp0_stage3() {
    ap_block_pp0_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_pp0_stage3_00001() {
    ap_block_pp0_stage3_00001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter68.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter68_exitcond1_reg_1064.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()));
}

void cordic::thread_ap_block_pp0_stage3_01001() {
    ap_block_pp0_stage3_01001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter68.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter68_exitcond1_reg_1064.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()));
}

void cordic::thread_ap_block_pp0_stage3_11001() {
    ap_block_pp0_stage3_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter68.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter68_exitcond1_reg_1064.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter66.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state335_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state340_io.read())));
}

void cordic::thread_ap_block_pp0_stage3_subdone() {
    ap_block_pp0_stage3_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter68.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter68_exitcond1_reg_1064.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter66.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state335_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state340_io.read())));
}

void cordic::thread_ap_block_pp0_stage4() {
    ap_block_pp0_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_pp0_stage4_00001() {
    ap_block_pp0_stage4_00001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter67_exitcond1_reg_1064.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()));
}

void cordic::thread_ap_block_pp0_stage4_01001() {
    ap_block_pp0_stage4_01001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter67_exitcond1_reg_1064.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()));
}

void cordic::thread_ap_block_pp0_stage4_11001() {
    ap_block_pp0_stage4_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter66.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state336_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter67_exitcond1_reg_1064.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read())));
}

void cordic::thread_ap_block_pp0_stage4_subdone() {
    ap_block_pp0_stage4_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter66.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state336_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter67_exitcond1_reg_1064.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read())));
}

void cordic::thread_ap_block_state100_pp0_stage3_iter19() {
    ap_block_state100_pp0_stage3_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state101_pp0_stage4_iter19() {
    ap_block_state101_pp0_stage4_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state102_pp0_stage0_iter20() {
    ap_block_state102_pp0_stage0_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state103_pp0_stage1_iter20() {
    ap_block_state103_pp0_stage1_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state104_pp0_stage2_iter20() {
    ap_block_state104_pp0_stage2_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state105_pp0_stage3_iter20() {
    ap_block_state105_pp0_stage3_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state106_pp0_stage4_iter20() {
    ap_block_state106_pp0_stage4_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state107_pp0_stage0_iter21() {
    ap_block_state107_pp0_stage0_iter21 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state108_pp0_stage1_iter21() {
    ap_block_state108_pp0_stage1_iter21 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state109_pp0_stage2_iter21() {
    ap_block_state109_pp0_stage2_iter21 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state10_pp0_stage3_iter1() {
    ap_block_state10_pp0_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state110_pp0_stage3_iter21() {
    ap_block_state110_pp0_stage3_iter21 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state111_pp0_stage4_iter21() {
    ap_block_state111_pp0_stage4_iter21 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state112_pp0_stage0_iter22() {
    ap_block_state112_pp0_stage0_iter22 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state113_pp0_stage1_iter22() {
    ap_block_state113_pp0_stage1_iter22 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state114_pp0_stage2_iter22() {
    ap_block_state114_pp0_stage2_iter22 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state115_pp0_stage3_iter22() {
    ap_block_state115_pp0_stage3_iter22 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state116_pp0_stage4_iter22() {
    ap_block_state116_pp0_stage4_iter22 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state117_pp0_stage0_iter23() {
    ap_block_state117_pp0_stage0_iter23 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state118_pp0_stage1_iter23() {
    ap_block_state118_pp0_stage1_iter23 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state119_pp0_stage2_iter23() {
    ap_block_state119_pp0_stage2_iter23 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state11_pp0_stage4_iter1() {
    ap_block_state11_pp0_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state120_pp0_stage3_iter23() {
    ap_block_state120_pp0_stage3_iter23 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state121_pp0_stage4_iter23() {
    ap_block_state121_pp0_stage4_iter23 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state122_pp0_stage0_iter24() {
    ap_block_state122_pp0_stage0_iter24 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state123_pp0_stage1_iter24() {
    ap_block_state123_pp0_stage1_iter24 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state124_pp0_stage2_iter24() {
    ap_block_state124_pp0_stage2_iter24 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state125_pp0_stage3_iter24() {
    ap_block_state125_pp0_stage3_iter24 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state126_pp0_stage4_iter24() {
    ap_block_state126_pp0_stage4_iter24 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state127_pp0_stage0_iter25() {
    ap_block_state127_pp0_stage0_iter25 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state128_pp0_stage1_iter25() {
    ap_block_state128_pp0_stage1_iter25 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state129_pp0_stage2_iter25() {
    ap_block_state129_pp0_stage2_iter25 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state12_pp0_stage0_iter2() {
    ap_block_state12_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state130_pp0_stage3_iter25() {
    ap_block_state130_pp0_stage3_iter25 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state131_pp0_stage4_iter25() {
    ap_block_state131_pp0_stage4_iter25 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state132_pp0_stage0_iter26() {
    ap_block_state132_pp0_stage0_iter26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state133_pp0_stage1_iter26() {
    ap_block_state133_pp0_stage1_iter26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state134_pp0_stage2_iter26() {
    ap_block_state134_pp0_stage2_iter26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state135_pp0_stage3_iter26() {
    ap_block_state135_pp0_stage3_iter26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state136_pp0_stage4_iter26() {
    ap_block_state136_pp0_stage4_iter26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state137_pp0_stage0_iter27() {
    ap_block_state137_pp0_stage0_iter27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state138_pp0_stage1_iter27() {
    ap_block_state138_pp0_stage1_iter27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state139_pp0_stage2_iter27() {
    ap_block_state139_pp0_stage2_iter27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state13_pp0_stage1_iter2() {
    ap_block_state13_pp0_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state140_pp0_stage3_iter27() {
    ap_block_state140_pp0_stage3_iter27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state141_pp0_stage4_iter27() {
    ap_block_state141_pp0_stage4_iter27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state142_pp0_stage0_iter28() {
    ap_block_state142_pp0_stage0_iter28 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state143_pp0_stage1_iter28() {
    ap_block_state143_pp0_stage1_iter28 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state144_pp0_stage2_iter28() {
    ap_block_state144_pp0_stage2_iter28 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state145_pp0_stage3_iter28() {
    ap_block_state145_pp0_stage3_iter28 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state146_pp0_stage4_iter28() {
    ap_block_state146_pp0_stage4_iter28 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state147_pp0_stage0_iter29() {
    ap_block_state147_pp0_stage0_iter29 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state148_pp0_stage1_iter29() {
    ap_block_state148_pp0_stage1_iter29 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state149_pp0_stage2_iter29() {
    ap_block_state149_pp0_stage2_iter29 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state14_pp0_stage2_iter2() {
    ap_block_state14_pp0_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state150_pp0_stage3_iter29() {
    ap_block_state150_pp0_stage3_iter29 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state151_pp0_stage4_iter29() {
    ap_block_state151_pp0_stage4_iter29 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state152_pp0_stage0_iter30() {
    ap_block_state152_pp0_stage0_iter30 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state153_pp0_stage1_iter30() {
    ap_block_state153_pp0_stage1_iter30 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state154_pp0_stage2_iter30() {
    ap_block_state154_pp0_stage2_iter30 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state155_pp0_stage3_iter30() {
    ap_block_state155_pp0_stage3_iter30 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state156_pp0_stage4_iter30() {
    ap_block_state156_pp0_stage4_iter30 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state157_pp0_stage0_iter31() {
    ap_block_state157_pp0_stage0_iter31 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state158_pp0_stage1_iter31() {
    ap_block_state158_pp0_stage1_iter31 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state159_pp0_stage2_iter31() {
    ap_block_state159_pp0_stage2_iter31 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state15_pp0_stage3_iter2() {
    ap_block_state15_pp0_stage3_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state160_pp0_stage3_iter31() {
    ap_block_state160_pp0_stage3_iter31 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state161_pp0_stage4_iter31() {
    ap_block_state161_pp0_stage4_iter31 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state162_pp0_stage0_iter32() {
    ap_block_state162_pp0_stage0_iter32 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state163_pp0_stage1_iter32() {
    ap_block_state163_pp0_stage1_iter32 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state164_pp0_stage2_iter32() {
    ap_block_state164_pp0_stage2_iter32 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state165_pp0_stage3_iter32() {
    ap_block_state165_pp0_stage3_iter32 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state166_pp0_stage4_iter32() {
    ap_block_state166_pp0_stage4_iter32 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state167_pp0_stage0_iter33() {
    ap_block_state167_pp0_stage0_iter33 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state168_pp0_stage1_iter33() {
    ap_block_state168_pp0_stage1_iter33 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state169_pp0_stage2_iter33() {
    ap_block_state169_pp0_stage2_iter33 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state16_pp0_stage4_iter2() {
    ap_block_state16_pp0_stage4_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state170_pp0_stage3_iter33() {
    ap_block_state170_pp0_stage3_iter33 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state171_pp0_stage4_iter33() {
    ap_block_state171_pp0_stage4_iter33 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state172_pp0_stage0_iter34() {
    ap_block_state172_pp0_stage0_iter34 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state173_pp0_stage1_iter34() {
    ap_block_state173_pp0_stage1_iter34 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state174_pp0_stage2_iter34() {
    ap_block_state174_pp0_stage2_iter34 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state175_pp0_stage3_iter34() {
    ap_block_state175_pp0_stage3_iter34 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state176_pp0_stage4_iter34() {
    ap_block_state176_pp0_stage4_iter34 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state177_pp0_stage0_iter35() {
    ap_block_state177_pp0_stage0_iter35 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state178_pp0_stage1_iter35() {
    ap_block_state178_pp0_stage1_iter35 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state179_pp0_stage2_iter35() {
    ap_block_state179_pp0_stage2_iter35 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state17_pp0_stage0_iter3() {
    ap_block_state17_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state180_pp0_stage3_iter35() {
    ap_block_state180_pp0_stage3_iter35 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state181_pp0_stage4_iter35() {
    ap_block_state181_pp0_stage4_iter35 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state182_pp0_stage0_iter36() {
    ap_block_state182_pp0_stage0_iter36 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state183_pp0_stage1_iter36() {
    ap_block_state183_pp0_stage1_iter36 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state184_pp0_stage2_iter36() {
    ap_block_state184_pp0_stage2_iter36 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state185_pp0_stage3_iter36() {
    ap_block_state185_pp0_stage3_iter36 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state186_pp0_stage4_iter36() {
    ap_block_state186_pp0_stage4_iter36 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state187_pp0_stage0_iter37() {
    ap_block_state187_pp0_stage0_iter37 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state188_pp0_stage1_iter37() {
    ap_block_state188_pp0_stage1_iter37 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state189_pp0_stage2_iter37() {
    ap_block_state189_pp0_stage2_iter37 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state18_pp0_stage1_iter3() {
    ap_block_state18_pp0_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state190_pp0_stage3_iter37() {
    ap_block_state190_pp0_stage3_iter37 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state191_pp0_stage4_iter37() {
    ap_block_state191_pp0_stage4_iter37 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state192_pp0_stage0_iter38() {
    ap_block_state192_pp0_stage0_iter38 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state193_pp0_stage1_iter38() {
    ap_block_state193_pp0_stage1_iter38 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state194_pp0_stage2_iter38() {
    ap_block_state194_pp0_stage2_iter38 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state195_pp0_stage3_iter38() {
    ap_block_state195_pp0_stage3_iter38 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state196_pp0_stage4_iter38() {
    ap_block_state196_pp0_stage4_iter38 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state197_pp0_stage0_iter39() {
    ap_block_state197_pp0_stage0_iter39 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state198_pp0_stage1_iter39() {
    ap_block_state198_pp0_stage1_iter39 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state199_pp0_stage2_iter39() {
    ap_block_state199_pp0_stage2_iter39 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state19_pp0_stage2_iter3() {
    ap_block_state19_pp0_stage2_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state200_pp0_stage3_iter39() {
    ap_block_state200_pp0_stage3_iter39 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state201_pp0_stage4_iter39() {
    ap_block_state201_pp0_stage4_iter39 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state202_pp0_stage0_iter40() {
    ap_block_state202_pp0_stage0_iter40 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state203_pp0_stage1_iter40() {
    ap_block_state203_pp0_stage1_iter40 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state204_pp0_stage2_iter40() {
    ap_block_state204_pp0_stage2_iter40 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state205_pp0_stage3_iter40() {
    ap_block_state205_pp0_stage3_iter40 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state206_pp0_stage4_iter40() {
    ap_block_state206_pp0_stage4_iter40 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state207_pp0_stage0_iter41() {
    ap_block_state207_pp0_stage0_iter41 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state208_pp0_stage1_iter41() {
    ap_block_state208_pp0_stage1_iter41 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state209_pp0_stage2_iter41() {
    ap_block_state209_pp0_stage2_iter41 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state20_pp0_stage3_iter3() {
    ap_block_state20_pp0_stage3_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state210_pp0_stage3_iter41() {
    ap_block_state210_pp0_stage3_iter41 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state211_pp0_stage4_iter41() {
    ap_block_state211_pp0_stage4_iter41 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state212_pp0_stage0_iter42() {
    ap_block_state212_pp0_stage0_iter42 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state213_pp0_stage1_iter42() {
    ap_block_state213_pp0_stage1_iter42 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state214_pp0_stage2_iter42() {
    ap_block_state214_pp0_stage2_iter42 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state215_pp0_stage3_iter42() {
    ap_block_state215_pp0_stage3_iter42 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state216_pp0_stage4_iter42() {
    ap_block_state216_pp0_stage4_iter42 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state217_pp0_stage0_iter43() {
    ap_block_state217_pp0_stage0_iter43 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state218_pp0_stage1_iter43() {
    ap_block_state218_pp0_stage1_iter43 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state219_pp0_stage2_iter43() {
    ap_block_state219_pp0_stage2_iter43 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state21_pp0_stage4_iter3() {
    ap_block_state21_pp0_stage4_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state220_pp0_stage3_iter43() {
    ap_block_state220_pp0_stage3_iter43 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state221_pp0_stage4_iter43() {
    ap_block_state221_pp0_stage4_iter43 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state222_pp0_stage0_iter44() {
    ap_block_state222_pp0_stage0_iter44 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state223_pp0_stage1_iter44() {
    ap_block_state223_pp0_stage1_iter44 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state224_pp0_stage2_iter44() {
    ap_block_state224_pp0_stage2_iter44 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state225_pp0_stage3_iter44() {
    ap_block_state225_pp0_stage3_iter44 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state226_pp0_stage4_iter44() {
    ap_block_state226_pp0_stage4_iter44 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state227_pp0_stage0_iter45() {
    ap_block_state227_pp0_stage0_iter45 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state228_pp0_stage1_iter45() {
    ap_block_state228_pp0_stage1_iter45 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state229_pp0_stage2_iter45() {
    ap_block_state229_pp0_stage2_iter45 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state22_pp0_stage0_iter4() {
    ap_block_state22_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state230_pp0_stage3_iter45() {
    ap_block_state230_pp0_stage3_iter45 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state231_pp0_stage4_iter45() {
    ap_block_state231_pp0_stage4_iter45 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state232_pp0_stage0_iter46() {
    ap_block_state232_pp0_stage0_iter46 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state233_pp0_stage1_iter46() {
    ap_block_state233_pp0_stage1_iter46 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state234_pp0_stage2_iter46() {
    ap_block_state234_pp0_stage2_iter46 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state235_pp0_stage3_iter46() {
    ap_block_state235_pp0_stage3_iter46 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state236_pp0_stage4_iter46() {
    ap_block_state236_pp0_stage4_iter46 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state237_pp0_stage0_iter47() {
    ap_block_state237_pp0_stage0_iter47 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state238_pp0_stage1_iter47() {
    ap_block_state238_pp0_stage1_iter47 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state239_pp0_stage2_iter47() {
    ap_block_state239_pp0_stage2_iter47 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state23_pp0_stage1_iter4() {
    ap_block_state23_pp0_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state240_pp0_stage3_iter47() {
    ap_block_state240_pp0_stage3_iter47 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state241_pp0_stage4_iter47() {
    ap_block_state241_pp0_stage4_iter47 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state242_pp0_stage0_iter48() {
    ap_block_state242_pp0_stage0_iter48 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state243_pp0_stage1_iter48() {
    ap_block_state243_pp0_stage1_iter48 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state244_pp0_stage2_iter48() {
    ap_block_state244_pp0_stage2_iter48 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state245_pp0_stage3_iter48() {
    ap_block_state245_pp0_stage3_iter48 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state246_pp0_stage4_iter48() {
    ap_block_state246_pp0_stage4_iter48 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state247_pp0_stage0_iter49() {
    ap_block_state247_pp0_stage0_iter49 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state248_pp0_stage1_iter49() {
    ap_block_state248_pp0_stage1_iter49 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state249_pp0_stage2_iter49() {
    ap_block_state249_pp0_stage2_iter49 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state24_pp0_stage2_iter4() {
    ap_block_state24_pp0_stage2_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state250_pp0_stage3_iter49() {
    ap_block_state250_pp0_stage3_iter49 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state251_pp0_stage4_iter49() {
    ap_block_state251_pp0_stage4_iter49 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state252_pp0_stage0_iter50() {
    ap_block_state252_pp0_stage0_iter50 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state253_pp0_stage1_iter50() {
    ap_block_state253_pp0_stage1_iter50 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state254_pp0_stage2_iter50() {
    ap_block_state254_pp0_stage2_iter50 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state255_pp0_stage3_iter50() {
    ap_block_state255_pp0_stage3_iter50 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state256_pp0_stage4_iter50() {
    ap_block_state256_pp0_stage4_iter50 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state257_pp0_stage0_iter51() {
    ap_block_state257_pp0_stage0_iter51 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state258_pp0_stage1_iter51() {
    ap_block_state258_pp0_stage1_iter51 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state259_pp0_stage2_iter51() {
    ap_block_state259_pp0_stage2_iter51 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state25_pp0_stage3_iter4() {
    ap_block_state25_pp0_stage3_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state260_pp0_stage3_iter51() {
    ap_block_state260_pp0_stage3_iter51 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state261_pp0_stage4_iter51() {
    ap_block_state261_pp0_stage4_iter51 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state262_pp0_stage0_iter52() {
    ap_block_state262_pp0_stage0_iter52 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state263_pp0_stage1_iter52() {
    ap_block_state263_pp0_stage1_iter52 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state264_pp0_stage2_iter52() {
    ap_block_state264_pp0_stage2_iter52 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state265_pp0_stage3_iter52() {
    ap_block_state265_pp0_stage3_iter52 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state266_pp0_stage4_iter52() {
    ap_block_state266_pp0_stage4_iter52 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state267_pp0_stage0_iter53() {
    ap_block_state267_pp0_stage0_iter53 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state268_pp0_stage1_iter53() {
    ap_block_state268_pp0_stage1_iter53 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state269_pp0_stage2_iter53() {
    ap_block_state269_pp0_stage2_iter53 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state26_pp0_stage4_iter4() {
    ap_block_state26_pp0_stage4_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state270_pp0_stage3_iter53() {
    ap_block_state270_pp0_stage3_iter53 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state271_pp0_stage4_iter53() {
    ap_block_state271_pp0_stage4_iter53 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state272_pp0_stage0_iter54() {
    ap_block_state272_pp0_stage0_iter54 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state273_pp0_stage1_iter54() {
    ap_block_state273_pp0_stage1_iter54 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state274_pp0_stage2_iter54() {
    ap_block_state274_pp0_stage2_iter54 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state275_pp0_stage3_iter54() {
    ap_block_state275_pp0_stage3_iter54 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state276_pp0_stage4_iter54() {
    ap_block_state276_pp0_stage4_iter54 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state277_pp0_stage0_iter55() {
    ap_block_state277_pp0_stage0_iter55 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state278_pp0_stage1_iter55() {
    ap_block_state278_pp0_stage1_iter55 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state279_pp0_stage2_iter55() {
    ap_block_state279_pp0_stage2_iter55 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state27_pp0_stage0_iter5() {
    ap_block_state27_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state280_pp0_stage3_iter55() {
    ap_block_state280_pp0_stage3_iter55 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state281_pp0_stage4_iter55() {
    ap_block_state281_pp0_stage4_iter55 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state282_pp0_stage0_iter56() {
    ap_block_state282_pp0_stage0_iter56 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state283_pp0_stage1_iter56() {
    ap_block_state283_pp0_stage1_iter56 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state284_pp0_stage2_iter56() {
    ap_block_state284_pp0_stage2_iter56 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state285_pp0_stage3_iter56() {
    ap_block_state285_pp0_stage3_iter56 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state286_pp0_stage4_iter56() {
    ap_block_state286_pp0_stage4_iter56 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state287_pp0_stage0_iter57() {
    ap_block_state287_pp0_stage0_iter57 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state288_pp0_stage1_iter57() {
    ap_block_state288_pp0_stage1_iter57 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state289_pp0_stage2_iter57() {
    ap_block_state289_pp0_stage2_iter57 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state28_pp0_stage1_iter5() {
    ap_block_state28_pp0_stage1_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state290_pp0_stage3_iter57() {
    ap_block_state290_pp0_stage3_iter57 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state291_pp0_stage4_iter57() {
    ap_block_state291_pp0_stage4_iter57 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state292_pp0_stage0_iter58() {
    ap_block_state292_pp0_stage0_iter58 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state293_pp0_stage1_iter58() {
    ap_block_state293_pp0_stage1_iter58 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state294_pp0_stage2_iter58() {
    ap_block_state294_pp0_stage2_iter58 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state295_pp0_stage3_iter58() {
    ap_block_state295_pp0_stage3_iter58 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state296_pp0_stage4_iter58() {
    ap_block_state296_pp0_stage4_iter58 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state297_pp0_stage0_iter59() {
    ap_block_state297_pp0_stage0_iter59 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state298_pp0_stage1_iter59() {
    ap_block_state298_pp0_stage1_iter59 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state299_pp0_stage2_iter59() {
    ap_block_state299_pp0_stage2_iter59 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state29_pp0_stage2_iter5() {
    ap_block_state29_pp0_stage2_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state300_pp0_stage3_iter59() {
    ap_block_state300_pp0_stage3_iter59 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state301_pp0_stage4_iter59() {
    ap_block_state301_pp0_stage4_iter59 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state302_pp0_stage0_iter60() {
    ap_block_state302_pp0_stage0_iter60 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state303_pp0_stage1_iter60() {
    ap_block_state303_pp0_stage1_iter60 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state304_pp0_stage2_iter60() {
    ap_block_state304_pp0_stage2_iter60 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state305_pp0_stage3_iter60() {
    ap_block_state305_pp0_stage3_iter60 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state306_pp0_stage4_iter60() {
    ap_block_state306_pp0_stage4_iter60 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state307_pp0_stage0_iter61() {
    ap_block_state307_pp0_stage0_iter61 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state308_pp0_stage1_iter61() {
    ap_block_state308_pp0_stage1_iter61 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state309_pp0_stage2_iter61() {
    ap_block_state309_pp0_stage2_iter61 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state30_pp0_stage3_iter5() {
    ap_block_state30_pp0_stage3_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state310_pp0_stage3_iter61() {
    ap_block_state310_pp0_stage3_iter61 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state311_pp0_stage4_iter61() {
    ap_block_state311_pp0_stage4_iter61 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state312_pp0_stage0_iter62() {
    ap_block_state312_pp0_stage0_iter62 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state313_pp0_stage1_iter62() {
    ap_block_state313_pp0_stage1_iter62 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state314_pp0_stage2_iter62() {
    ap_block_state314_pp0_stage2_iter62 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state315_pp0_stage3_iter62() {
    ap_block_state315_pp0_stage3_iter62 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state316_pp0_stage4_iter62() {
    ap_block_state316_pp0_stage4_iter62 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state317_pp0_stage0_iter63() {
    ap_block_state317_pp0_stage0_iter63 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state318_pp0_stage1_iter63() {
    ap_block_state318_pp0_stage1_iter63 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state319_pp0_stage2_iter63() {
    ap_block_state319_pp0_stage2_iter63 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state31_pp0_stage4_iter5() {
    ap_block_state31_pp0_stage4_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state320_pp0_stage3_iter63() {
    ap_block_state320_pp0_stage3_iter63 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state321_pp0_stage4_iter63() {
    ap_block_state321_pp0_stage4_iter63 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state322_pp0_stage0_iter64() {
    ap_block_state322_pp0_stage0_iter64 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state323_pp0_stage1_iter64() {
    ap_block_state323_pp0_stage1_iter64 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state324_pp0_stage2_iter64() {
    ap_block_state324_pp0_stage2_iter64 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state325_pp0_stage3_iter64() {
    ap_block_state325_pp0_stage3_iter64 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state326_pp0_stage4_iter64() {
    ap_block_state326_pp0_stage4_iter64 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state327_pp0_stage0_iter65() {
    ap_block_state327_pp0_stage0_iter65 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state328_pp0_stage1_iter65() {
    ap_block_state328_pp0_stage1_iter65 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state329_pp0_stage2_iter65() {
    ap_block_state329_pp0_stage2_iter65 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state32_pp0_stage0_iter6() {
    ap_block_state32_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state330_pp0_stage3_iter65() {
    ap_block_state330_pp0_stage3_iter65 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state331_pp0_stage4_iter65() {
    ap_block_state331_pp0_stage4_iter65 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state332_pp0_stage0_iter66() {
    ap_block_state332_pp0_stage0_iter66 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state333_pp0_stage1_iter66() {
    ap_block_state333_pp0_stage1_iter66 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state334_pp0_stage2_iter66() {
    ap_block_state334_pp0_stage2_iter66 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state335_io() {
    ap_block_state335_io = (esl_seteq<1,1,1>(ap_reg_pp0_iter66_exitcond1_reg_1064.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_AWREADY.read()));
}

void cordic::thread_ap_block_state335_pp0_stage3_iter66() {
    ap_block_state335_pp0_stage3_iter66 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state336_io() {
    ap_block_state336_io = (esl_seteq<1,1,1>(ap_reg_pp0_iter66_exitcond1_reg_1064.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_WREADY.read()));
}

void cordic::thread_ap_block_state336_pp0_stage4_iter66() {
    ap_block_state336_pp0_stage4_iter66 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state337_io() {
    ap_block_state337_io = (esl_seteq<1,1,1>(ap_reg_pp0_iter66_exitcond1_reg_1064.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_AWREADY.read()));
}

void cordic::thread_ap_block_state337_pp0_stage0_iter67() {
    ap_block_state337_pp0_stage0_iter67 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state338_io() {
    ap_block_state338_io = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter67_exitcond1_reg_1064.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_WREADY.read()));
}

void cordic::thread_ap_block_state338_pp0_stage1_iter67() {
    ap_block_state338_pp0_stage1_iter67 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state339_io() {
    ap_block_state339_io = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter67_exitcond1_reg_1064.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_AWREADY.read()));
}

void cordic::thread_ap_block_state339_pp0_stage2_iter67() {
    ap_block_state339_pp0_stage2_iter67 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state33_pp0_stage1_iter6() {
    ap_block_state33_pp0_stage1_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state340_io() {
    ap_block_state340_io = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter67_exitcond1_reg_1064.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_gmem_WREADY.read()));
}

void cordic::thread_ap_block_state340_pp0_stage3_iter67() {
    ap_block_state340_pp0_stage3_iter67 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state341_pp0_stage4_iter67() {
    ap_block_state341_pp0_stage4_iter67 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter67_exitcond1_reg_1064.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()));
}

void cordic::thread_ap_block_state342_pp0_stage0_iter68() {
    ap_block_state342_pp0_stage0_iter68 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state343_pp0_stage1_iter68() {
    ap_block_state343_pp0_stage1_iter68 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter68_exitcond1_reg_1064.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()));
}

void cordic::thread_ap_block_state344_pp0_stage2_iter68() {
    ap_block_state344_pp0_stage2_iter68 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state345_pp0_stage3_iter68() {
    ap_block_state345_pp0_stage3_iter68 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter68_exitcond1_reg_1064.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gmem_BVALID.read()));
}

void cordic::thread_ap_block_state34_pp0_stage2_iter6() {
    ap_block_state34_pp0_stage2_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state35_pp0_stage3_iter6() {
    ap_block_state35_pp0_stage3_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state36_pp0_stage4_iter6() {
    ap_block_state36_pp0_stage4_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state37_pp0_stage0_iter7() {
    ap_block_state37_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state38_pp0_stage1_iter7() {
    ap_block_state38_pp0_stage1_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state39_pp0_stage2_iter7() {
    ap_block_state39_pp0_stage2_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state3_pp0_stage1_iter0() {
    ap_block_state3_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state40_pp0_stage3_iter7() {
    ap_block_state40_pp0_stage3_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state41_pp0_stage4_iter7() {
    ap_block_state41_pp0_stage4_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state42_pp0_stage0_iter8() {
    ap_block_state42_pp0_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state43_pp0_stage1_iter8() {
    ap_block_state43_pp0_stage1_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state44_pp0_stage2_iter8() {
    ap_block_state44_pp0_stage2_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state45_pp0_stage3_iter8() {
    ap_block_state45_pp0_stage3_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state46_pp0_stage4_iter8() {
    ap_block_state46_pp0_stage4_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state47_pp0_stage0_iter9() {
    ap_block_state47_pp0_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state48_pp0_stage1_iter9() {
    ap_block_state48_pp0_stage1_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state49_pp0_stage2_iter9() {
    ap_block_state49_pp0_stage2_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state4_pp0_stage2_iter0() {
    ap_block_state4_pp0_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state50_pp0_stage3_iter9() {
    ap_block_state50_pp0_stage3_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state51_pp0_stage4_iter9() {
    ap_block_state51_pp0_stage4_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state52_pp0_stage0_iter10() {
    ap_block_state52_pp0_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state53_pp0_stage1_iter10() {
    ap_block_state53_pp0_stage1_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state54_pp0_stage2_iter10() {
    ap_block_state54_pp0_stage2_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state55_pp0_stage3_iter10() {
    ap_block_state55_pp0_stage3_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state56_pp0_stage4_iter10() {
    ap_block_state56_pp0_stage4_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state57_pp0_stage0_iter11() {
    ap_block_state57_pp0_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state58_pp0_stage1_iter11() {
    ap_block_state58_pp0_stage1_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state59_pp0_stage2_iter11() {
    ap_block_state59_pp0_stage2_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state5_pp0_stage3_iter0() {
    ap_block_state5_pp0_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state60_pp0_stage3_iter11() {
    ap_block_state60_pp0_stage3_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state61_pp0_stage4_iter11() {
    ap_block_state61_pp0_stage4_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state62_pp0_stage0_iter12() {
    ap_block_state62_pp0_stage0_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state63_pp0_stage1_iter12() {
    ap_block_state63_pp0_stage1_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state64_pp0_stage2_iter12() {
    ap_block_state64_pp0_stage2_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state65_pp0_stage3_iter12() {
    ap_block_state65_pp0_stage3_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state66_pp0_stage4_iter12() {
    ap_block_state66_pp0_stage4_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state67_pp0_stage0_iter13() {
    ap_block_state67_pp0_stage0_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state68_pp0_stage1_iter13() {
    ap_block_state68_pp0_stage1_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state69_pp0_stage2_iter13() {
    ap_block_state69_pp0_stage2_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state6_pp0_stage4_iter0() {
    ap_block_state6_pp0_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state70_pp0_stage3_iter13() {
    ap_block_state70_pp0_stage3_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state71_pp0_stage4_iter13() {
    ap_block_state71_pp0_stage4_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state72_pp0_stage0_iter14() {
    ap_block_state72_pp0_stage0_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state73_pp0_stage1_iter14() {
    ap_block_state73_pp0_stage1_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state74_pp0_stage2_iter14() {
    ap_block_state74_pp0_stage2_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state75_pp0_stage3_iter14() {
    ap_block_state75_pp0_stage3_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state76_pp0_stage4_iter14() {
    ap_block_state76_pp0_stage4_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state77_pp0_stage0_iter15() {
    ap_block_state77_pp0_stage0_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state78_pp0_stage1_iter15() {
    ap_block_state78_pp0_stage1_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state79_pp0_stage2_iter15() {
    ap_block_state79_pp0_stage2_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state7_pp0_stage0_iter1() {
    ap_block_state7_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state80_pp0_stage3_iter15() {
    ap_block_state80_pp0_stage3_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state81_pp0_stage4_iter15() {
    ap_block_state81_pp0_stage4_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state82_pp0_stage0_iter16() {
    ap_block_state82_pp0_stage0_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state83_pp0_stage1_iter16() {
    ap_block_state83_pp0_stage1_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state84_pp0_stage2_iter16() {
    ap_block_state84_pp0_stage2_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state85_pp0_stage3_iter16() {
    ap_block_state85_pp0_stage3_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state86_pp0_stage4_iter16() {
    ap_block_state86_pp0_stage4_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state87_pp0_stage0_iter17() {
    ap_block_state87_pp0_stage0_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state88_pp0_stage1_iter17() {
    ap_block_state88_pp0_stage1_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state89_pp0_stage2_iter17() {
    ap_block_state89_pp0_stage2_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state8_pp0_stage1_iter1() {
    ap_block_state8_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state90_pp0_stage3_iter17() {
    ap_block_state90_pp0_stage3_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state91_pp0_stage4_iter17() {
    ap_block_state91_pp0_stage4_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state92_pp0_stage0_iter18() {
    ap_block_state92_pp0_stage0_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state93_pp0_stage1_iter18() {
    ap_block_state93_pp0_stage1_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state94_pp0_stage2_iter18() {
    ap_block_state94_pp0_stage2_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state95_pp0_stage3_iter18() {
    ap_block_state95_pp0_stage3_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state96_pp0_stage4_iter18() {
    ap_block_state96_pp0_stage4_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state97_pp0_stage0_iter19() {
    ap_block_state97_pp0_stage0_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state98_pp0_stage1_iter19() {
    ap_block_state98_pp0_stage1_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state99_pp0_stage2_iter19() {
    ap_block_state99_pp0_stage2_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_block_state9_pp0_stage2_iter1() {
    ap_block_state9_pp0_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cordic::thread_ap_condition_1761() {
    ap_condition_1761 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter66.read()) && esl_seteq<1,1,1>(ap_reg_pp0_iter66_exitcond1_reg_1064.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage3_01001.read(), ap_const_boolean_0));
}

void cordic::thread_ap_condition_1779() {
    ap_condition_1779 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter66.read()) && esl_seteq<1,1,1>(ap_reg_pp0_iter66_exitcond1_reg_1064.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_01001.read(), ap_const_boolean_0));
}

void cordic::thread_ap_condition_1791() {
    ap_condition_1791 = (esl_seteq<1,1,1>(ap_reg_pp0_iter66_exitcond1_reg_1064.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0));
}

void cordic::thread_ap_condition_1806() {
    ap_condition_1806 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter67_exitcond1_reg_1064.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_01001.read(), ap_const_boolean_0));
}

void cordic::thread_ap_condition_1817() {
    ap_condition_1817 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter67_exitcond1_reg_1064.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_01001.read(), ap_const_boolean_0));
}

void cordic::thread_ap_condition_1829() {
    ap_condition_1829 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter67_exitcond1_reg_1064.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_01001.read(), ap_const_boolean_0));
}

void cordic::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(exitcond1_fu_345_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void cordic::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state346.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void cordic::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void cordic::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void cordic::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter17.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter18.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter19.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter20.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter21.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter22.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter23.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter24.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter25.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter26.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter27.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter29.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter30.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter31.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter32.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter33.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter34.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter35.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter36.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter37.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter38.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter39.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter40.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter41.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter42.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter43.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter44.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter45.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter46.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter47.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter48.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter49.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter50.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter51.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter52.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter53.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter54.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter55.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter56.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter57.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter58.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter59.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter60.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter61.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter62.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter63.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter64.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter65.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter66.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter67.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter68.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void cordic::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state346.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void cordic::thread_ap_sig_ioackin_gmem_AWREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) {
        ap_sig_ioackin_gmem_AWREADY = gmem_AWREADY.read();
    } else {
        ap_sig_ioackin_gmem_AWREADY = ap_const_logic_1;
    }
}

void cordic::thread_ap_sig_ioackin_gmem_WREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) {
        ap_sig_ioackin_gmem_WREADY = gmem_WREADY.read();
    } else {
        ap_sig_ioackin_gmem_WREADY = ap_const_logic_1;
    }
}

void cordic::thread_c6_sum_cast_fu_1039_p1() {
    c6_sum_cast_fu_1039_p1 = esl_zext<64,62>(c6_sum_reg_1575.read());
}

void cordic::thread_c6_sum_fu_1019_p2() {
    c6_sum_fu_1019_p2 = (!tmp_4_cast_reg_1049.read().is_01() || !tmp_3_cast_reg_1553.read().is_01())? sc_lv<62>(): (sc_biguint<62>(tmp_4_cast_reg_1049.read()) + sc_biguint<62>(tmp_3_cast_reg_1553.read()));
}

void cordic::thread_current_1_1_to_int_fu_485_p1() {
    current_1_1_to_int_fu_485_p1 = current_1_1_reg_1160.read();
}

void cordic::thread_current_1_1_v_fu_469_p3() {
    current_1_1_v_fu_469_p3 = (!tmp_15_reg_1137.read()[0].is_01())? sc_lv<64>(): ((tmp_15_reg_1137.read()[0].to_bool())? ap_const_lv64_3FDDAC670561BB4F: ap_const_lv64_BFDDAC670561BB4F);
}

void cordic::thread_current_1_2_to_int_fu_545_p1() {
    current_1_2_to_int_fu_545_p1 = current_1_2_reg_1202.read();
}

void cordic::thread_current_1_2_v_fu_530_p3() {
    current_1_2_v_fu_530_p3 = (!tmp_21_reg_1179.read()[0].is_01())? sc_lv<64>(): ((tmp_21_reg_1179.read()[0].to_bool())? ap_const_lv64_3FCF5B75F92C80DD: ap_const_lv64_BFCF5B75F92C80DD);
}

void cordic::thread_current_1_3_to_int_fu_605_p1() {
    current_1_3_to_int_fu_605_p1 = current_1_3_reg_1238.read();
}

void cordic::thread_current_1_3_v_fu_590_p3() {
    current_1_3_v_fu_590_p3 = (!tmp_27_reg_1214.read()[0].is_01())? sc_lv<64>(): ((tmp_27_reg_1214.read()[0].to_bool())? ap_const_lv64_3FBFD5BA9AAC2F6E: ap_const_lv64_BFBFD5BA9AAC2F6E);
}

void cordic::thread_current_1_4_to_int_fu_665_p1() {
    current_1_4_to_int_fu_665_p1 = current_1_4_reg_1275.read();
}

void cordic::thread_current_1_4_v_fu_650_p3() {
    current_1_4_v_fu_650_p3 = (!tmp_33_reg_1250.read()[0].is_01())? sc_lv<64>(): ((tmp_33_reg_1250.read()[0].to_bool())? ap_const_lv64_3FAFF55BB72CFDEA: ap_const_lv64_BFAFF55BB72CFDEA);
}

void cordic::thread_current_1_5_to_int_fu_725_p1() {
    current_1_5_to_int_fu_725_p1 = current_1_5_reg_1311.read();
}

void cordic::thread_current_1_5_v_fu_710_p3() {
    current_1_5_v_fu_710_p3 = (!tmp_39_reg_1287.read()[0].is_01())? sc_lv<64>(): ((tmp_39_reg_1287.read()[0].to_bool())? ap_const_lv64_3F9FFD55BBA97625: ap_const_lv64_BF9FFD55BBA97625);
}

void cordic::thread_current_1_6_to_int_fu_785_p1() {
    current_1_6_to_int_fu_785_p1 = current_1_6_reg_1346.read();
}

void cordic::thread_current_1_6_v_fu_777_p3() {
    current_1_6_v_fu_777_p3 = (!tmp_45_reg_1323.read()[0].is_01())? sc_lv<64>(): ((tmp_45_reg_1323.read()[0].to_bool())? ap_const_lv64_3F8FFF555BBB729B: ap_const_lv64_BF8FFF555BBB729B);
}

void cordic::thread_current_1_7_to_int_fu_852_p1() {
    current_1_7_to_int_fu_852_p1 = current_1_7_reg_1389.read();
}

void cordic::thread_current_1_7_v_fu_837_p3() {
    current_1_7_v_fu_837_p3 = (!tmp_51_reg_1364.read()[0].is_01())? sc_lv<64>(): ((tmp_51_reg_1364.read()[0].to_bool())? ap_const_lv64_3F7FFFD555BBBA97: ap_const_lv64_BF7FFFD555BBBA97);
}

void cordic::thread_current_1_8_to_int_fu_912_p1() {
    current_1_8_to_int_fu_912_p1 = current_1_8_reg_1430.read();
}

void cordic::thread_current_1_8_v_fu_897_p3() {
    current_1_8_v_fu_897_p3 = (!tmp_57_reg_1407.read()[0].is_01())? sc_lv<64>(): ((tmp_57_reg_1407.read()[0].to_bool())? ap_const_lv64_3F6FFFF5555BBBB7: ap_const_lv64_BF6FFFF5555BBBB7);
}

void cordic::thread_current_1_fu_408_p3() {
    current_1_fu_408_p3 = (!tmp_7_fu_403_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_7_fu_403_p2.read()[0].to_bool())? ap_const_lv64_3FE921FB54442D18: ap_const_lv64_BFE921FB54442D18);
}

void cordic::thread_current_1_to_int_fu_424_p1() {
    current_1_to_int_fu_424_p1 = current_1_reg_1119.read();
}

void cordic::thread_exitcond1_fu_345_p2() {
    exitcond1_fu_345_p2 = (!i1_phi_fu_214_p4.read().is_01() || !ap_const_lv7_5B.is_01())? sc_lv<1>(): sc_lv<1>(i1_phi_fu_214_p4.read() == ap_const_lv7_5B);
}

void cordic::thread_gmem_AWADDR() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) {
        if (esl_seteq<1,1,1>(ap_condition_1817.read(), ap_const_boolean_1)) {
            gmem_AWADDR = c6_sum_cast_fu_1039_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_1791.read(), ap_const_boolean_1)) {
            gmem_AWADDR = s4_sum_cast_fu_1023_p1.read();
        } else if (esl_seteq<1,1,1>(ap_condition_1761.read(), ap_const_boolean_1)) {
            gmem_AWADDR = theta2_sum_cast_fu_1005_p1.read();
        } else {
            gmem_AWADDR = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        gmem_AWADDR = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_gmem_AWVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter66.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter66_exitcond1_reg_1064.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_01001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_reg_pp0_iter66_exitcond1_reg_1064.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter67_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_AWREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_01001.read(), ap_const_boolean_0)))) {
        gmem_AWVALID = ap_const_logic_1;
    } else {
        gmem_AWVALID = ap_const_logic_0;
    }
}

void cordic::thread_gmem_BREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter67_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter68.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter68_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter68.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter68_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        gmem_BREADY = ap_const_logic_1;
    } else {
        gmem_BREADY = ap_const_logic_0;
    }
}

void cordic::thread_gmem_WDATA() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) {
        if (esl_seteq<1,1,1>(ap_condition_1829.read(), ap_const_boolean_1)) {
            gmem_WDATA = X_1_9_reg_1591.read();
        } else if (esl_seteq<1,1,1>(ap_condition_1806.read(), ap_const_boolean_1)) {
            gmem_WDATA = ap_reg_pp0_iter66_Y_1_9_reg_1548.read();
        } else if (esl_seteq<1,1,1>(ap_condition_1779.read(), ap_const_boolean_1)) {
            gmem_WDATA = ap_reg_pp0_iter66_radian_reg_1093.read();
        } else {
            gmem_WDATA = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        gmem_WDATA = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_gmem_WVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter66.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter66_exitcond1_reg_1064.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_01001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter67_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_01001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter67_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_01001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gmem_WREADY.read())))) {
        gmem_WVALID = ap_const_logic_1;
    } else {
        gmem_WVALID = ap_const_logic_0;
    }
}

void cordic::thread_gmem_blk_n_AW() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter66.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter66_exitcond1_reg_1064.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_reg_pp0_iter66_exitcond1_reg_1064.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter67_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0)))) {
        gmem_blk_n_AW = m_axi_gmem_AWREADY.read();
    } else {
        gmem_blk_n_AW = ap_const_logic_1;
    }
}

void cordic::thread_gmem_blk_n_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter67_exitcond1_reg_1064.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter68.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter68_exitcond1_reg_1064.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter68.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter68_exitcond1_reg_1064.read())))) {
        gmem_blk_n_B = m_axi_gmem_BVALID.read();
    } else {
        gmem_blk_n_B = ap_const_logic_1;
    }
}

void cordic::thread_gmem_blk_n_W() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter66.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter66_exitcond1_reg_1064.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter67_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter67.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter67_exitcond1_reg_1064.read())))) {
        gmem_blk_n_W = m_axi_gmem_WREADY.read();
    } else {
        gmem_blk_n_W = ap_const_logic_1;
    }
}

void cordic::thread_grp_fu_221_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        grp_fu_221_ce = ap_const_logic_1;
    } else {
        grp_fu_221_ce = ap_const_logic_0;
    }
}

void cordic::thread_grp_fu_221_opcode() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter19_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter19_tmp_15_reg_1137.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_00001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter23.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter23_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter22_tmp_21_reg_1179.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_00001.read(), ap_const_boolean_0)))) {
        grp_fu_221_opcode = ap_const_lv2_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter17.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter17_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter19_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter19_tmp_15_reg_1137.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter20_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter23.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter23_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter22_tmp_21_reg_1179.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter30.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter30_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_00001.read(), ap_const_boolean_0)))) {
        grp_fu_221_opcode = ap_const_lv2_0;
    } else {
        grp_fu_221_opcode =  (sc_lv<2>) ("XX");
    }
}

void cordic::thread_grp_fu_221_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter30.read()))) {
        grp_fu_221_p0 = current_1_4_reg_1275.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter23.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter23_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_reg_pp0_iter22_tmp_21_reg_1179.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter23.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter23_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter22_tmp_21_reg_1179.read())))) {
        grp_fu_221_p0 = X_1_1_reg_1191.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        grp_fu_221_p0 = current_1_1_reg_1160.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter19_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter19_tmp_15_reg_1137.read()))) {
        grp_fu_221_p0 = tmp_9_1_reg_1154.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter19_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter19_tmp_15_reg_1137.read(), ap_const_lv1_1))) {
        grp_fu_221_p0 = ap_const_lv64_3FE36E9DB5086BCB;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter17.read()))) {
        grp_fu_221_p0 = current_1_reg_1119.read();
    } else {
        grp_fu_221_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_221_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter30.read()))) {
        grp_fu_221_p1 = current_1_5_v_fu_710_p3.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter23.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter23_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_reg_pp0_iter22_tmp_21_reg_1179.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter23.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter23_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter22_tmp_21_reg_1179.read())))) {
        grp_fu_221_p1 = tmp_9_2_reg_1197.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        grp_fu_221_p1 = current_1_2_v_fu_530_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter19_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter19_tmp_15_reg_1137.read()))) {
        grp_fu_221_p1 = ap_const_lv64_3FE36E9DB5086BCB;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter19_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter19_tmp_15_reg_1137.read(), ap_const_lv1_1))) {
        grp_fu_221_p1 = tmp_9_1_reg_1154.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter17.read()))) {
        grp_fu_221_p1 = current_1_1_v_fu_469_p3.read();
    } else {
        grp_fu_221_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_225_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        grp_fu_225_ce = ap_const_logic_1;
    } else {
        grp_fu_225_ce = ap_const_logic_0;
    }
}

void cordic::thread_grp_fu_225_opcode() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter28.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter28_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter27_tmp_27_reg_1214.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_00001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter34.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter34_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter34_tmp_33_reg_1250.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_00001.read(), ap_const_boolean_0)))) {
        grp_fu_225_opcode = ap_const_lv2_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter17.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter17_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter23_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter27_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter27.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter28.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter28_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_reg_pp0_iter27_tmp_27_reg_1214.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter34.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter34_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter34_tmp_33_reg_1250.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_00001.read(), ap_const_boolean_0)))) {
        grp_fu_225_opcode = ap_const_lv2_0;
    } else {
        grp_fu_225_opcode =  (sc_lv<2>) ("XX");
    }
}

void cordic::thread_grp_fu_225_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter34.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter34_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter34_tmp_33_reg_1250.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter34.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter34_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter34_tmp_33_reg_1250.read())))) {
        grp_fu_225_p0 = X_1_3_reg_1330.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter28.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter28_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter27_tmp_27_reg_1214.read()))) {
        grp_fu_225_p0 = Y_1_2_reg_1262.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter28.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter28_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter27_tmp_27_reg_1214.read(), ap_const_lv1_1))) {
        grp_fu_225_p0 = tmp_3_5_reg_1269.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter27.read()))) {
        grp_fu_225_p0 = current_1_3_reg_1238.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        grp_fu_225_p0 = current_1_2_reg_1202.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter17.read()))) {
        grp_fu_225_p0 = Y_1_reg_1126.read();
    } else {
        grp_fu_225_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_225_p1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter34.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter34_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter34_tmp_33_reg_1250.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter34.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter34_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter34_tmp_33_reg_1250.read())))) {
        grp_fu_225_p1 = tmp_9_4_reg_1341.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter28.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter28_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter27_tmp_27_reg_1214.read()))) {
        grp_fu_225_p1 = tmp_3_5_reg_1269.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter28.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter28_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter27_tmp_27_reg_1214.read(), ap_const_lv1_1))) {
        grp_fu_225_p1 = Y_1_2_reg_1262.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter27.read()))) {
        grp_fu_225_p1 = current_1_4_v_fu_650_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        grp_fu_225_p1 = current_1_3_v_fu_590_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter17.read()))) {
        grp_fu_225_p1 = Y_1_1_v_fu_477_p3.read();
    } else {
        grp_fu_225_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_231_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        grp_fu_231_ce = ap_const_logic_1;
    } else {
        grp_fu_231_ce = ap_const_logic_0;
    }
}

void cordic::thread_grp_fu_231_opcode() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter25.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter25_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter24_tmp_21_reg_1179.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_00001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter31.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter31_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter30_tmp_27_reg_1214.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_00001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter36.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter36_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter36_tmp_33_reg_1250.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_00001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter39_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter40.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter39_tmp_39_reg_1287.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_00001.read(), ap_const_boolean_0)))) {
        grp_fu_231_opcode = ap_const_lv2_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter25.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter25_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_reg_pp0_iter24_tmp_21_reg_1179.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter31.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter31_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter30_tmp_27_reg_1214.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter36.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter36_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_reg_pp0_iter36_tmp_33_reg_1250.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter39_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter40.read()) && 
                 esl_seteq<1,1,1>(ap_reg_pp0_iter39_tmp_39_reg_1287.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter40_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter40.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_00001.read(), ap_const_boolean_0)))) {
        grp_fu_231_opcode = ap_const_lv2_0;
    } else {
        grp_fu_231_opcode =  (sc_lv<2>) ("XX");
    }
}

void cordic::thread_grp_fu_231_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter40.read()))) {
        grp_fu_231_p0 = ap_reg_pp0_iter40_current_1_7_reg_1389.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter39_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter40.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter39_tmp_39_reg_1287.read()))) {
        grp_fu_231_p0 = Y_1_4_reg_1382.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter39_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter40.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter39_tmp_39_reg_1287.read(), ap_const_lv1_1))) {
        grp_fu_231_p0 = tmp_5_7_reg_1396.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter36.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter36_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter36_tmp_33_reg_1250.read()))) {
        grp_fu_231_p0 = ap_reg_pp0_iter36_Y_1_3_reg_1304.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter36.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter36_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter36_tmp_33_reg_1250.read(), ap_const_lv1_1))) {
        grp_fu_231_p0 = tmp_4_6_reg_1358.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter31.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter31_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_reg_pp0_iter30_tmp_27_reg_1214.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter31.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter31_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter30_tmp_27_reg_1214.read())))) {
        grp_fu_231_p0 = ap_reg_pp0_iter30_X_1_2_reg_1232.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter25.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter25_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter24_tmp_21_reg_1179.read()))) {
        grp_fu_231_p0 = ap_reg_pp0_iter25_Y_1_1_reg_1167.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter25.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter25_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter24_tmp_21_reg_1179.read(), ap_const_lv1_1))) {
        grp_fu_231_p0 = tmp_2_4_reg_1226.read();
    } else {
        grp_fu_231_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_231_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter40.read()))) {
        grp_fu_231_p1 = current_1_8_v_fu_897_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter39_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter40.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter39_tmp_39_reg_1287.read()))) {
        grp_fu_231_p1 = tmp_5_7_reg_1396.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter39_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter40.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter39_tmp_39_reg_1287.read(), ap_const_lv1_1))) {
        grp_fu_231_p1 = Y_1_4_reg_1382.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter36.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter36_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter36_tmp_33_reg_1250.read()))) {
        grp_fu_231_p1 = tmp_4_6_reg_1358.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter36.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter36_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter36_tmp_33_reg_1250.read(), ap_const_lv1_1))) {
        grp_fu_231_p1 = ap_reg_pp0_iter36_Y_1_3_reg_1304.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter31.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter31_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_reg_pp0_iter30_tmp_27_reg_1214.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter31.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter31_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter30_tmp_27_reg_1214.read())))) {
        grp_fu_231_p1 = tmp_9_3_reg_1299.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter25.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter25_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter24_tmp_21_reg_1179.read()))) {
        grp_fu_231_p1 = tmp_2_4_reg_1226.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter25.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter25_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter24_tmp_21_reg_1179.read(), ap_const_lv1_1))) {
        grp_fu_231_p1 = ap_reg_pp0_iter25_Y_1_1_reg_1167.read();
    } else {
        grp_fu_231_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_235_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        grp_fu_235_ce = ap_const_logic_1;
    } else {
        grp_fu_235_ce = ap_const_logic_0;
    }
}

void cordic::thread_grp_fu_235_opcode() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter42.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter42_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter42_tmp_39_reg_1287.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_00001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter47_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter48.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter47_tmp_45_reg_1323.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_00001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter51.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter51_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter50_tmp_51_reg_1364.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_00001.read(), ap_const_boolean_0)))) {
        grp_fu_235_opcode = ap_const_lv2_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter33.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter33_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter36.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter36_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter42.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter42_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter42_tmp_39_reg_1287.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter47_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter48.read()) && 
                 esl_seteq<1,1,1>(ap_reg_pp0_iter47_tmp_45_reg_1323.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter51.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter51_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_reg_pp0_iter50_tmp_51_reg_1364.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_00001.read(), ap_const_boolean_0)))) {
        grp_fu_235_opcode = ap_const_lv2_0;
    } else {
        grp_fu_235_opcode =  (sc_lv<2>) ("XX");
    }
}

void cordic::thread_grp_fu_235_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter51.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter51_exitcond1_reg_1064.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter50_tmp_51_reg_1364.read()))) {
        grp_fu_235_p0 = Y_1_6_reg_1480.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter51.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter51_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter50_tmp_51_reg_1364.read(), ap_const_lv1_1))) {
        grp_fu_235_p0 = tmp_7_9_reg_1487.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter47_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter48.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter47_tmp_45_reg_1323.read()))) {
        grp_fu_235_p0 = ap_reg_pp0_iter47_Y_1_5_reg_1423.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter47_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter48.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter47_tmp_45_reg_1323.read(), ap_const_lv1_1))) {
        grp_fu_235_p0 = tmp_6_8_reg_1468.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter42.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter42_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_reg_pp0_iter42_tmp_39_reg_1287.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter42.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter42_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter42_tmp_39_reg_1287.read())))) {
        grp_fu_235_p0 = ap_reg_pp0_iter41_X_1_4_reg_1371.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter36.read()))) {
        grp_fu_235_p0 = current_1_6_reg_1346.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter33.read()))) {
        grp_fu_235_p0 = current_1_5_reg_1311.read();
    } else {
        grp_fu_235_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_235_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter51.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter51_exitcond1_reg_1064.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter50_tmp_51_reg_1364.read()))) {
        grp_fu_235_p1 = tmp_7_9_reg_1487.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter51.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter51_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter50_tmp_51_reg_1364.read(), ap_const_lv1_1))) {
        grp_fu_235_p1 = Y_1_6_reg_1480.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter47_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter48.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter47_tmp_45_reg_1323.read()))) {
        grp_fu_235_p1 = tmp_6_8_reg_1468.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter47_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter48.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter47_tmp_45_reg_1323.read(), ap_const_lv1_1))) {
        grp_fu_235_p1 = ap_reg_pp0_iter47_Y_1_5_reg_1423.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter42.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter42_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_reg_pp0_iter42_tmp_39_reg_1287.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter42.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter42_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter42_tmp_39_reg_1287.read())))) {
        grp_fu_235_p1 = tmp_9_5_reg_1418.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter36.read()))) {
        grp_fu_235_p1 = current_1_7_v_fu_837_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter33.read()))) {
        grp_fu_235_p1 = current_1_6_v_fu_777_p3.read();
    } else {
        grp_fu_235_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_239_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        grp_fu_239_ce = ap_const_logic_1;
    } else {
        grp_fu_239_ce = ap_const_logic_0;
    }
}

void cordic::thread_grp_fu_239_opcode() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter45.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter45_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter45_tmp_45_reg_1323.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_00001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter56.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter56_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter56_tmp_57_reg_1407.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_00001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter59.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter59_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter58_tmp_57_reg_1407.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_00001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter62.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter62_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter62_tmp_63_reg_1451.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_00001.read(), ap_const_boolean_0)))) {
        grp_fu_239_opcode = ap_const_lv2_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter45.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter45_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter45_tmp_45_reg_1323.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter56.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter56_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter56_tmp_57_reg_1407.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter59.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter59_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_reg_pp0_iter58_tmp_57_reg_1407.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter62.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter62_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_reg_pp0_iter62_tmp_63_reg_1451.read(), ap_const_lv1_1) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter64_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter65.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0_00001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter64_tmp_63_reg_1451.read())))) {
        grp_fu_239_opcode = ap_const_lv2_0;
    } else {
        grp_fu_239_opcode =  (sc_lv<2>) ("XX");
    }
}

void cordic::thread_grp_fu_239_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter65.read()))) {
        grp_fu_239_p0 = ap_reg_pp0_iter64_X_1_8_reg_1522.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter62.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter62_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter62_tmp_63_reg_1451.read()))) {
        grp_fu_239_p0 = Y_1_8_reg_1529.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter62.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter62_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter62_tmp_63_reg_1451.read(), ap_const_lv1_1))) {
        grp_fu_239_p0 = tmp_9_11_reg_1536.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter59.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter59_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter58_tmp_57_reg_1407.read()))) {
        grp_fu_239_p0 = ap_reg_pp0_iter58_Y_1_7_reg_1498.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter59.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter59_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter58_tmp_57_reg_1407.read(), ap_const_lv1_1))) {
        grp_fu_239_p0 = tmp_8_10_reg_1516.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter56.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter56_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_reg_pp0_iter56_tmp_57_reg_1407.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter56.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter56_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter56_tmp_57_reg_1407.read())))) {
        grp_fu_239_p0 = X_1_7_reg_1505.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter45.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter45_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_reg_pp0_iter45_tmp_45_reg_1323.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter45.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter45_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter45_tmp_45_reg_1323.read())))) {
        grp_fu_239_p0 = X_1_5_reg_1457.read();
    } else {
        grp_fu_239_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_239_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter65.read()))) {
        grp_fu_239_p1 = tmp_9_9_reg_1542.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter62.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter62_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter62_tmp_63_reg_1451.read()))) {
        grp_fu_239_p1 = tmp_9_11_reg_1536.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter62.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter62_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter62_tmp_63_reg_1451.read(), ap_const_lv1_1))) {
        grp_fu_239_p1 = Y_1_8_reg_1529.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter59.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter59_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter58_tmp_57_reg_1407.read()))) {
        grp_fu_239_p1 = tmp_8_10_reg_1516.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter59.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter59_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter58_tmp_57_reg_1407.read(), ap_const_lv1_1))) {
        grp_fu_239_p1 = ap_reg_pp0_iter58_Y_1_7_reg_1498.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter56.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter56_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_reg_pp0_iter56_tmp_57_reg_1407.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter56.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter56_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter56_tmp_57_reg_1407.read())))) {
        grp_fu_239_p1 = tmp_9_8_reg_1511.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter45.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter45_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_reg_pp0_iter45_tmp_45_reg_1323.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter45.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter45_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter45_tmp_45_reg_1323.read())))) {
        grp_fu_239_p1 = tmp_9_6_reg_1463.read();
    } else {
        grp_fu_239_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_243_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        grp_fu_243_ce = ap_const_logic_1;
    } else {
        grp_fu_243_ce = ap_const_logic_0;
    }
}

void cordic::thread_grp_fu_243_opcode() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter53.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter53_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter52_tmp_51_reg_1364.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_00001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter64.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter64_exitcond1_reg_1064.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_00001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter64_tmp_63_reg_1451.read(), ap_const_lv1_1)))) {
        grp_fu_243_opcode = ap_const_lv2_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter53.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter53_exitcond1_reg_1064.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter52_tmp_51_reg_1364.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_00001.read(), ap_const_boolean_0))) {
        grp_fu_243_opcode = ap_const_lv2_0;
    } else {
        grp_fu_243_opcode =  (sc_lv<2>) ("XX");
    }
}

void cordic::thread_grp_fu_243_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter64.read()))) {
        grp_fu_243_p0 = ap_reg_pp0_iter64_X_1_8_reg_1522.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter53.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter53_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_reg_pp0_iter52_tmp_51_reg_1364.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter53.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter53_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter52_tmp_51_reg_1364.read())))) {
        grp_fu_243_p0 = ap_reg_pp0_iter53_X_1_6_reg_1474.read();
    } else {
        grp_fu_243_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_243_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter64.read()))) {
        grp_fu_243_p1 = tmp_9_9_reg_1542.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter53.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter53_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_reg_pp0_iter52_tmp_51_reg_1364.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter53.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter53_exitcond1_reg_1064.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter52_tmp_51_reg_1364.read())))) {
        grp_fu_243_p1 = tmp_9_7_reg_1493.read();
    } else {
        grp_fu_243_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_247_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        grp_fu_247_ce = ap_const_logic_1;
    } else {
        grp_fu_247_ce = ap_const_logic_0;
    }
}

void cordic::thread_grp_fu_247_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter31.read()))) {
        grp_fu_247_p0 = Y_1_3_reg_1304.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter25.read()))) {
        grp_fu_247_p0 = X_1_2_reg_1232.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        grp_fu_247_p0 = Y_1_1_reg_1167.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter17.read()))) {
        grp_fu_247_p0 = Y_1_reg_1126.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_247_p0 = tmp_reg_1083.read();
    } else {
        grp_fu_247_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_247_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter31.read()))) {
        grp_fu_247_p1 = ap_const_lv64_3FB0000000000000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter25.read()))) {
        grp_fu_247_p1 = ap_const_lv64_3FC0000000000000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        grp_fu_247_p1 = ap_const_lv64_3FD0000000000000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter17.read()))) {
        grp_fu_247_p1 = ap_const_lv64_3FE0000000000000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_247_p1 = ap_const_lv64_400921FB54442D18;
    } else {
        grp_fu_247_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_254_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        grp_fu_254_ce = ap_const_logic_1;
    } else {
        grp_fu_254_ce = ap_const_logic_0;
    }
}

void cordic::thread_grp_fu_254_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter39.read()))) {
        grp_fu_254_p0 = Y_1_4_reg_1382.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter37.read()))) {
        grp_fu_254_p0 = X_1_4_reg_1371.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter33.read()))) {
        grp_fu_254_p0 = X_1_3_reg_1330.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter28.read()))) {
        grp_fu_254_p0 = Y_1_2_reg_1262.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter22.read()))) {
        grp_fu_254_p0 = X_1_1_reg_1191.read();
    } else {
        grp_fu_254_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_254_p1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter37.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter39.read())))) {
        grp_fu_254_p1 = ap_const_lv64_3FA0000000000000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter33.read()))) {
        grp_fu_254_p1 = ap_const_lv64_3FB0000000000000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter28.read()))) {
        grp_fu_254_p1 = ap_const_lv64_3FC0000000000000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter22.read()))) {
        grp_fu_254_p1 = ap_const_lv64_3FD0000000000000;
    } else {
        grp_fu_254_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_264_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        grp_fu_264_ce = ap_const_logic_1;
    } else {
        grp_fu_264_ce = ap_const_logic_0;
    }
}

void cordic::thread_grp_fu_264_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter59.read()))) {
        grp_fu_264_p0 = X_1_8_reg_1522.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter53.read()))) {
        grp_fu_264_p0 = Y_1_7_reg_1498.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter48.read()))) {
        grp_fu_264_p0 = X_1_6_reg_1474.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter45.read()))) {
        grp_fu_264_p0 = X_1_5_reg_1457.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter42.read()))) {
        grp_fu_264_p0 = Y_1_5_reg_1423.read();
    } else {
        grp_fu_264_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_264_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter59.read()))) {
        grp_fu_264_p1 = ap_const_lv64_3F60000000000000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter53.read()))) {
        grp_fu_264_p1 = ap_const_lv64_3F70000000000000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter48.read()))) {
        grp_fu_264_p1 = ap_const_lv64_3F80000000000000;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter42.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter45.read())))) {
        grp_fu_264_p1 = ap_const_lv64_3F90000000000000;
    } else {
        grp_fu_264_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_270_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        grp_fu_270_ce = ap_const_logic_1;
    } else {
        grp_fu_270_ce = ap_const_logic_0;
    }
}

void cordic::thread_grp_fu_270_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter61.read()))) {
        grp_fu_270_p0 = Y_1_8_reg_1529.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter56.read()))) {
        grp_fu_270_p0 = X_1_7_reg_1505.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter50.read()))) {
        grp_fu_270_p0 = Y_1_6_reg_1480.read();
    } else {
        grp_fu_270_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_270_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter61.read()))) {
        grp_fu_270_p1 = ap_const_lv64_3F60000000000000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter56.read()))) {
        grp_fu_270_p1 = ap_const_lv64_3F70000000000000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter50.read()))) {
        grp_fu_270_p1 = ap_const_lv64_3F80000000000000;
    } else {
        grp_fu_270_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_279_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        grp_fu_279_ce = ap_const_logic_1;
    } else {
        grp_fu_279_ce = ap_const_logic_0;
    }
}

void cordic::thread_grp_fu_284_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        grp_fu_284_ce = ap_const_logic_1;
    } else {
        grp_fu_284_ce = ap_const_logic_0;
    }
}

void cordic::thread_grp_fu_284_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter29.read()))) {
        grp_fu_284_p0 = ap_reg_pp0_iter29_radian_reg_1093.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter26.read()))) {
        grp_fu_284_p0 = ap_reg_pp0_iter26_radian_reg_1093.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        grp_fu_284_p0 = ap_reg_pp0_iter19_radian_reg_1093.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter17.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read())))) {
        grp_fu_284_p0 = radian_reg_1093.read();
    } else {
        grp_fu_284_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_284_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter29.read()))) {
        grp_fu_284_p1 = current_1_4_reg_1275.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter26.read()))) {
        grp_fu_284_p1 = current_1_3_reg_1238.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        grp_fu_284_p1 = current_1_1_reg_1160.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter17.read()))) {
        grp_fu_284_p1 = current_1_reg_1119.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        grp_fu_284_p1 = ap_const_lv64_0;
    } else {
        grp_fu_284_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_289_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        grp_fu_289_ce = ap_const_logic_1;
    } else {
        grp_fu_289_ce = ap_const_logic_0;
    }
}

void cordic::thread_grp_fu_289_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter43.read()))) {
        grp_fu_289_p0 = ap_reg_pp0_iter43_radian_reg_1093.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter39.read()))) {
        grp_fu_289_p0 = ap_reg_pp0_iter39_radian_reg_1093.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter36.read()))) {
        grp_fu_289_p0 = ap_reg_pp0_iter35_radian_reg_1093.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter33.read()))) {
        grp_fu_289_p0 = ap_reg_pp0_iter32_radian_reg_1093.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter23.read()))) {
        grp_fu_289_p0 = ap_reg_pp0_iter23_radian_reg_1093.read();
    } else {
        grp_fu_289_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_289_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter43.read()))) {
        grp_fu_289_p1 = current_1_8_reg_1430.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter39.read()))) {
        grp_fu_289_p1 = current_1_7_reg_1389.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter36.read()))) {
        grp_fu_289_p1 = current_1_6_reg_1346.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter33.read()))) {
        grp_fu_289_p1 = current_1_5_reg_1311.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter23.read()))) {
        grp_fu_289_p1 = current_1_2_reg_1202.read();
    } else {
        grp_fu_289_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void cordic::thread_grp_fu_293_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        grp_fu_293_ce = ap_const_logic_1;
    } else {
        grp_fu_293_ce = ap_const_logic_0;
    }
}

void cordic::thread_grp_fu_293_p0() {
    grp_fu_293_p0 = esl_zext<32,7>(i1_phi_fu_214_p4.read());
}

void cordic::thread_grp_fu_296_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter61.read()))) {
        grp_fu_296_p0 = ap_reg_pp0_iter61_tmp_57_reg_1407.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter59.read()))) {
        grp_fu_296_p0 = ap_reg_pp0_iter58_tmp_57_reg_1407.read();
    } else {
        grp_fu_296_p0 =  (sc_lv<1>) ("X");
    }
}

void cordic::thread_grp_fu_296_p3() {
    grp_fu_296_p3 = (!grp_fu_296_p0.read()[0].is_01())? sc_lv<64>(): ((grp_fu_296_p0.read()[0].to_bool())? grp_fu_239_p2.read(): grp_fu_239_p2.read());
}

void cordic::thread_i1_phi_fu_214_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_1064.read(), ap_const_lv1_0))) {
        i1_phi_fu_214_p4 = i_reg_1078.read();
    } else {
        i1_phi_fu_214_p4 = i1_reg_210.read();
    }
}

void cordic::thread_i_fu_362_p2() {
    i_fu_362_p2 = (!ap_const_lv7_1.is_01() || !i1_phi_fu_214_p4.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_1) + sc_biguint<7>(i1_phi_fu_214_p4.read()));
}

void cordic::thread_notlhs1_fu_682_p2() {
    notlhs1_fu_682_p2 = (!tmp_34_fu_668_p4.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_34_fu_668_p4.read() != ap_const_lv11_7FF);
}

void cordic::thread_notlhs2_fu_441_p2() {
    notlhs2_fu_441_p2 = (!tmp_10_fu_427_p4.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_10_fu_427_p4.read() != ap_const_lv11_7FF);
}

void cordic::thread_notlhs3_fu_742_p2() {
    notlhs3_fu_742_p2 = (!tmp_40_fu_728_p4.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_40_fu_728_p4.read() != ap_const_lv11_7FF);
}

void cordic::thread_notlhs4_fu_502_p2() {
    notlhs4_fu_502_p2 = (!tmp_16_fu_488_p4.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_16_fu_488_p4.read() != ap_const_lv11_7FF);
}

void cordic::thread_notlhs5_fu_802_p2() {
    notlhs5_fu_802_p2 = (!tmp_46_fu_788_p4.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_46_fu_788_p4.read() != ap_const_lv11_7FF);
}

void cordic::thread_notlhs6_fu_562_p2() {
    notlhs6_fu_562_p2 = (!tmp_22_fu_548_p4.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_22_fu_548_p4.read() != ap_const_lv11_7FF);
}

void cordic::thread_notlhs7_fu_869_p2() {
    notlhs7_fu_869_p2 = (!tmp_52_fu_855_p4.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_52_fu_855_p4.read() != ap_const_lv11_7FF);
}

void cordic::thread_notlhs8_fu_622_p2() {
    notlhs8_fu_622_p2 = (!tmp_28_fu_608_p4.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_28_fu_608_p4.read() != ap_const_lv11_7FF);
}

void cordic::thread_notlhs9_fu_929_p2() {
    notlhs9_fu_929_p2 = (!tmp_58_fu_915_p4.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_58_fu_915_p4.read() != ap_const_lv11_7FF);
}

void cordic::thread_notlhs_fu_385_p2() {
    notlhs_fu_385_p2 = (!tmp_s_fu_371_p4.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_s_fu_371_p4.read() != ap_const_lv11_7FF);
}

void cordic::thread_notrhs1_fu_688_p2() {
    notrhs1_fu_688_p2 = (!tmp_35_fu_678_p1.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_35_fu_678_p1.read() == ap_const_lv52_0);
}

void cordic::thread_notrhs2_fu_447_p2() {
    notrhs2_fu_447_p2 = (!tmp_11_fu_437_p1.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_11_fu_437_p1.read() == ap_const_lv52_0);
}

void cordic::thread_notrhs3_fu_748_p2() {
    notrhs3_fu_748_p2 = (!tmp_41_fu_738_p1.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_41_fu_738_p1.read() == ap_const_lv52_0);
}

void cordic::thread_notrhs4_fu_508_p2() {
    notrhs4_fu_508_p2 = (!tmp_17_fu_498_p1.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_17_fu_498_p1.read() == ap_const_lv52_0);
}

void cordic::thread_notrhs5_fu_808_p2() {
    notrhs5_fu_808_p2 = (!tmp_47_fu_798_p1.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_47_fu_798_p1.read() == ap_const_lv52_0);
}

void cordic::thread_notrhs6_fu_568_p2() {
    notrhs6_fu_568_p2 = (!tmp_23_fu_558_p1.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_23_fu_558_p1.read() == ap_const_lv52_0);
}

void cordic::thread_notrhs7_fu_875_p2() {
    notrhs7_fu_875_p2 = (!tmp_53_fu_865_p1.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_53_fu_865_p1.read() == ap_const_lv52_0);
}

void cordic::thread_notrhs8_fu_628_p2() {
    notrhs8_fu_628_p2 = (!tmp_29_fu_618_p1.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_29_fu_618_p1.read() == ap_const_lv52_0);
}

void cordic::thread_notrhs9_fu_935_p2() {
    notrhs9_fu_935_p2 = (!tmp_59_fu_925_p1.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_59_fu_925_p1.read() == ap_const_lv52_0);
}

void cordic::thread_notrhs_fu_391_p2() {
    notrhs_fu_391_p2 = (!tmp_6_fu_381_p1.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6_fu_381_p1.read() == ap_const_lv52_0);
}

void cordic::thread_radian_to_int_fu_368_p1() {
    radian_to_int_fu_368_p1 = radian_reg_1093.read();
}

void cordic::thread_s4_sum_cast_fu_1023_p1() {
    s4_sum_cast_fu_1023_p1 = esl_zext<64,62>(s4_sum_reg_1570.read());
}

void cordic::thread_s4_sum_fu_1015_p2() {
    s4_sum_fu_1015_p2 = (!tmp_5_cast_reg_1054.read().is_01() || !tmp_3_cast_reg_1553.read().is_01())? sc_lv<62>(): (sc_biguint<62>(tmp_5_cast_reg_1054.read()) + sc_biguint<62>(tmp_3_cast_reg_1553.read()));
}

void cordic::thread_theta2_sum_cast_fu_1005_p1() {
    theta2_sum_cast_fu_1005_p1 = esl_zext<64,62>(theta2_sum_reg_1559.read());
}

void cordic::thread_theta2_sum_fu_1000_p2() {
    theta2_sum_fu_1000_p2 = (!tmp_6_cast_reg_1059.read().is_01() || !tmp_3_cast_fu_997_p1.read().is_01())? sc_lv<62>(): (sc_biguint<62>(tmp_6_cast_reg_1059.read()) + sc_biguint<62>(tmp_3_cast_fu_997_p1.read()));
}

void cordic::thread_tmp_10_fu_427_p4() {
    tmp_10_fu_427_p4 = current_1_to_int_fu_424_p1.read().range(62, 52);
}

void cordic::thread_tmp_11_fu_437_p1() {
    tmp_11_fu_437_p1 = current_1_to_int_fu_424_p1.read().range(52-1, 0);
}

void cordic::thread_tmp_12_fu_453_p2() {
    tmp_12_fu_453_p2 = (notrhs2_fu_447_p2.read() | notlhs2_fu_441_p2.read());
}

void cordic::thread_tmp_13_fu_459_p2() {
    tmp_13_fu_459_p2 = (tmp_8_reg_1106.read() & tmp_12_fu_453_p2.read());
}

void cordic::thread_tmp_15_fu_464_p2() {
    tmp_15_fu_464_p2 = (tmp_13_fu_459_p2.read() & tmp_14_reg_1132.read());
}

void cordic::thread_tmp_16_fu_488_p4() {
    tmp_16_fu_488_p4 = current_1_1_to_int_fu_485_p1.read().range(62, 52);
}

void cordic::thread_tmp_17_fu_498_p1() {
    tmp_17_fu_498_p1 = current_1_1_to_int_fu_485_p1.read().range(52-1, 0);
}

void cordic::thread_tmp_18_fu_514_p2() {
    tmp_18_fu_514_p2 = (notrhs4_fu_508_p2.read() | notlhs4_fu_502_p2.read());
}

void cordic::thread_tmp_19_fu_520_p2() {
    tmp_19_fu_520_p2 = (ap_reg_pp0_iter19_tmp_8_reg_1106.read() & tmp_18_fu_514_p2.read());
}

void cordic::thread_tmp_21_fu_525_p2() {
    tmp_21_fu_525_p2 = (tmp_19_fu_520_p2.read() & tmp_20_reg_1174.read());
}

void cordic::thread_tmp_22_fu_548_p4() {
    tmp_22_fu_548_p4 = current_1_2_to_int_fu_545_p1.read().range(62, 52);
}

void cordic::thread_tmp_23_fu_558_p1() {
    tmp_23_fu_558_p1 = current_1_2_to_int_fu_545_p1.read().range(52-1, 0);
}

void cordic::thread_tmp_24_fu_574_p2() {
    tmp_24_fu_574_p2 = (notrhs6_fu_568_p2.read() | notlhs6_fu_562_p2.read());
}

void cordic::thread_tmp_25_fu_580_p2() {
    tmp_25_fu_580_p2 = (ap_reg_pp0_iter22_tmp_8_reg_1106.read() & tmp_24_fu_574_p2.read());
}

void cordic::thread_tmp_27_fu_585_p2() {
    tmp_27_fu_585_p2 = (tmp_25_fu_580_p2.read() & tmp_26_reg_1209.read());
}

void cordic::thread_tmp_28_fu_608_p4() {
    tmp_28_fu_608_p4 = current_1_3_to_int_fu_605_p1.read().range(62, 52);
}

void cordic::thread_tmp_29_fu_618_p1() {
    tmp_29_fu_618_p1 = current_1_3_to_int_fu_605_p1.read().range(52-1, 0);
}

void cordic::thread_tmp_2_fu_356_p2() {
    tmp_2_fu_356_p2 = (!ap_const_lv7_7F.is_01() || !i1_phi_fu_214_p4.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_7F) + sc_biguint<7>(i1_phi_fu_214_p4.read()));
}

void cordic::thread_tmp_30_fu_634_p2() {
    tmp_30_fu_634_p2 = (notrhs8_fu_628_p2.read() | notlhs8_fu_622_p2.read());
}

void cordic::thread_tmp_31_fu_640_p2() {
    tmp_31_fu_640_p2 = (ap_reg_pp0_iter26_tmp_8_reg_1106.read() & tmp_30_fu_634_p2.read());
}

void cordic::thread_tmp_33_fu_645_p2() {
    tmp_33_fu_645_p2 = (tmp_31_fu_640_p2.read() & tmp_32_reg_1245.read());
}

void cordic::thread_tmp_34_fu_668_p4() {
    tmp_34_fu_668_p4 = current_1_4_to_int_fu_665_p1.read().range(62, 52);
}

void cordic::thread_tmp_35_fu_678_p1() {
    tmp_35_fu_678_p1 = current_1_4_to_int_fu_665_p1.read().range(52-1, 0);
}

void cordic::thread_tmp_36_fu_694_p2() {
    tmp_36_fu_694_p2 = (notrhs1_fu_688_p2.read() | notlhs1_fu_682_p2.read());
}

void cordic::thread_tmp_37_fu_700_p2() {
    tmp_37_fu_700_p2 = (ap_reg_pp0_iter29_tmp_8_reg_1106.read() & tmp_36_fu_694_p2.read());
}

void cordic::thread_tmp_39_fu_705_p2() {
    tmp_39_fu_705_p2 = (tmp_37_fu_700_p2.read() & tmp_38_reg_1282.read());
}

void cordic::thread_tmp_3_cast_fu_997_p1() {
    tmp_3_cast_fu_997_p1 = esl_zext<62,7>(ap_reg_pp0_iter66_tmp_2_reg_1073.read());
}

void cordic::thread_tmp_3_fu_303_p4() {
    tmp_3_fu_303_p4 = c.read().range(63, 3);
}

void cordic::thread_tmp_40_fu_728_p4() {
    tmp_40_fu_728_p4 = current_1_5_to_int_fu_725_p1.read().range(62, 52);
}

void cordic::thread_tmp_41_fu_738_p1() {
    tmp_41_fu_738_p1 = current_1_5_to_int_fu_725_p1.read().range(52-1, 0);
}

void cordic::thread_tmp_42_fu_754_p2() {
    tmp_42_fu_754_p2 = (notrhs3_fu_748_p2.read() | notlhs3_fu_742_p2.read());
}

void cordic::thread_tmp_43_fu_760_p2() {
    tmp_43_fu_760_p2 = (ap_reg_pp0_iter32_tmp_8_reg_1106.read() & tmp_42_fu_754_p2.read());
}

void cordic::thread_tmp_45_fu_765_p2() {
    tmp_45_fu_765_p2 = (tmp_43_fu_760_p2.read() & tmp_44_reg_1318.read());
}

void cordic::thread_tmp_46_fu_788_p4() {
    tmp_46_fu_788_p4 = current_1_6_to_int_fu_785_p1.read().range(62, 52);
}

void cordic::thread_tmp_47_fu_798_p1() {
    tmp_47_fu_798_p1 = current_1_6_to_int_fu_785_p1.read().range(52-1, 0);
}

void cordic::thread_tmp_48_fu_814_p2() {
    tmp_48_fu_814_p2 = (notrhs5_fu_808_p2.read() | notlhs5_fu_802_p2.read());
}

void cordic::thread_tmp_49_fu_820_p2() {
    tmp_49_fu_820_p2 = (ap_reg_pp0_iter35_tmp_8_reg_1106.read() & tmp_48_fu_814_p2.read());
}

void cordic::thread_tmp_4_cast_fu_313_p1() {
    tmp_4_cast_fu_313_p1 = esl_zext<62,61>(tmp_3_fu_303_p4.read());
}

void cordic::thread_tmp_4_fu_317_p4() {
    tmp_4_fu_317_p4 = s.read().range(63, 3);
}

void cordic::thread_tmp_51_fu_825_p2() {
    tmp_51_fu_825_p2 = (tmp_49_fu_820_p2.read() & tmp_50_reg_1353.read());
}

void cordic::thread_tmp_52_fu_855_p4() {
    tmp_52_fu_855_p4 = current_1_7_to_int_fu_852_p1.read().range(62, 52);
}

void cordic::thread_tmp_53_fu_865_p1() {
    tmp_53_fu_865_p1 = current_1_7_to_int_fu_852_p1.read().range(52-1, 0);
}

void cordic::thread_tmp_54_fu_881_p2() {
    tmp_54_fu_881_p2 = (notrhs7_fu_875_p2.read() | notlhs7_fu_869_p2.read());
}

void cordic::thread_tmp_55_fu_887_p2() {
    tmp_55_fu_887_p2 = (ap_reg_pp0_iter39_tmp_8_reg_1106.read() & tmp_54_fu_881_p2.read());
}

void cordic::thread_tmp_57_fu_892_p2() {
    tmp_57_fu_892_p2 = (tmp_55_fu_887_p2.read() & tmp_56_reg_1402.read());
}

void cordic::thread_tmp_58_fu_915_p4() {
    tmp_58_fu_915_p4 = current_1_8_to_int_fu_912_p1.read().range(62, 52);
}

void cordic::thread_tmp_59_fu_925_p1() {
    tmp_59_fu_925_p1 = current_1_8_to_int_fu_912_p1.read().range(52-1, 0);
}

void cordic::thread_tmp_5_cast_fu_327_p1() {
    tmp_5_cast_fu_327_p1 = esl_zext<62,61>(tmp_4_fu_317_p4.read());
}

void cordic::thread_tmp_5_fu_331_p4() {
    tmp_5_fu_331_p4 = theta.read().range(63, 3);
}

void cordic::thread_tmp_60_fu_941_p2() {
    tmp_60_fu_941_p2 = (notrhs9_reg_1441.read() | notlhs9_reg_1436.read());
}

void cordic::thread_tmp_61_fu_945_p2() {
    tmp_61_fu_945_p2 = (ap_reg_pp0_iter43_tmp_8_reg_1106.read() & tmp_60_fu_941_p2.read());
}

void cordic::thread_tmp_63_fu_950_p2() {
    tmp_63_fu_950_p2 = (tmp_61_fu_945_p2.read() & tmp_62_reg_1446.read());
}

void cordic::thread_tmp_6_cast_fu_341_p1() {
    tmp_6_cast_fu_341_p1 = esl_zext<62,61>(tmp_5_fu_331_p4.read());
}

void cordic::thread_tmp_6_fu_381_p1() {
    tmp_6_fu_381_p1 = radian_to_int_fu_368_p1.read().range(52-1, 0);
}

void cordic::thread_tmp_7_fu_403_p2() {
    tmp_7_fu_403_p2 = (tmp_8_fu_397_p2.read() & tmp_9_reg_1101.read());
}

void cordic::thread_tmp_8_fu_397_p2() {
    tmp_8_fu_397_p2 = (notrhs_fu_391_p2.read() | notlhs_fu_385_p2.read());
}

void cordic::thread_tmp_s_fu_371_p4() {
    tmp_s_fu_371_p4 = radian_to_int_fu_368_p1.read().range(62, 52);
}

}

