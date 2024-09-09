#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	int32_t number_1 = 13;
	// 00001101
	int32_t number_2 = 9;
	// 00001001
	
	printf("result of nor : %" PRId32 "", number_1 ^ number_2);
	// 00000100 : 4

	return 0;
}