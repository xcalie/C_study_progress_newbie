#include<stdio.h>

int main(void)
{
	long number_1 = 1;
	number_1 <<= 31;
	printf("printf long %ld\n", number_1);

	unsigned long number_3 = 1;
	number_3 <<= 31;
	printf("printf nusigned long %lu\n", number_3);

	long long number_2 = 1;
	number_2 <<= 63;
	printf("printf long long %lld\n", number_2);

	unsigned long long number_4 = 1;
	number_4 <<= 63;
	printf("printf unsigned long long %llu", number_4);

	return 0;
}