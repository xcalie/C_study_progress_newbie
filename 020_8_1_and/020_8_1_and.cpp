#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	int32_t number_1 = 5;
	// 000101
	
	int32_t number_2 = 3;
	// 000011

	printf("result of and : %" PRId32 "", number_1 & number_2);
	// 000001


	return 0;
}