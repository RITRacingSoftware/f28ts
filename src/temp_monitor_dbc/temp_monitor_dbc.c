/* Generated by DBCC, see <https://github.com/howerj/dbcc> */
#include "temp_monitor_dbc.h"
#include <inttypes.h>
#include <assert.h>

#define UNUSED(X) ((void)(X))

static inline uint64_t reverse_byte_order(uint64_t x) {
	x = (x & 0x00000000FFFFFFFF) << 32 | (x & 0xFFFFFFFF00000000) >> 32;
	x = (x & 0x0000FFFF0000FFFF) << 16 | (x & 0xFFFF0000FFFF0000) >> 16;
	x = (x & 0x00FF00FF00FF00FF) << 8  | (x & 0xFF00FF00FF00FF00) >> 8;
	return x;
}

static inline int print_helper(int r, int print_return_value) {
	return ((r >= 0) && (print_return_value >= 0)) ? r + print_return_value : -1;
}

static int pack_can_0x4d2_TMStatus(can_obj_temp_monitor_dbc_h_t *o, uint64_t *data) {
	assert(o);
	assert(data);
	register uint64_t x;
	register uint64_t i = 0;
	/* TMStatus_HottestTemp: start-bit 16, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d2_TMStatus.TMStatus_HottestTemp)) & 0x3ff;
	x <<= 16; 
	i |= x;
	/* TMStatus_ColdestTemp: start-bit 40, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d2_TMStatus.TMStatus_ColdestTemp)) & 0x3ff;
	x <<= 40; 
	i |= x;
	/* TMStatus_HottestIndex: start-bit 8, length 8, endianess intel, scaling 1, offset 0 */
	x = ((uint8_t)(o->can_0x4d2_TMStatus.TMStatus_HottestIndex)) & 0xff;
	x <<= 8; 
	i |= x;
	/* TMStatus_ColdestIndex: start-bit 32, length 8, endianess intel, scaling 1, offset 0 */
	x = ((uint8_t)(o->can_0x4d2_TMStatus.TMStatus_ColdestIndex)) & 0xff;
	x <<= 32; 
	i |= x;
	/* TMStatus_Irrational: start-bit 0, length 1, endianess intel, scaling 1, offset 0 */
	x = ((uint8_t)(o->can_0x4d2_TMStatus.TMStatus_Irrational)) & 0x1;
	i |= x;
	/* TMStatus_ConfigIrrationalEn: start-bit 2, length 1, endianess intel, scaling 1, offset 0 */
	x = ((uint8_t)(o->can_0x4d2_TMStatus.TMStatus_ConfigIrrationalEn)) & 0x1;
	x <<= 2; 
	i |= x;
	/* TMStatus_Overtemp: start-bit 1, length 1, endianess intel, scaling 1, offset 0 */
	x = ((uint8_t)(o->can_0x4d2_TMStatus.TMStatus_Overtemp)) & 0x1;
	x <<= 1; 
	i |= x;
	/* TMStatus_ConfigOvertempEn: start-bit 3, length 1, endianess intel, scaling 1, offset 0 */
	x = ((uint8_t)(o->can_0x4d2_TMStatus.TMStatus_ConfigOvertempEn)) & 0x1;
	x <<= 3; 
	i |= x;
	*data = (i);
	o->can_0x4d2_TMStatus_tx = 1;
	return 0;
}

static int unpack_can_0x4d2_TMStatus(can_obj_temp_monitor_dbc_h_t *o, uint64_t data, uint8_t dlc, dbcc_time_stamp_t time_stamp) {
	assert(o);
	assert(dlc <= 8);
	register uint64_t x;
	register uint64_t i = (data);
	if (dlc < 8)
		return -1;
	/* TMStatus_HottestTemp: start-bit 16, length 10, endianess intel, scaling 0.1, offset 0 */
	x = (i >> 16) & 0x3ff;
	o->can_0x4d2_TMStatus.TMStatus_HottestTemp = x;
	/* TMStatus_ColdestTemp: start-bit 40, length 10, endianess intel, scaling 0.1, offset 0 */
	x = (i >> 40) & 0x3ff;
	o->can_0x4d2_TMStatus.TMStatus_ColdestTemp = x;
	/* TMStatus_HottestIndex: start-bit 8, length 8, endianess intel, scaling 1, offset 0 */
	x = (i >> 8) & 0xff;
	o->can_0x4d2_TMStatus.TMStatus_HottestIndex = x;
	/* TMStatus_ColdestIndex: start-bit 32, length 8, endianess intel, scaling 1, offset 0 */
	x = (i >> 32) & 0xff;
	o->can_0x4d2_TMStatus.TMStatus_ColdestIndex = x;
	/* TMStatus_Irrational: start-bit 0, length 1, endianess intel, scaling 1, offset 0 */
	x = i & 0x1;
	o->can_0x4d2_TMStatus.TMStatus_Irrational = x;
	/* TMStatus_ConfigIrrationalEn: start-bit 2, length 1, endianess intel, scaling 1, offset 0 */
	x = (i >> 2) & 0x1;
	o->can_0x4d2_TMStatus.TMStatus_ConfigIrrationalEn = x;
	/* TMStatus_Overtemp: start-bit 1, length 1, endianess intel, scaling 1, offset 0 */
	x = (i >> 1) & 0x1;
	o->can_0x4d2_TMStatus.TMStatus_Overtemp = x;
	/* TMStatus_ConfigOvertempEn: start-bit 3, length 1, endianess intel, scaling 1, offset 0 */
	x = (i >> 3) & 0x1;
	o->can_0x4d2_TMStatus.TMStatus_ConfigOvertempEn = x;
	o->can_0x4d2_TMStatus_rx = 1;
	o->can_0x4d2_TMStatus_time_stamp_rx = time_stamp;
	return 0;
}

