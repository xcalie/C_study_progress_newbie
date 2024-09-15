#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdbool.h>

#define u32 uint32_t

int main(void)
{
	u32 flag = 5;
	for (u32 layer = 1; layer <= flag; layer++)
	{
		for (u32 distence = layer; distence <= flag - 1; distence++)
		{
			printf("  ");
		}
		for (u32 number_l = 1; number_l <= layer; number_l++)
		{
			printf("%" PRIu32 " ", number_l);
		}
		for (u32 number_r = layer - 1; number_r >= 1; number_r--)
		{
			printf("%" PRIu32 " ", number_r);
		}
		printf("\n");
	}

	return 0;
}