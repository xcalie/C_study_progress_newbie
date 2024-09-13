#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	uint32_t number_1 = 123;
	
	if (number_1 > 2000)
	{
		printf("%" PRIu32 "", number_1);
		return 0;
	}
	
	printf("the number is not bigger than 2000");

	return 0;
}