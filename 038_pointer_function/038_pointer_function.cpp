#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdbool.h>

#define u32 uint32_t
#define d32 int32_t

d32 check_one_number(d32* ptr, d32 size, d32 flag);
void print_array(d32* ptr, d32 size);

int main(void)
{
	d32 number[] = {
		1,2,4,2,4,5,2
	};

	size_t size_all = sizeof(number) / sizeof(number[0]);
	printf("5 在第 %" PRId32 " 个", check_one_number(number, size_all, 5));

	print_array(number, size_all);

	return 0;
}

d32 check_one_number(d32* ptr, d32 size, d32 flag)
{
	for (d32* i = ptr; i < ptr + size; i++)
	{
		if (*i == flag)
		{
			*i = 0;
			return (d32)(i - ptr + 1);
		}
	}

	return -1;
}

void print_array(d32* ptr, d32 size)
{
	printf("\n");
	// 打印原数组
	for (d32* i = ptr; i < ptr + size; i++)
	{
		printf("%" PRId32 " ", *i);
	}
	printf("\n");
}