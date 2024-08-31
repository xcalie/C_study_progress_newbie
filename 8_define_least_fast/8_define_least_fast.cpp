#include<stdio.h>
#include<inttypes.h>
#include<stdint.h>

int main()
{
	int_least8_t number_1 = INT_LEAST8_MAX;
	printf("int_least8_t : %" PRIdLEAST8 "\n", number_1);
	// 至少n位

	int_fast16_t number_2 = INT_FAST16_MAX;
	printf("int_fast16_t : %" PRIdFAST16 "\n", number_2);
	//16最快对应32位

	return 0;
}