int decode_can_0x4d2_TMStatus_HottestTemp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d2_TMStatus.TMStatus_HottestTemp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d2_TMStatus_HottestTemp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d2_TMStatus.TMStatus_HottestTemp = in;
	return 0;
}

int decode_can_0x4d2_TMStatus_ColdestTemp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d2_TMStatus.TMStatus_ColdestTemp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d2_TMStatus_ColdestTemp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d2_TMStatus.TMStatus_ColdestTemp = in;
	return 0;
}

int decode_can_0x4d2_TMStatus_HottestIndex(const can_obj_temp_monitor_dbc_h_t *o, uint8_t *out) {
	assert(o);
	assert(out);
	uint8_t rval = (uint8_t)(o->can_0x4d2_TMStatus.TMStatus_HottestIndex);
	if (rval <= 23) {
		*out = rval;
		return 0;
	} else {
		*out = (uint8_t)0;
		return -1;
	}
}

int encode_can_0x4d2_TMStatus_HottestIndex(can_obj_temp_monitor_dbc_h_t *o, uint8_t in) {
	assert(o);
	o->can_0x4d2_TMStatus.TMStatus_HottestIndex = 0;
	if (in > 23)
		return -1;
	o->can_0x4d2_TMStatus.TMStatus_HottestIndex = in;
	return 0;
}

int decode_can_0x4d2_TMStatus_ColdestIndex(const can_obj_temp_monitor_dbc_h_t *o, uint8_t *out) {
	assert(o);
	assert(out);
	uint8_t rval = (uint8_t)(o->can_0x4d2_TMStatus.TMStatus_ColdestIndex);
	if (rval <= 23) {
		*out = rval;
		return 0;
	} else {
		*out = (uint8_t)0;
		return -1;
	}
}

int encode_can_0x4d2_TMStatus_ColdestIndex(can_obj_temp_monitor_dbc_h_t *o, uint8_t in) {
	assert(o);
	o->can_0x4d2_TMStatus.TMStatus_ColdestIndex = 0;
	if (in > 23)
		return -1;
	o->can_0x4d2_TMStatus.TMStatus_ColdestIndex = in;
	return 0;
}

int decode_can_0x4d2_TMStatus_Irrational(const can_obj_temp_monitor_dbc_h_t *o, uint8_t *out) {
	assert(o);
	assert(out);
	uint8_t rval = (uint8_t)(o->can_0x4d2_TMStatus.TMStatus_Irrational);
	*out = rval;
	return 0;
}

int encode_can_0x4d2_TMStatus_Irrational(can_obj_temp_monitor_dbc_h_t *o, uint8_t in) {
	assert(o);
	o->can_0x4d2_TMStatus.TMStatus_Irrational = in;
	return 0;
}

int decode_can_0x4d2_TMStatus_ConfigIrrationalEn(const can_obj_temp_monitor_dbc_h_t *o, uint8_t *out) {
	assert(o);
	assert(out);
	uint8_t rval = (uint8_t)(o->can_0x4d2_TMStatus.TMStatus_ConfigIrrationalEn);
	*out = rval;
	return 0;
}

int encode_can_0x4d2_TMStatus_ConfigIrrationalEn(can_obj_temp_monitor_dbc_h_t *o, uint8_t in) {
	assert(o);
	o->can_0x4d2_TMStatus.TMStatus_ConfigIrrationalEn = in;
	return 0;
}

int decode_can_0x4d2_TMStatus_Overtemp(const can_obj_temp_monitor_dbc_h_t *o, uint8_t *out) {
	assert(o);
	assert(out);
	uint8_t rval = (uint8_t)(o->can_0x4d2_TMStatus.TMStatus_Overtemp);
	*out = rval;
	return 0;
}

int encode_can_0x4d2_TMStatus_Overtemp(can_obj_temp_monitor_dbc_h_t *o, uint8_t in) {
	assert(o);
	o->can_0x4d2_TMStatus.TMStatus_Overtemp = in;
	return 0;
}

int decode_can_0x4d2_TMStatus_ConfigOvertempEn(const can_obj_temp_monitor_dbc_h_t *o, uint8_t *out) {
	assert(o);
	assert(out);
	uint8_t rval = (uint8_t)(o->can_0x4d2_TMStatus.TMStatus_ConfigOvertempEn);
	*out = rval;
	return 0;
}

int encode_can_0x4d2_TMStatus_ConfigOvertempEn(can_obj_temp_monitor_dbc_h_t *o, uint8_t in) {
	assert(o);
	o->can_0x4d2_TMStatus.TMStatus_ConfigOvertempEn = in;
	return 0;
}

