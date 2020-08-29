/** CAN message encoder/decoder: automatically generated - do not edit
  * Generated by dbcc: See https://github.com/howerj/dbcc */
#ifndef TEMP_MONITOR_DBC_H
#define TEMP_MONITOR_DBC_H

#include <stdint.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" { 
#endif

#ifndef PREPACK
#define PREPACK
#endif

#ifndef POSTPACK
#define POSTPACK
#endif

#ifndef DBCC_TIME_STAMP
#define DBCC_TIME_STAMP
typedef uint32_t dbcc_time_stamp_t; /* Time stamp for message; you decide on units */
#endif

#ifndef DBCC_STATUS_ENUM
#define DBCC_STATUS_ENUM
typedef enum {
	DBCC_SIG_STAT_UNINITIALIZED_E = 0, /* Message never sent/received */
	DBCC_SIG_STAT_OK_E            = 1, /* Message ok */
	DBCC_SIG_STAT_ERROR_E         = 2, /* Encode/Decode/Timestamp/Any error */
} dbcc_signal_status_e;
#endif

typedef PREPACK struct {
	uint16_t TMStatus_HottestTemp; /* scaling 0.1, offset 0.0, units none  */
	uint16_t TMStatus_ColdestTemp; /* scaling 0.1, offset 0.0, units none  */
	uint8_t TMStatus_HottestIndex; /* scaling 1.0, offset 0.0, units none  */
	uint8_t TMStatus_ColdestIndex; /* scaling 1.0, offset 0.0, units none  */
	uint8_t TMStatus_Irrational; /* scaling 1.0, offset 0.0, units none  */
	uint8_t TMStatus_ConfigIrrationalEn; /* scaling 1.0, offset 0.0, units none  */
	uint8_t TMStatus_Overtemp; /* scaling 1.0, offset 0.0, units none  */
	uint8_t TMStatus_ConfigOvertempEn; /* scaling 1.0, offset 0.0, units none  */
} POSTPACK can_0x4d2_TMStatus_t;

typedef PREPACK struct {
	uint16_t TMSegment0_T0Temp; /* scaling 0.1, offset 0.0, units none  */
	uint16_t TMSegment0_T1Temp; /* scaling 0.1, offset 0.0, units none  */
	uint16_t TMSegment0_T2Temp; /* scaling 0.1, offset 0.0, units none  */
	uint16_t TMSegment0_T3Temp; /* scaling 0.1, offset 0.0, units none  */
} POSTPACK can_0x4d3_TMSegment0_t;

typedef PREPACK struct {
	uint16_t TMSegment1_T4Temp; /* scaling 0.1, offset 0.0, units none  */
	uint16_t TMSegment1_T5Temp; /* scaling 0.1, offset 0.0, units none  */
	uint16_t TMSegment1_T6Temp; /* scaling 0.1, offset 0.0, units none  */
	uint16_t TMSegment1_T7Temp; /* scaling 0.1, offset 0.0, units none  */
} POSTPACK can_0x4d4_TMSegment1_t;

typedef PREPACK struct {
	uint16_t TMSegment2_T8Temp; /* scaling 0.1, offset 0.0, units none  */
	uint16_t TMSegment2_T9Temp; /* scaling 0.1, offset 0.0, units none  */
	uint16_t TMSegment2_T10Temp; /* scaling 0.1, offset 0.0, units none  */
	uint16_t TMSegment2_T11Temp; /* scaling 0.1, offset 0.0, units none  */
} POSTPACK can_0x4d5_TMSegment2_t;

typedef PREPACK struct {
	uint16_t TMSegment3_T12Temp; /* scaling 0.1, offset 0.0, units none  */
	uint16_t TMSegment3_T13Temp; /* scaling 0.1, offset 0.0, units none  */
	uint16_t TMSegment3_T14Temp; /* scaling 0.1, offset 0.0, units none  */
	uint16_t TMSegment3_T15Temp; /* scaling 0.1, offset 0.0, units none  */
} POSTPACK can_0x4d6_TMSegment3_t;

typedef PREPACK struct {
	uint16_t TMSegment4_T16Temp; /* scaling 0.1, offset 0.0, units none  */
	uint16_t TMSegment4_T17Temp; /* scaling 0.1, offset 0.0, units none  */
	uint16_t TMSegment4_T18Temp; /* scaling 0.1, offset 0.0, units none  */
	uint16_t TMSegment4_T19Temp; /* scaling 0.1, offset 0.0, units none  */
} POSTPACK can_0x4d7_TMSegment4_t;

