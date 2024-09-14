#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t

int main(void)
{
	for (u32 index = 5; index > 0; index--)
	{
		printf("%" PRIu32 "\n", index);
	}

	return 0;
}