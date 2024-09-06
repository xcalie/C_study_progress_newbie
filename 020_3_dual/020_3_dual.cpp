#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	int32_t number_1 = 1;
	int32_t number_2 = 3;

	int32_t number_3 = number_1 + number_2;
	// 二元

	int32_t number_4 = -number_1;
	// 一元

	printf("one : %" PRId32 "\n", number_4);
	printf("two : %" PRId32 "\n", number_3);

	return 0;
}