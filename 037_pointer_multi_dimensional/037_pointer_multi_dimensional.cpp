#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t
#define d32 int32_t

int main(void)
{
	d32 number[3][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};


	d32(*ptr)[5] = number;
	// (*pointer) 是一个指针指向5个int类型的指针
	// 对应二维数组number的第一行

	size_t size = sizeof(number) / sizeof(number[0][0]);
	printf("%" PRId64 "\n\n", size);

	printf("%p\n", ptr[0]);
	printf("%" PRId32 "\n\n", *ptr[0]);

	printf("%p\n", ptr[1]);
	printf("%" PRId32 "\n\n", *ptr[1]);

	printf("%p\n", ptr[2]);
	printf("%" PRId32 "\n\n", *ptr[2]);

	printf("%" PRId32 "\n", ptr[2][3]);
	// 访问二维数组不需要*进行访问

	return 0;
}