int print_can_0x4d2_TMStatus(const can_obj_temp_monitor_dbc_h_t *o, FILE *output) {
	assert(o);
	assert(output);
	int r = 0;
	r = print_helper(r, fprintf(output, "TMStatus_HottestTemp = (wire: %.0f)\n", (double)(o->can_0x4d2_TMStatus.TMStatus_HottestTemp)));
	r = print_helper(r, fprintf(output, "TMStatus_ColdestTemp = (wire: %.0f)\n", (double)(o->can_0x4d2_TMStatus.TMStatus_ColdestTemp)));
	r = print_helper(r, fprintf(output, "TMStatus_HottestIndex = (wire: %.0f)\n", (double)(o->can_0x4d2_TMStatus.TMStatus_HottestIndex)));
	r = print_helper(r, fprintf(output, "TMStatus_ColdestIndex = (wire: %.0f)\n", (double)(o->can_0x4d2_TMStatus.TMStatus_ColdestIndex)));
	r = print_helper(r, fprintf(output, "TMStatus_Irrational = (wire: %.0f)\n", (double)(o->can_0x4d2_TMStatus.TMStatus_Irrational)));
	r = print_helper(r, fprintf(output, "TMStatus_ConfigIrrationalEn = (wire: %.0f)\n", (double)(o->can_0x4d2_TMStatus.TMStatus_ConfigIrrationalEn)));
	r = print_helper(r, fprintf(output, "TMStatus_Overtemp = (wire: %.0f)\n", (double)(o->can_0x4d2_TMStatus.TMStatus_Overtemp)));
	r = print_helper(r, fprintf(output, "TMStatus_ConfigOvertempEn = (wire: %.0f)\n", (double)(o->can_0x4d2_TMStatus.TMStatus_ConfigOvertempEn)));
	return r;
}

static int pack_can_0x4d3_TMSegment0(can_obj_temp_monitor_dbc_h_t *o, uint64_t *data) {
	assert(o);
	assert(data);
	register uint64_t x;
	register uint64_t i = 0;
	/* TMSegment0_T0Temp: start-bit 0, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d3_TMSegment0.TMSegment0_T0Temp)) & 0x3ff;
	i |= x;
	/* TMSegment0_T1Temp: start-bit 10, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d3_TMSegment0.TMSegment0_T1Temp)) & 0x3ff;
	x <<= 10; 
	i |= x;
	/* TMSegment0_T2Temp: start-bit 20, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d3_TMSegment0.TMSegment0_T2Temp)) & 0x3ff;
	x <<= 20; 
	i |= x;
	/* TMSegment0_T3Temp: start-bit 30, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d3_TMSegment0.TMSegment0_T3Temp)) & 0x3ff;
	x <<= 30; 
	i |= x;
	*data = (i);
	o->can_0x4d3_TMSegment0_tx = 1;
	return 0;
}

static int unpack_can_0x4d3_TMSegment0(can_obj_temp_monitor_dbc_h_t *o, uint64_t data, uint8_t dlc, dbcc_time_stamp_t time_stamp) {
	assert(o);
	assert(dlc <= 8);
	register uint64_t x;
	register uint64_t i = (data);
	if (dlc < 5)
		return -1;
	/* TMSegment0_T0Temp: start-bit 0, length 10, endianess intel, scaling 0.1, offset 0 */
	x = i & 0x3ff;
	o->can_0x4d3_TMSegment0.TMSegment0_T0Temp = x;
	/* TMSegment0_T1Temp: start-bit 10, length 10, endianess intel, scaling 0.1, offset 0 */
	x = (i >> 10) & 0x3ff;
	o->can_0x4d3_TMSegment0.TMSegment0_T1Temp = x;
	/* TMSegment0_T2Temp: start-bit 20, length 10, endianess intel, scaling 0.1, offset 0 */
	x = (i >> 20) & 0x3ff;
	o->can_0x4d3_TMSegment0.TMSegment0_T2Temp = x;
	/* TMSegment0_T3Temp: start-bit 30, length 10, endianess intel, scaling 0.1, offset 0 */
	x = (i >> 30) & 0x3ff;
	o->can_0x4d3_TMSegment0.TMSegment0_T3Temp = x;
	o->can_0x4d3_TMSegment0_rx = 1;
	o->can_0x4d3_TMSegment0_time_stamp_rx = time_stamp;
	return 0;
}

int decode_can_0x4d3_TMSegment0_T0Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d3_TMSegment0.TMSegment0_T0Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d3_TMSegment0_T0Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d3_TMSegment0.TMSegment0_T0Temp = in;
	return 0;
}

int decode_can_0x4d3_TMSegment0_T1Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d3_TMSegment0.TMSegment0_T1Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d3_TMSegment0_T1Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d3_TMSegment0.TMSegment0_T1Temp = in;
	return 0;
}

int decode_can_0x4d3_TMSegment0_T2Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d3_TMSegment0.TMSegment0_T2Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d3_TMSegment0_T2Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d3_TMSegment0.TMSegment0_T2Temp = in;
	return 0;
}

int decode_can_0x4d3_TMSegment0_T3Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d3_TMSegment0.TMSegment0_T3Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d3_TMSegment0_T3Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d3_TMSegment0.TMSegment0_T3Temp = in;
	return 0;
}

