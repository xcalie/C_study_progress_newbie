#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	uint8_t status = 0b00011001;
	// 25
	printf("orgin of number : %" PRIu32 "\n", status);

	status = ~status;
	// 11100110
	// 230
	printf("changed of number : %" PRIu32 "\n", status);


	return 0;
}