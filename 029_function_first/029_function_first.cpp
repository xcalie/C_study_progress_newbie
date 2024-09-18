#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t

void print(void)
{
	printf("------------------\n");
}

int main(void)
{
	for (u32 index = 1; index <= 5; index++)
	{
		print();
	}

	return 0;
}