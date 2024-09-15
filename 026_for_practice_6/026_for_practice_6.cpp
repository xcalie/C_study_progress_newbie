#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdbool.h>

#define u32 uint32_t

int main(void)
{
	for (u32 i = 1; i <= 10; i++)
	{
		for (u32 j = 1; j <= 10; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}