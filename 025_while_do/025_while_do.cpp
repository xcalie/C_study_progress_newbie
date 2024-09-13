#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdbool.h>

int main(void)
{
	uint32_t number = 1;
	const uint32_t INDEX = 1;

	while (number < INDEX)
	{
		number++;
		printf("%" PRIu32 "\n", number);
	}

	number = 1;
	do
	{
		number++;
		printf("%" PRIu32 "\n", number);
	} while (number < INDEX);
	// do while至少会执行一次循环体

	return 0;
}