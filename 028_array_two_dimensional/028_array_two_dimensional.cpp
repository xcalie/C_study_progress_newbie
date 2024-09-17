#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define d32 int32_t

int main(void)
{
	d32 number[3][3] = {
		{0,1,2},
		{0,1,2},
		{0,1,2}
	};
	
	for (d32 i = 0; i < 3; i++)
	{
		for (d32 j = 0; j < 3; j++)
		{
			printf("%" PRIu32 " ", number[i][j]);
		}
		printf("\n");
	}

	return 0;
}