typedef PREPACK struct {
	uint16_t TMSegment5_T20Temp; /* scaling 0.1, offset 0.0, units none  */
	uint16_t TMSegment5_T21Temp; /* scaling 0.1, offset 0.0, units none  */
	uint16_t TMSegment5_T22Temp; /* scaling 0.1, offset 0.0, units none  */
	uint16_t TMSegment5_T23Temp; /* scaling 0.1, offset 0.0, units none  */
} POSTPACK can_0x4d8_TMSegment5_t;

typedef PREPACK struct {
	dbcc_time_stamp_t can_0x4d2_TMStatus_time_stamp_rx;
	dbcc_time_stamp_t can_0x4d3_TMSegment0_time_stamp_rx;
	dbcc_time_stamp_t can_0x4d4_TMSegment1_time_stamp_rx;
	dbcc_time_stamp_t can_0x4d5_TMSegment2_time_stamp_rx;
	dbcc_time_stamp_t can_0x4d6_TMSegment3_time_stamp_rx;
	dbcc_time_stamp_t can_0x4d7_TMSegment4_time_stamp_rx;
	dbcc_time_stamp_t can_0x4d8_TMSegment5_time_stamp_rx;
	unsigned can_0x4d2_TMStatus_status : 2;
	unsigned can_0x4d2_TMStatus_tx : 1;
	unsigned can_0x4d2_TMStatus_rx : 1;
	unsigned can_0x4d3_TMSegment0_status : 2;
	unsigned can_0x4d3_TMSegment0_tx : 1;
	unsigned can_0x4d3_TMSegment0_rx : 1;
	unsigned can_0x4d4_TMSegment1_status : 2;
	unsigned can_0x4d4_TMSegment1_tx : 1;
	unsigned can_0x4d4_TMSegment1_rx : 1;
	unsigned can_0x4d5_TMSegment2_status : 2;
	unsigned can_0x4d5_TMSegment2_tx : 1;
	unsigned can_0x4d5_TMSegment2_rx : 1;
	unsigned can_0x4d6_TMSegment3_status : 2;
	unsigned can_0x4d6_TMSegment3_tx : 1;
	unsigned can_0x4d6_TMSegment3_rx : 1;
	unsigned can_0x4d7_TMSegment4_status : 2;
	unsigned can_0x4d7_TMSegment4_tx : 1;
	unsigned can_0x4d7_TMSegment4_rx : 1;
	unsigned can_0x4d8_TMSegment5_status : 2;
	unsigned can_0x4d8_TMSegment5_tx : 1;
	unsigned can_0x4d8_TMSegment5_rx : 1;
	can_0x4d2_TMStatus_t can_0x4d2_TMStatus;
	can_0x4d3_TMSegment0_t can_0x4d3_TMSegment0;
	can_0x4d4_TMSegment1_t can_0x4d4_TMSegment1;
	can_0x4d5_TMSegment2_t can_0x4d5_TMSegment2;
	can_0x4d6_TMSegment3_t can_0x4d6_TMSegment3;
	can_0x4d7_TMSegment4_t can_0x4d7_TMSegment4;
	can_0x4d8_TMSegment5_t can_0x4d8_TMSegment5;
} POSTPACK can_obj_temp_monitor_dbc_h_t;

int unpack_message(can_obj_temp_monitor_dbc_h_t *o, const unsigned long id, uint64_t data, uint8_t dlc, dbcc_time_stamp_t time_stamp);
int pack_message(can_obj_temp_monitor_dbc_h_t *o, const unsigned long id, uint64_t *data);
int print_message(const can_obj_temp_monitor_dbc_h_t *o, const unsigned long id, FILE *output);

int decode_can_0x4d2_TMStatus_HottestTemp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d2_TMStatus_HottestTemp(can_obj_temp_monitor_dbc_h_t *o, double in);
int decode_can_0x4d2_TMStatus_ColdestTemp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d2_TMStatus_ColdestTemp(can_obj_temp_monitor_dbc_h_t *o, double in);
int decode_can_0x4d2_TMStatus_HottestIndex(const can_obj_temp_monitor_dbc_h_t *o, uint8_t *out);
int encode_can_0x4d2_TMStatus_HottestIndex(can_obj_temp_monitor_dbc_h_t *o, uint8_t in);
int decode_can_0x4d2_TMStatus_ColdestIndex(const can_obj_temp_monitor_dbc_h_t *o, uint8_t *out);
int encode_can_0x4d2_TMStatus_ColdestIndex(can_obj_temp_monitor_dbc_h_t *o, uint8_t in);
int decode_can_0x4d2_TMStatus_Irrational(const can_obj_temp_monitor_dbc_h_t *o, uint8_t *out);
int encode_can_0x4d2_TMStatus_Irrational(can_obj_temp_monitor_dbc_h_t *o, uint8_t in);
int decode_can_0x4d2_TMStatus_ConfigIrrationalEn(const can_obj_temp_monitor_dbc_h_t *o, uint8_t *out);
int encode_can_0x4d2_TMStatus_ConfigIrrationalEn(can_obj_temp_monitor_dbc_h_t *o, uint8_t in);
int decode_can_0x4d2_TMStatus_Overtemp(const can_obj_temp_monitor_dbc_h_t *o, uint8_t *out);
int encode_can_0x4d2_TMStatus_Overtemp(can_obj_temp_monitor_dbc_h_t *o, uint8_t in);
int decode_can_0x4d2_TMStatus_ConfigOvertempEn(const can_obj_temp_monitor_dbc_h_t *o, uint8_t *out);
int encode_can_0x4d2_TMStatus_ConfigOvertempEn(can_obj_temp_monitor_dbc_h_t *o, uint8_t in);


