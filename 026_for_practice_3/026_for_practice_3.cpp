#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t

int main(void)
{
	u32 result = 1;
	for (u32 index = 1; index <= 10; index++)
	{
		result *= index;
	}
	printf("result of 10! : %" PRIu32 "", result);

	return 0;
}