int print_can_0x4d3_TMSegment0(const can_obj_temp_monitor_dbc_h_t *o, FILE *output) {
	assert(o);
	assert(output);
	int r = 0;
	r = print_helper(r, fprintf(output, "TMSegment0_T0Temp = (wire: %.0f)\n", (double)(o->can_0x4d3_TMSegment0.TMSegment0_T0Temp)));
	r = print_helper(r, fprintf(output, "TMSegment0_T1Temp = (wire: %.0f)\n", (double)(o->can_0x4d3_TMSegment0.TMSegment0_T1Temp)));
	r = print_helper(r, fprintf(output, "TMSegment0_T2Temp = (wire: %.0f)\n", (double)(o->can_0x4d3_TMSegment0.TMSegment0_T2Temp)));
	r = print_helper(r, fprintf(output, "TMSegment0_T3Temp = (wire: %.0f)\n", (double)(o->can_0x4d3_TMSegment0.TMSegment0_T3Temp)));
	return r;
}

static int pack_can_0x4d4_TMSegment1(can_obj_temp_monitor_dbc_h_t *o, uint64_t *data) {
	assert(o);
	assert(data);
	register uint64_t x;
	register uint64_t i = 0;
	/* TMSegment1_T4Temp: start-bit 0, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d4_TMSegment1.TMSegment1_T4Temp)) & 0x3ff;
	i |= x;
	/* TMSegment1_T5Temp: start-bit 10, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d4_TMSegment1.TMSegment1_T5Temp)) & 0x3ff;
	x <<= 10; 
	i |= x;
	/* TMSegment1_T6Temp: start-bit 20, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d4_TMSegment1.TMSegment1_T6Temp)) & 0x3ff;
	x <<= 20; 
	i |= x;
	/* TMSegment1_T7Temp: start-bit 30, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d4_TMSegment1.TMSegment1_T7Temp)) & 0x3ff;
	x <<= 30; 
	i |= x;
	*data = (i);
	o->can_0x4d4_TMSegment1_tx = 1;
	return 0;
}

static int unpack_can_0x4d4_TMSegment1(can_obj_temp_monitor_dbc_h_t *o, uint64_t data, uint8_t dlc, dbcc_time_stamp_t time_stamp) {
	assert(o);
	assert(dlc <= 8);
	register uint64_t x;
	register uint64_t i = (data);
	if (dlc < 5)
		return -1;
	/* TMSegment1_T4Temp: start-bit 0, length 10, endianess intel, scaling 0.1, offset 0 */
	x = i & 0x3ff;
	o->can_0x4d4_TMSegment1.TMSegment1_T4Temp = x;
	/* TMSegment1_T5Temp: start-bit 10, length 10, endianess intel, scaling 0.1, offset 0 */
	x = (i >> 10) & 0x3ff;
	o->can_0x4d4_TMSegment1.TMSegment1_T5Temp = x;
	/* TMSegment1_T6Temp: start-bit 20, length 10, endianess intel, scaling 0.1, offset 0 */
	x = (i >> 20) & 0x3ff;
	o->can_0x4d4_TMSegment1.TMSegment1_T6Temp = x;
	/* TMSegment1_T7Temp: start-bit 30, length 10, endianess intel, scaling 0.1, offset 0 */
	x = (i >> 30) & 0x3ff;
	o->can_0x4d4_TMSegment1.TMSegment1_T7Temp = x;
	o->can_0x4d4_TMSegment1_rx = 1;
	o->can_0x4d4_TMSegment1_time_stamp_rx = time_stamp;
	return 0;
}

int decode_can_0x4d4_TMSegment1_T4Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d4_TMSegment1.TMSegment1_T4Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d4_TMSegment1_T4Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d4_TMSegment1.TMSegment1_T4Temp = in;
	return 0;
}

int decode_can_0x4d4_TMSegment1_T5Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d4_TMSegment1.TMSegment1_T5Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d4_TMSegment1_T5Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d4_TMSegment1.TMSegment1_T5Temp = in;
	return 0;
}

int decode_can_0x4d4_TMSegment1_T6Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d4_TMSegment1.TMSegment1_T6Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d4_TMSegment1_T6Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d4_TMSegment1.TMSegment1_T6Temp = in;
	return 0;
}

int decode_can_0x4d4_TMSegment1_T7Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d4_TMSegment1.TMSegment1_T7Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d4_TMSegment1_T7Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d4_TMSegment1.TMSegment1_T7Temp = in;
	return 0;
}

int print_can_0x4d4_TMSegment1(const can_obj_temp_monitor_dbc_h_t *o, FILE *output) {
	assert(o);
	assert(output);
	int r = 0;
	r = print_helper(r, fprintf(output, "TMSegment1_T4Temp = (wire: %.0f)\n", (double)(o->can_0x4d4_TMSegment1.TMSegment1_T4Temp)));
	r = print_helper(r, fprintf(output, "TMSegment1_T5Temp = (wire: %.0f)\n", (double)(o->can_0x4d4_TMSegment1.TMSegment1_T5Temp)));
	r = print_helper(r, fprintf(output, "TMSegment1_T6Temp = (wire: %.0f)\n", (double)(o->can_0x4d4_TMSegment1.TMSegment1_T6Temp)));
	r = print_helper(r, fprintf(output, "TMSegment1_T7Temp = (wire: %.0f)\n", (double)(o->can_0x4d4_TMSegment1.TMSegment1_T7Temp)));
	return r;
}

