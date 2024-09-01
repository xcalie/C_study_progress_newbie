#include<stdio.h>
#include<stdint.h>

int main(void)
{
	// Type conversion 类型转换
	// 无符号到有符号强制转换
	uint32_t number_max = UINT32_MAX;
	int32_t number_small_1 = number_max;
	int32_t number_small_2 = (int32_t)number_max;

	printf("unit32_t: %u\n", number_max);
	printf("conversion to int32_t: %d\n\n", number_small_2);

	// 大范围到小范围
	int64_t numberlong = INT32_MAX;
	int16_t numbershort = (int16_t)numberlong;

	printf("int64_t : %lld\n", numberlong);
	printf("conversion to int16_t: %hd\n\n", numbershort);

	// 小范围转换为大范围（扩展负数）
	int32_t number_int = -1;
	uint32_t number_uint = (uint32_t)number_int;

	printf("int32_t : %d\n", number_int);
	printf("uint32_t : %u\n\n", number_uint);

	// 正常转换
	int32_t numbersmall = 32767;
	int64_t numbermax = (int64_t)numbersmall;
	uint16_t numberspecial = (uint16_t)numbersmall;

	printf("int32_t : %d\n", numbersmall);
	printf("int64_t : %lld\n", numbermax);
	printf("uint16_t : %hu\n", numberspecial);

	return 0;
}