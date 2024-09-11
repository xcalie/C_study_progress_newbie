#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	uint32_t number_1 = 4432;
	uint32_t number_2 = 3423;

	number_1 += number_2;
	printf("result of += : %" PRIu32 "\n", number_1);

	number_1 *= number_2;
	printf("result of *= : %" PRIu32 "\n", number_1);

	number_1 /= number_2;
	printf("result of /= : %" PRIu32 "\n", number_1);

	number_1 -= number_2;
	printf("result of -= : %" PRIu32 "\n", number_1);


	return 0;
}