static int pack_can_0x4d5_TMSegment2(can_obj_temp_monitor_dbc_h_t *o, uint64_t *data) {
	assert(o);
	assert(data);
	register uint64_t x;
	register uint64_t i = 0;
	/* TMSegment2_T8Temp: start-bit 0, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d5_TMSegment2.TMSegment2_T8Temp)) & 0x3ff;
	i |= x;
	/* TMSegment2_T9Temp: start-bit 10, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d5_TMSegment2.TMSegment2_T9Temp)) & 0x3ff;
	x <<= 10; 
	i |= x;
	/* TMSegment2_T10Temp: start-bit 20, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d5_TMSegment2.TMSegment2_T10Temp)) & 0x3ff;
	x <<= 20; 
	i |= x;
	/* TMSegment2_T11Temp: start-bit 30, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d5_TMSegment2.TMSegment2_T11Temp)) & 0x3ff;
	x <<= 30; 
	i |= x;
	*data = (i);
	o->can_0x4d5_TMSegment2_tx = 1;
	return 0;
}

static int unpack_can_0x4d5_TMSegment2(can_obj_temp_monitor_dbc_h_t *o, uint64_t data, uint8_t dlc, dbcc_time_stamp_t time_stamp) {
	assert(o);
	assert(dlc <= 8);
	register uint64_t x;
	register uint64_t i = (data);
	if (dlc < 5)
		return -1;
	/* TMSegment2_T8Temp: start-bit 0, length 10, endianess intel, scaling 0.1, offset 0 */
	x = i & 0x3ff;
	o->can_0x4d5_TMSegment2.TMSegment2_T8Temp = x;
	/* TMSegment2_T9Temp: start-bit 10, length 10, endianess intel, scaling 0.1, offset 0 */
	x = (i >> 10) & 0x3ff;
	o->can_0x4d5_TMSegment2.TMSegment2_T9Temp = x;
	/* TMSegment2_T10Temp: start-bit 20, length 10, endianess intel, scaling 0.1, offset 0 */
	x = (i >> 20) & 0x3ff;
	o->can_0x4d5_TMSegment2.TMSegment2_T10Temp = x;
	/* TMSegment2_T11Temp: start-bit 30, length 10, endianess intel, scaling 0.1, offset 0 */
	x = (i >> 30) & 0x3ff;
	o->can_0x4d5_TMSegment2.TMSegment2_T11Temp = x;
	o->can_0x4d5_TMSegment2_rx = 1;
	o->can_0x4d5_TMSegment2_time_stamp_rx = time_stamp;
	return 0;
}

int decode_can_0x4d5_TMSegment2_T8Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d5_TMSegment2.TMSegment2_T8Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d5_TMSegment2_T8Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d5_TMSegment2.TMSegment2_T8Temp = in;
	return 0;
}

int decode_can_0x4d5_TMSegment2_T9Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d5_TMSegment2.TMSegment2_T9Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d5_TMSegment2_T9Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d5_TMSegment2.TMSegment2_T9Temp = in;
	return 0;
}

int decode_can_0x4d5_TMSegment2_T10Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d5_TMSegment2.TMSegment2_T10Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d5_TMSegment2_T10Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d5_TMSegment2.TMSegment2_T10Temp = in;
	return 0;
}

int decode_can_0x4d5_TMSegment2_T11Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d5_TMSegment2.TMSegment2_T11Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d5_TMSegment2_T11Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d5_TMSegment2.TMSegment2_T11Temp = in;
	return 0;
}

int print_can_0x4d5_TMSegment2(const can_obj_temp_monitor_dbc_h_t *o, FILE *output) {
	assert(o);
	assert(output);
	int r = 0;
	r = print_helper(r, fprintf(output, "TMSegment2_T8Temp = (wire: %.0f)\n", (double)(o->can_0x4d5_TMSegment2.TMSegment2_T8Temp)));
	r = print_helper(r, fprintf(output, "TMSegment2_T9Temp = (wire: %.0f)\n", (double)(o->can_0x4d5_TMSegment2.TMSegment2_T9Temp)));
	r = print_helper(r, fprintf(output, "TMSegment2_T10Temp = (wire: %.0f)\n", (double)(o->can_0x4d5_TMSegment2.TMSegment2_T10Temp)));
	r = print_helper(r, fprintf(output, "TMSegment2_T11Temp = (wire: %.0f)\n", (double)(o->can_0x4d5_TMSegment2.TMSegment2_T11Temp)));
	return r;
}

