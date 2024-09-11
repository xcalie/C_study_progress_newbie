#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	int32_t number_1 = 1, number_2 = 0, number_3 = 0;
	
	number_1 = (number_2, number_3 - 1);
	printf("%" PRId32 "\n", number_1);

	number_1 = (number_3, number_2 + 1);
	printf("%" PRId32 "\n", number_1);

	number_1 = (number_2 += 2, number_3 += 5);
	printf("%" PRId32 "\n", number_1);

	return 0;
}