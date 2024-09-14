#include<stdio.h>
#include<inttypes.h>
#include<stdint.h>
#include<Windows.h>

#define u32 uint32_t

int main(void)
{
	for (u32 index = 1; index <= 5; index++)
	{
		printf("%" PRIu32 "\n", index);
		Sleep(1000);
	}


	return 0;
}