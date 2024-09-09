#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	int32_t number_1 = 13;
	// 00001101
	int32_t number_2 = 9;
	// 00001001

	printf("result of or : %" PRId32 "", number_1 | number_2);
	// 00001101 : 13

	return 0;
}