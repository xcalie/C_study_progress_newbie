#include<stdio.h>
#include<stdint.h>

int main(void)
{
	int32_t number_1 = INT32_MAX;
	printf("int32_t max : %d\n", number_1);

	uint32_t number2 = UINT32_MAX;
	printf("uint32_t max : %u\n", number2);

	return 0;
}