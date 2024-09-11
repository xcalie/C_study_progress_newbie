#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	int32_t number_1 = 42;
	int32_t number_2 = 34;
	int32_t number_3 = 8;

	if (number_1 > number_2 && number_1 == number_2 + number_3)
	{
		printf("number 1 > number 2 and number 1 == number 2 + number 3\n");
	}
	if (number_1 < number_2 || number_1 == number_2 + number_3)
	{
		printf("number 1 > number 2 or number 1 == number 2 + number 2\n");
	}

	return 0;
}