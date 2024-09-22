#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t

u32 calculate(u32 long_, u32 wide)
{
	return long_ * wide;
}

int main(void)
{

	printf("%" PRIu32 "\n", calculate(32, 24));

	return 0;
}