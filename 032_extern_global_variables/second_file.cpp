#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t

extern u32 number_1;

void process_1(void)
{
	number_1++;
	printf("%" PRIu32 "\n", number_1);
}