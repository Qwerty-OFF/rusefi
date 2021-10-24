#include "global.h"
#include "engine_types.h"
// was generated automatically by rusEFI tool  from engine_types.h // by enum2string.jar tool on Sun Oct 24 17:16:22 UTC 2021
// see also gen_config_and_enums.bat



const char *getDebug_mode_e(debug_mode_e value){
switch(value) {
case DBG_34:
  return "DBG_34";
case DBG_ALTERNATOR_PID:
  return "DBG_ALTERNATOR_PID";
case DBG_ANALOG_INPUTS:
  return "DBG_ANALOG_INPUTS";
case DBG_ANALOG_INPUTS2:
  return "DBG_ANALOG_INPUTS2";
case DBG_AUX_VALVES:
  return "DBG_AUX_VALVES";
case DBG_BENCH_TEST:
  return "DBG_BENCH_TEST";
case DBG_BOOST:
  return "DBG_BOOST";
case DBG_CAN:
  return "DBG_CAN";
case DBG_CJ125:
  return "DBG_CJ125";
case DBG_COMPOSITE_LOG:
  return "DBG_COMPOSITE_LOG";
case DBG_CRANKING_DETAILS:
  return "DBG_CRANKING_DETAILS";
case DBG_DWELL_METRIC:
  return "DBG_DWELL_METRIC";
case DBG_DYNO_VIEW:
  return "DBG_DYNO_VIEW";
case DBG_ELECTRONIC_THROTTLE_EXTRA:
  return "DBG_ELECTRONIC_THROTTLE_EXTRA";
case DBG_ELECTRONIC_THROTTLE_PID:
  return "DBG_ELECTRONIC_THROTTLE_PID";
case DBG_EL_ACCEL:
  return "DBG_EL_ACCEL";
case DBG_ETB_AUTOTUNE:
  return "DBG_ETB_AUTOTUNE";
case DBG_ETB_LOGIC:
  return "DBG_ETB_LOGIC";
case DBG_EXECUTOR:
  return "DBG_EXECUTOR";
case DBG_FUEL_PID_CORRECTION:
  return "DBG_FUEL_PID_CORRECTION";
case DBG_GPPWM:
  return "DBG_GPPWM";
case DBG_IDLE_CONTROL:
  return "DBG_IDLE_CONTROL";
case DBG_IGNITION_TIMING:
  return "DBG_IGNITION_TIMING";
case DBG_INJECTOR_COMPENSATION:
  return "DBG_INJECTOR_COMPENSATION";
case DBG_INSTANT_RPM:
  return "DBG_INSTANT_RPM";
case DBG_ION:
  return "DBG_ION";
case DBG_KNOCK:
  return "DBG_KNOCK";
case DBG_LAUNCH:
  return "DBG_LAUNCH";
case DBG_LOGIC_ANALYZER:
  return "DBG_LOGIC_ANALYZER";
case DBG_LUA:
  return "DBG_LUA";
case DBG_MAP:
  return "DBG_MAP";
case DBG_METRICS:
  return "DBG_METRICS";
case DBG_RUSEFI_WIDEBAND:
  return "DBG_RUSEFI_WIDEBAND";
case DBG_SD_CARD:
  return "DBG_SD_CARD";
case DBG_SR5_PROTOCOL:
  return "DBG_SR5_PROTOCOL";
case DBG_START_STOP:
  return "DBG_START_STOP";
case DBG_STATUS:
  return "DBG_STATUS";
case DBG_TCU:
  return "DBG_TCU";
case DBG_TLE8888:
  return "DBG_TLE8888";
case DBG_TPS_ACCEL:
  return "DBG_TPS_ACCEL";
case DBG_TRIGGER_COUNTERS:
  return "DBG_TRIGGER_COUNTERS";
case DBG_UNUSED12:
  return "DBG_UNUSED12";
case DBG_UNUSED41:
  return "DBG_UNUSED41";
case DBG_UNUSED_42:
  return "DBG_UNUSED_42";
case DBG_UNUSED_6:
  return "DBG_UNUSED_6";
case DBG_VVT:
  return "DBG_VVT";
case DBG_VVT_1_PID:
  return "DBG_VVT_1_PID";
case DBG_VVT_2_PID:
  return "DBG_VVT_2_PID";
case DBG_VVT_3_PID:
  return "DBG_VVT_3_PID";
case DBG_VVT_4_PID:
  return "DBG_VVT_4_PID";
case DBG_WALL_WETTING:
  return "DBG_WALL_WETTING";
case Force_4_bytes_size_debug_mode_e:
  return "Force_4_bytes_size_debug_mode_e";
case MODE_52:
  return "MODE_52";
case MODE_53:
  return "MODE_53";
case UNUSED23:
  return "UNUSED23";
  }
 return NULL;
}
const char *getEngine_type_e(engine_type_e value){
switch(value) {
case BMW_M73_M:
  return "BMW_M73_M";
case BMW_M73_MRE:
  return "BMW_M73_MRE";
case BMW_M73_MRE_SLAVE:
  return "BMW_M73_MRE_SLAVE";
case CAMARO_4:
  return "CAMARO_4";
case CITROEN_TU3JP:
  return "CITROEN_TU3JP";
case DEFAULT_FRANKENSO:
  return "DEFAULT_FRANKENSO";
case DODGE_NEON_1995:
  return "DODGE_NEON_1995";
case DODGE_NEON_2003_CRANK:
  return "DODGE_NEON_2003_CRANK";
case DODGE_RAM:
  return "DODGE_RAM";
case ETB_BENCH_ENGINE:
  return "ETB_BENCH_ENGINE";
case ET_UNUSED96:
  return "ET_UNUSED96";
case ET_UNUSED97:
  return "ET_UNUSED97";
case ET_UNUSED98:
  return "ET_UNUSED98";
case ET_UNUSED_6:
  return "ET_UNUSED_6";
case FORD_ASPIRE_1996:
  return "FORD_ASPIRE_1996";
case FORD_ESCORT_GT:
  return "FORD_ESCORT_GT";
case FORD_INLINE_6_1995:
  return "FORD_INLINE_6_1995";
case FRANKENSO_BMW_M73_F:
  return "FRANKENSO_BMW_M73_F";
case FRANKENSO_MAZDA_MIATA_2003:
  return "FRANKENSO_MAZDA_MIATA_2003";
case FRANKENSO_MAZDA_MIATA_NA8:
  return "FRANKENSO_MAZDA_MIATA_NA8";
case FRANKENSO_MIATA_NA6_MAP:
  return "FRANKENSO_MIATA_NA6_MAP";
case FRANKENSO_MIATA_NA6_VAF:
  return "FRANKENSO_MIATA_NA6_VAF";
case FRANKENSO_QA_ENGINE:
  return "FRANKENSO_QA_ENGINE";
case Force_4_bytes_size_engine_type:
  return "Force_4_bytes_size_engine_type";
case GY6_139QMB:
  return "GY6_139QMB";
case HELLEN72_ETB:
  return "HELLEN72_ETB";
case HELLEN_121_NISSAN_4_CYL:
  return "HELLEN_121_NISSAN_4_CYL";
case HELLEN_121_NISSAN_6_CYL:
  return "HELLEN_121_NISSAN_6_CYL";
case HELLEN_121_NISSAN_8_CYL:
  return "HELLEN_121_NISSAN_8_CYL";
case HELLEN_121_NISSAN_ALMERA_N16:
  return "HELLEN_121_NISSAN_ALMERA_N16";
case HELLEN_121_VAG_4_CYL:
  return "HELLEN_121_VAG";
case HELLEN_121_VAG_5_CYL:
  return "HELLEN_121_VAG_5_CYL";
case HELLEN_121_VAG_8_CYL:
  return "HELLEN_121_VAG_8_CYL";
case HELLEN_121_VAG_V6_CYL:
  return "HELLEN_121_VAG_V6_CYL";
case HELLEN_121_VAG_VR6_CYL:
  return "HELLEN_121_VAG_VR6_CYL";
case HELLEN_128_MERCEDES_4_CYL:
  return "HELLEN_128_MERCEDES_4_CYL";
case HELLEN_128_MERCEDES_6_CYL:
  return "HELLEN_128_MERCEDES_6_CYL";
case HELLEN_128_MERCEDES_8_CYL:
  return "HELLEN_128_MERCEDES_8_CYL";
case HELLEN_134_BMW:
  return "HELLEN_134_BMW";
case HELLEN_154_HYUNDAI_COUPE_BK1:
  return "HELLEN_154_HYUNDAI_COUPE_BK1";
case HELLEN_154_HYUNDAI_COUPE_BK2:
  return "HELLEN_154_HYUNDAI_COUPE_BK2";
case HELLEN_154_VAG:
  return "HELLEN_154_VAG";
case HELLEN_55_BMW:
  return "HELLEN_55_BMW";
case HELLEN_88_BMW:
  return "HELLEN_88_BMW";
case HELLEN_NA6:
  return "HELLEN_NA6";
case HELLEN_NA94:
  return "HELLEN_NA94";
case HELLEN_NB1:
  return "HELLEN_NB1";
case HELLEN_NB1_36:
  return "HELLEN_NB1_36";
case HELLEN_NB2:
  return "HELLEN_NB2";
case HELLEN_NB2_36:
  return "HELLEN_NB2_36";
case HONDA_600:
  return "HONDA_600";
case HONDA_ACCORD_CD_DIP:
  return "HONDA_ACCORD_CD_DIP";
case HONDA_ACCORD_CD_TWO_WIRES:
  return "HONDA_ACCORD_CD_TWO_WIRES";
case LADA_KALINA:
  return "LADA_KALINA";
case MAZDA_626:
  return "MAZDA_626";
case MAZDA_MIATA_2003_BOARD_TEST:
  return "MAZDA_MIATA_2003_BOARD_TEST";
case MAZDA_MIATA_2003_NA_RAIL:
  return "MAZDA_MIATA_2003_NA_RAIL";
case MAZDA_MIATA_NB1:
  return "MAZDA_MIATA_NB1";
case MIATA_1990:
  return "MIATA_1990";
case MIATA_1996:
  return "MIATA_1996";
case MIATA_PROTEUS_TCU:
  return "MIATA_PROTEUS_TCU";
case MICRO_RUS_EFI:
  return "MICRO_RUS_EFI";
case MINIMAL_PINS:
  return "MINIMAL_PINS";
case MITSU_4G93:
  return "MITSU_4G93";
case MRE_BOARD_NEW_TEST:
  return "MRE_BOARD_NEW_TEST";
case MRE_BOARD_OLD_TEST:
  return "MRE_BOARD_OLD_TEST";
case MRE_BODY_CONTROL:
  return "MRE_BODY_CONTROL";
case MRE_M111:
  return "MRE_M111";
case MRE_MIATA_94_MAP:
  return "MRE_MIATA_94_MAP";
case MRE_MIATA_NA6_MAP:
  return "MRE_MIATA_NA6_MAP";
case MRE_MIATA_NA6_VAF:
  return "MRE_MIATA_NA6_VAF";
case MRE_MIATA_NB2_ETB:
  return "MRE_MIATA_NB2_ETB";
case MRE_MIATA_NB2_MAF:
  return "MRE_MIATA_NB2_MAF";
case MRE_MIATA_NB2_MAP:
  return "MRE_MIATA_NB2_MAP";
case MRE_SUBARU_EJ18:
  return "MRE_SUBARU_EJ18";
case NISSAN_PRIMERA:
  return "NISSAN_PRIMERA";
case PROMETHEUS_DEFAULTS:
  return "PROMETHEUS_DEFAULTS";
case PROTEUS_ANALOG_PWM_TEST:
  return "PROTEUS_ANALOG_PWM_TEST";
case PROTEUS_BMW_M73:
  return "PROTEUS_BMW_M73";
case PROTEUS_DEFAULTS:
  return "PROTEUS_DEFAULTS";
case PROTEUS_HONDA_ELEMENT_2003:
  return "PROTEUS_HONDA_ELEMENT_2003";
case PROTEUS_HONDA_OBD2A:
  return "PROTEUS_HONDA_OBD2A";
case PROTEUS_MIATA_NB2:
  return "PROTEUS_MIATA_NB2";
case PROTEUS_N73:
  return "PROTEUS_N73";
case PROTEUS_QC_TEST_BOARD:
  return "PROTEUS_QC_TEST_BOARD";
case PROTEUS_VAG_80_18T:
  return "PROTEUS_VAG_80_18T";
case SACHS:
  return "SACHS";
case SUBARUEG33_DEFAULTS:
  return "SUBARUEG33_DEFAULTS";
case SUBARUEJ20G_DEFAULTS:
  return "SUBARUEJ20G_DEFAULTS";
case SUBARU_2003_WRX:
  return "SUBARU_2003_WRX";
case TEST_108:
  return "TEST_108";
case TEST_109:
  return "TEST_109";
case TEST_110:
  return "TEST_110";
case TEST_33816:
  return "TEST_33816";
case TEST_ENGINE:
  return "TEST_ENGINE";
case TEST_ENGINE_VVT:
  return "TEST_ENGINE_VVT";
case TEST_ISSUE_366_BOTH:
  return "TEST_ISSUE_366_BOTH";
case TEST_ISSUE_366_RISE:
  return "TEST_ISSUE_366_RISE";
case TEST_ISSUE_898:
  return "TEST_ISSUE_898";
case TEST_ROTARY:
  return "TEST_ROTARY";
case TLE8888_BENCH_ENGINE:
  return "TLE8888_BENCH_ENGINE";
case TOYOTA_2JZ_GTE_VVTi:
  return "TOYOTA_2JZ_GTE_VVTi";
case TOYOTA_JZS147:
  return "TOYOTA_JZS147";
case UNUSED10:
  return "UNUSED10";
case UNUSED25:
  return "UNUSED25";
case UNUSED5:
  return "UNUSED5";
case UNUSED_48:
  return "UNUSED_48";
case UNUSED_50:
  return "UNUSED_50";
case UNUSED_51:
  return "UNUSED_51";
case VAG_18_TURBO:
  return "VAG_18_TURBO";
case VW_ABA:
  return "VW_ABA";
case VW_B6:
  return "VW_B6";
  }
 return NULL;
}