static int pack_can_0x4d6_TMSegment3(can_obj_temp_monitor_dbc_h_t *o, uint64_t *data) {
	assert(o);
	assert(data);
	register uint64_t x;
	register uint64_t i = 0;
	/* TMSegment3_T12Temp: start-bit 0, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d6_TMSegment3.TMSegment3_T12Temp)) & 0x3ff;
	i |= x;
	/* TMSegment3_T13Temp: start-bit 10, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d6_TMSegment3.TMSegment3_T13Temp)) & 0x3ff;
	x <<= 10; 
	i |= x;
	/* TMSegment3_T14Temp: start-bit 20, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d6_TMSegment3.TMSegment3_T14Temp)) & 0x3ff;
	x <<= 20; 
	i |= x;
	/* TMSegment3_T15Temp: start-bit 30, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d6_TMSegment3.TMSegment3_T15Temp)) & 0x3ff;
	x <<= 30; 
	i |= x;
	*data = (i);
	o->can_0x4d6_TMSegment3_tx = 1;
	return 0;
}

static int unpack_can_0x4d6_TMSegment3(can_obj_temp_monitor_dbc_h_t *o, uint64_t data, uint8_t dlc, dbcc_time_stamp_t time_stamp) {
	assert(o);
	assert(dlc <= 8);
	register uint64_t x;
	register uint64_t i = (data);
	if (dlc < 5)
		return -1;
	/* TMSegment3_T12Temp: start-bit 0, length 10, endianess intel, scaling 0.1, offset 0 */
	x = i & 0x3ff;
	o->can_0x4d6_TMSegment3.TMSegment3_T12Temp = x;
	/* TMSegment3_T13Temp: start-bit 10, length 10, endianess intel, scaling 0.1, offset 0 */
	x = (i >> 10) & 0x3ff;
	o->can_0x4d6_TMSegment3.TMSegment3_T13Temp = x;
	/* TMSegment3_T14Temp: start-bit 20, length 10, endianess intel, scaling 0.1, offset 0 */
	x = (i >> 20) & 0x3ff;
	o->can_0x4d6_TMSegment3.TMSegment3_T14Temp = x;
	/* TMSegment3_T15Temp: start-bit 30, length 10, endianess intel, scaling 0.1, offset 0 */
	x = (i >> 30) & 0x3ff;
	o->can_0x4d6_TMSegment3.TMSegment3_T15Temp = x;
	o->can_0x4d6_TMSegment3_rx = 1;
	o->can_0x4d6_TMSegment3_time_stamp_rx = time_stamp;
	return 0;
}

int decode_can_0x4d6_TMSegment3_T12Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d6_TMSegment3.TMSegment3_T12Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d6_TMSegment3_T12Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d6_TMSegment3.TMSegment3_T12Temp = in;
	return 0;
}

int decode_can_0x4d6_TMSegment3_T13Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d6_TMSegment3.TMSegment3_T13Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d6_TMSegment3_T13Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d6_TMSegment3.TMSegment3_T13Temp = in;
	return 0;
}

int decode_can_0x4d6_TMSegment3_T14Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d6_TMSegment3.TMSegment3_T14Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d6_TMSegment3_T14Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d6_TMSegment3.TMSegment3_T14Temp = in;
	return 0;
}

int decode_can_0x4d6_TMSegment3_T15Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d6_TMSegment3.TMSegment3_T15Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d6_TMSegment3_T15Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d6_TMSegment3.TMSegment3_T15Temp = in;
	return 0;
}

int print_can_0x4d6_TMSegment3(const can_obj_temp_monitor_dbc_h_t *o, FILE *output) {
	assert(o);
	assert(output);
	int r = 0;
	r = print_helper(r, fprintf(output, "TMSegment3_T12Temp = (wire: %.0f)\n", (double)(o->can_0x4d6_TMSegment3.TMSegment3_T12Temp)));
	r = print_helper(r, fprintf(output, "TMSegment3_T13Temp = (wire: %.0f)\n", (double)(o->can_0x4d6_TMSegment3.TMSegment3_T13Temp)));
	r = print_helper(r, fprintf(output, "TMSegment3_T14Temp = (wire: %.0f)\n", (double)(o->can_0x4d6_TMSegment3.TMSegment3_T14Temp)));
	r = print_helper(r, fprintf(output, "TMSegment3_T15Temp = (wire: %.0f)\n", (double)(o->can_0x4d6_TMSegment3.TMSegment3_T15Temp)));
	return r;
}

static int pack_can_0x4d7_TMSegment4(can_obj_temp_monitor_dbc_h_t *o, uint64_t *data) {
	assert(o);
	assert(data);
	register uint64_t x;
	register uint64_t i = 0;
	/* TMSegment4_T16Temp: start-bit 0, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d7_TMSegment4.TMSegment4_T16Temp)) & 0x3ff;
	i |= x;
	/* TMSegment4_T17Temp: start-bit 10, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d7_TMSegment4.TMSegment4_T17Temp)) & 0x3ff;
	x <<= 10; 
	i |= x;
	/* TMSegment4_T18Temp: start-bit 20, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d7_TMSegment4.TMSegment4_T18Temp)) & 0x3ff;
	x <<= 20; 
	i |= x;
	/* TMSegment4_T19Temp: start-bit 30, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d7_TMSegment4.TMSegment4_T19Temp)) & 0x3ff;
	x <<= 30; 
	i |= x;
	*data = (i);
	o->can_0x4d7_TMSegment4_tx = 1;
	return 0;
}

static int unpack_can_0x4d7_TMSegment4(can_obj_temp_monitor_dbc_h_t *o, uint64_t data, uint8_t dlc, dbcc_time_stamp_t time_stamp) {
	assert(o);
	assert(dlc <= 8);
	register uint64_t x;
	register uint64_t i = (data);
	if (dlc < 5)
		return -1;
	/* TMSegment4_T16Temp: start-bit 0, length 10, endianess intel, scaling 0.1, offset 0 */
	x = i & 0x3ff;
	o->can_0x4d7_TMSegment4.TMSegment4_T16Temp = x;
	/* TMSegment4_T17Temp: start-bit 10, length 10, endianess intel, scaling 0.1, offset 0 */
	x = (i >> 10) & 0x3ff;
	o->can_0x4d7_TMSegment4.TMSegment4_T17Temp = x;
	/* TMSegment4_T18Temp: start-bit 20, length 10, endianess intel, scaling 0.1, offset 0 */
	x = (i >> 20) & 0x3ff;
	o->can_0x4d7_TMSegment4.TMSegment4_T18Temp = x;
	/* TMSegment4_T19Temp: start-bit 30, length 10, endianess intel, scaling 0.1, offset 0 */
	x = (i >> 30) & 0x3ff;
	o->can_0x4d7_TMSegment4.TMSegment4_T19Temp = x;
	o->can_0x4d7_TMSegment4_rx = 1;
	o->can_0x4d7_TMSegment4_time_stamp_rx = time_stamp;
	return 0;
}

