#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	int32_t number_1 = 103;
	int32_t number_2 = 234;
	
	int32_t result;

	result = number_1 + number_2 * (number_2 - number_1) << 1 == 342 && 68 == 34 * 2;
	printf("%" PRId32 "", result);

	return 0;
}