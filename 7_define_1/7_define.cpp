#include<stdio.h>

int main(void)
{
	int number_1 = 1;
	number_1 = number_1 << 31;
	printf("printf int %d\n", number_1);

	unsigned int number_2 = 1;
	number_2 <<= 31;
	printf("printf unsigned int %u\n", number_2);
	
	return 0;
}