int decode_can_0x4d3_TMSegment0_T0Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d3_TMSegment0_T0Temp(can_obj_temp_monitor_dbc_h_t *o, double in);
int decode_can_0x4d3_TMSegment0_T1Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d3_TMSegment0_T1Temp(can_obj_temp_monitor_dbc_h_t *o, double in);
int decode_can_0x4d3_TMSegment0_T2Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d3_TMSegment0_T2Temp(can_obj_temp_monitor_dbc_h_t *o, double in);
int decode_can_0x4d3_TMSegment0_T3Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d3_TMSegment0_T3Temp(can_obj_temp_monitor_dbc_h_t *o, double in);


int decode_can_0x4d4_TMSegment1_T4Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d4_TMSegment1_T4Temp(can_obj_temp_monitor_dbc_h_t *o, double in);
int decode_can_0x4d4_TMSegment1_T5Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d4_TMSegment1_T5Temp(can_obj_temp_monitor_dbc_h_t *o, double in);
int decode_can_0x4d4_TMSegment1_T6Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d4_TMSegment1_T6Temp(can_obj_temp_monitor_dbc_h_t *o, double in);
int decode_can_0x4d4_TMSegment1_T7Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d4_TMSegment1_T7Temp(can_obj_temp_monitor_dbc_h_t *o, double in);


int decode_can_0x4d5_TMSegment2_T8Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d5_TMSegment2_T8Temp(can_obj_temp_monitor_dbc_h_t *o, double in);
int decode_can_0x4d5_TMSegment2_T9Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d5_TMSegment2_T9Temp(can_obj_temp_monitor_dbc_h_t *o, double in);
int decode_can_0x4d5_TMSegment2_T10Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d5_TMSegment2_T10Temp(can_obj_temp_monitor_dbc_h_t *o, double in);
int decode_can_0x4d5_TMSegment2_T11Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d5_TMSegment2_T11Temp(can_obj_temp_monitor_dbc_h_t *o, double in);


int decode_can_0x4d6_TMSegment3_T12Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d6_TMSegment3_T12Temp(can_obj_temp_monitor_dbc_h_t *o, double in);
int decode_can_0x4d6_TMSegment3_T13Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d6_TMSegment3_T13Temp(can_obj_temp_monitor_dbc_h_t *o, double in);
int decode_can_0x4d6_TMSegment3_T14Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d6_TMSegment3_T14Temp(can_obj_temp_monitor_dbc_h_t *o, double in);
int decode_can_0x4d6_TMSegment3_T15Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d6_TMSegment3_T15Temp(can_obj_temp_monitor_dbc_h_t *o, double in);


int decode_can_0x4d7_TMSegment4_T16Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d7_TMSegment4_T16Temp(can_obj_temp_monitor_dbc_h_t *o, double in);
int decode_can_0x4d7_TMSegment4_T17Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d7_TMSegment4_T17Temp(can_obj_temp_monitor_dbc_h_t *o, double in);
int decode_can_0x4d7_TMSegment4_T18Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d7_TMSegment4_T18Temp(can_obj_temp_monitor_dbc_h_t *o, double in);
int decode_can_0x4d7_TMSegment4_T19Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d7_TMSegment4_T19Temp(can_obj_temp_monitor_dbc_h_t *o, double in);


int decode_can_0x4d8_TMSegment5_T20Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d8_TMSegment5_T20Temp(can_obj_temp_monitor_dbc_h_t *o, double in);
int decode_can_0x4d8_TMSegment5_T21Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d8_TMSegment5_T21Temp(can_obj_temp_monitor_dbc_h_t *o, double in);
int decode_can_0x4d8_TMSegment5_T22Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d8_TMSegment5_T22Temp(can_obj_temp_monitor_dbc_h_t *o, double in);
int decode_can_0x4d8_TMSegment5_T23Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out);
int encode_can_0x4d8_TMSegment5_T23Temp(can_obj_temp_monitor_dbc_h_t *o, double in);


#ifdef __cplusplus
} 
#endif

#endif