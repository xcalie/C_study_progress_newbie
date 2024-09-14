#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t

int main(void)
{
	u32 result = 0;

	for (u32 index = 1; index <= 10; index++) {
		result += index * index;
	}
	printf("result of quadratic with add : %" PRIu32 "\n", result);

	return 0;
}