int decode_can_0x4d7_TMSegment4_T16Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d7_TMSegment4.TMSegment4_T16Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d7_TMSegment4_T16Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d7_TMSegment4.TMSegment4_T16Temp = in;
	return 0;
}

int decode_can_0x4d7_TMSegment4_T17Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d7_TMSegment4.TMSegment4_T17Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d7_TMSegment4_T17Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d7_TMSegment4.TMSegment4_T17Temp = in;
	return 0;
}

int decode_can_0x4d7_TMSegment4_T18Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d7_TMSegment4.TMSegment4_T18Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d7_TMSegment4_T18Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d7_TMSegment4.TMSegment4_T18Temp = in;
	return 0;
}

int decode_can_0x4d7_TMSegment4_T19Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d7_TMSegment4.TMSegment4_T19Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d7_TMSegment4_T19Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d7_TMSegment4.TMSegment4_T19Temp = in;
	return 0;
}

int print_can_0x4d7_TMSegment4(const can_obj_temp_monitor_dbc_h_t *o, FILE *output) {
	assert(o);
	assert(output);
	int r = 0;
	r = print_helper(r, fprintf(output, "TMSegment4_T16Temp = (wire: %.0f)\n", (double)(o->can_0x4d7_TMSegment4.TMSegment4_T16Temp)));
	r = print_helper(r, fprintf(output, "TMSegment4_T17Temp = (wire: %.0f)\n", (double)(o->can_0x4d7_TMSegment4.TMSegment4_T17Temp)));
	r = print_helper(r, fprintf(output, "TMSegment4_T18Temp = (wire: %.0f)\n", (double)(o->can_0x4d7_TMSegment4.TMSegment4_T18Temp)));
	r = print_helper(r, fprintf(output, "TMSegment4_T19Temp = (wire: %.0f)\n", (double)(o->can_0x4d7_TMSegment4.TMSegment4_T19Temp)));
	return r;
}

static int pack_can_0x4d8_TMSegment5(can_obj_temp_monitor_dbc_h_t *o, uint64_t *data) {
	assert(o);
	assert(data);
	register uint64_t x;
	register uint64_t i = 0;
	/* TMSegment5_T20Temp: start-bit 0, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d8_TMSegment5.TMSegment5_T20Temp)) & 0x3ff;
	i |= x;
	/* TMSegment5_T21Temp: start-bit 10, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d8_TMSegment5.TMSegment5_T21Temp)) & 0x3ff;
	x <<= 10; 
	i |= x;
	/* TMSegment5_T22Temp: start-bit 20, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d8_TMSegment5.TMSegment5_T22Temp)) & 0x3ff;
	x <<= 20; 
	i |= x;
	/* TMSegment5_T23Temp: start-bit 30, length 10, endianess intel, scaling 0.1, offset 0 */
	x = ((uint16_t)(o->can_0x4d8_TMSegment5.TMSegment5_T23Temp)) & 0x3ff;
	x <<= 30; 
	i |= x;
	*data = (i);
	o->can_0x4d8_TMSegment5_tx = 1;
	return 0;
}

static int unpack_can_0x4d8_TMSegment5(can_obj_temp_monitor_dbc_h_t *o, uint64_t data, uint8_t dlc, dbcc_time_stamp_t time_stamp) {
	assert(o);
	assert(dlc <= 8);
	register uint64_t x;
	register uint64_t i = (data);
	if (dlc < 5)
		return -1;
	/* TMSegment5_T20Temp: start-bit 0, length 10, endianess intel, scaling 0.1, offset 0 */
	x = i & 0x3ff;
	o->can_0x4d8_TMSegment5.TMSegment5_T20Temp = x;
	/* TMSegment5_T21Temp: start-bit 10, length 10, endianess intel, scaling 0.1, offset 0 */
	x = (i >> 10) & 0x3ff;
	o->can_0x4d8_TMSegment5.TMSegment5_T21Temp = x;
	/* TMSegment5_T22Temp: start-bit 20, length 10, endianess intel, scaling 0.1, offset 0 */
	x = (i >> 20) & 0x3ff;
	o->can_0x4d8_TMSegment5.TMSegment5_T22Temp = x;
	/* TMSegment5_T23Temp: start-bit 30, length 10, endianess intel, scaling 0.1, offset 0 */
	x = (i >> 30) & 0x3ff;
	o->can_0x4d8_TMSegment5.TMSegment5_T23Temp = x;
	o->can_0x4d8_TMSegment5_rx = 1;
	o->can_0x4d8_TMSegment5_time_stamp_rx = time_stamp;
	return 0;
}

