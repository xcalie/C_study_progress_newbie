#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t
#define d32 int32_t

int main(void)
{
	d32 number[] = {
		54,45,32,12,128,89,456
	};

	// size_t 专门用于表示大小类型的 在Windows中表示为int64
	size_t size = sizeof(number) / sizeof(number[0]);
	d32* ptr = number;

	for (size_t index = 0; index < size; ++index)
	{
		printf("%" PRId32 " ", *(ptr + index));
	}
	printf("\n");

	for (size_t index = 0; index < size; ++index)
	{
		*(ptr + index) += 5;
	}
	printf("\n");

	for (size_t index = 0; index < size; ++index)
	{
		printf("%" PRId32 " ", *(ptr + index));
	}
	printf("\n");

	return 0;
}