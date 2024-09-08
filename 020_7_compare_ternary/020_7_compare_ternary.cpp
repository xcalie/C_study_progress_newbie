#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	int32_t number_1 = 3232;
	int32_t number_2 = 4344;
	printf("number 1 : %" PRId32 " , number 2 : %" PRId32 "\n", number_1, number_2);

	bool greater = number_1 > number_2;
	printf("number 1 > number 2 ? : %s", greater ? "true" : "false");

	return 0;
}