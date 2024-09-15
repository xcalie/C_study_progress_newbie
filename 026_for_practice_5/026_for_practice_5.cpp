#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t

int main(void)
{
	for (u32 i = 1; i <= 9; i++)
	{
		for (u32 j = 1; j <= i; j++)
		{
			printf("%" PRIu32 "*%" PRIu32 "==%" PRIu32 " ", i, j ,i*j);
		}
		printf("\n");
	}

	return 0;
}