int decode_can_0x4d8_TMSegment5_T20Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d8_TMSegment5.TMSegment5_T20Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d8_TMSegment5_T20Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d8_TMSegment5.TMSegment5_T20Temp = in;
	return 0;
}

int decode_can_0x4d8_TMSegment5_T21Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d8_TMSegment5.TMSegment5_T21Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d8_TMSegment5_T21Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d8_TMSegment5.TMSegment5_T21Temp = in;
	return 0;
}

int decode_can_0x4d8_TMSegment5_T22Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d8_TMSegment5.TMSegment5_T22Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d8_TMSegment5_T22Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d8_TMSegment5.TMSegment5_T22Temp = in;
	return 0;
}

int decode_can_0x4d8_TMSegment5_T23Temp(const can_obj_temp_monitor_dbc_h_t *o, double *out) {
	assert(o);
	assert(out);
	double rval = (double)(o->can_0x4d8_TMSegment5.TMSegment5_T23Temp);
	rval *= 0.1;
	*out = rval;
	return 0;
}

int encode_can_0x4d8_TMSegment5_T23Temp(can_obj_temp_monitor_dbc_h_t *o, double in) {
	assert(o);
	in *= 10;
	o->can_0x4d8_TMSegment5.TMSegment5_T23Temp = in;
	return 0;
}

int print_can_0x4d8_TMSegment5(const can_obj_temp_monitor_dbc_h_t *o, FILE *output) {
	assert(o);
	assert(output);
	int r = 0;
	r = print_helper(r, fprintf(output, "TMSegment5_T20Temp = (wire: %.0f)\n", (double)(o->can_0x4d8_TMSegment5.TMSegment5_T20Temp)));
	r = print_helper(r, fprintf(output, "TMSegment5_T21Temp = (wire: %.0f)\n", (double)(o->can_0x4d8_TMSegment5.TMSegment5_T21Temp)));
	r = print_helper(r, fprintf(output, "TMSegment5_T22Temp = (wire: %.0f)\n", (double)(o->can_0x4d8_TMSegment5.TMSegment5_T22Temp)));
	r = print_helper(r, fprintf(output, "TMSegment5_T23Temp = (wire: %.0f)\n", (double)(o->can_0x4d8_TMSegment5.TMSegment5_T23Temp)));
	return r;
}

int unpack_message(can_obj_temp_monitor_dbc_h_t *o, const unsigned long id, uint64_t data, uint8_t dlc, dbcc_time_stamp_t time_stamp) {
	assert(o);
	assert(id < (1ul << 29)); /* 29-bit CAN ID is largest possible */
	assert(dlc <= 8);         /* Maximum of 8 bytes in a CAN packet */
	switch (id) {
	case 0x4d2: return unpack_can_0x4d2_TMStatus(o, data, dlc, time_stamp);
	case 0x4d3: return unpack_can_0x4d3_TMSegment0(o, data, dlc, time_stamp);
	case 0x4d4: return unpack_can_0x4d4_TMSegment1(o, data, dlc, time_stamp);
	case 0x4d5: return unpack_can_0x4d5_TMSegment2(o, data, dlc, time_stamp);
	case 0x4d6: return unpack_can_0x4d6_TMSegment3(o, data, dlc, time_stamp);
	case 0x4d7: return unpack_can_0x4d7_TMSegment4(o, data, dlc, time_stamp);
	case 0x4d8: return unpack_can_0x4d8_TMSegment5(o, data, dlc, time_stamp);
	default: break; 
	}
	return -1; 
}

int pack_message(can_obj_temp_monitor_dbc_h_t *o, const unsigned long id, uint64_t *data) {
	assert(o);
	assert(id < (1ul << 29)); /* 29-bit CAN ID is largest possible */
	switch (id) {
	case 0x4d2: return pack_can_0x4d2_TMStatus(o, data);
	case 0x4d3: return pack_can_0x4d3_TMSegment0(o, data);
	case 0x4d4: return pack_can_0x4d4_TMSegment1(o, data);
	case 0x4d5: return pack_can_0x4d5_TMSegment2(o, data);
	case 0x4d6: return pack_can_0x4d6_TMSegment3(o, data);
	case 0x4d7: return pack_can_0x4d7_TMSegment4(o, data);
	case 0x4d8: return pack_can_0x4d8_TMSegment5(o, data);
	default: break; 
	}
	return -1; 
}

int print_message(const can_obj_temp_monitor_dbc_h_t *o, const unsigned long id, FILE *output) {
	assert(o);
	assert(id < (1ul << 29)); /* 29-bit CAN ID is largest possible */
	assert(output);
	switch (id) {
	case 0x4d2: return print_can_0x4d2_TMStatus(o, output);
	case 0x4d3: return print_can_0x4d3_TMSegment0(o, output);
	case 0x4d4: return print_can_0x4d4_TMSegment1(o, output);
	case 0x4d5: return print_can_0x4d5_TMSegment2(o, output);
	case 0x4d6: return print_can_0x4d6_TMSegment3(o, output);
	case 0x4d7: return print_can_0x4d7_TMSegment4(o, output);
	case 0x4d8: return print_can_0x4d8_TMSegment5(o, output);
	default: break; 
	}
	return -1; 
}

