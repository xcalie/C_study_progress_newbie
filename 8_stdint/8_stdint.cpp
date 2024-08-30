#include<stdio.h>
#include<stdint.h>

int main(void)
{
	int8_t number_1_1 = 127;
	uint8_t number_1_2 = 255;
	
	int16_t number_2_1 = 32767;
	//%hd
	uint16_t number_2_2 = 65535;
	//%hu
	
	int32_t number_3_1 = 2147483647;
	//%ld
	uint32_t number_3_2 = 4294967295;
	//%lu

	int64_t number_4_1 = 9223372036854775807LL;
	//%lld
	uint64_t number_4_2 = 18446744073709551615ULL;
	//%llu

	printf("size of int16_t : %zu byte(s)\n", sizeof(number_1_1));
	printf("size of uint16_t : %zu bytes(s)\n", sizeof(number_1_2));

	printf("size of int32_t : %zu byte(s)\n", sizeof(number_2_1));
	printf("size of uint32_2 : %zu byte(s)\n", sizeof(number_2_2));

	printf("size of int64_t : %zu byt(s)\n", sizeof(number_3_1));
	printf("size of uint64_t : %zu byt(s)\n", sizeof(number_3_2));

	return 0;
}