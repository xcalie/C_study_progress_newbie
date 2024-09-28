#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<math.h>

#define u32 uint32_t
#define d32 int32_t

int main(void)
{
	d32 number[] = {
		54,45,32,12,128,89,456,366
	};

	d32 size = sizeof(number) / sizeof(number[0]);

	d32* ptr_start = &number[0];
	d32* ptr_end = &number[size - 1];

	puts("接下来输出位置在前的指针");
	if (ptr_start > ptr_end)
	{
		puts("ptr_end 在前面");
	}
	else
	{
		puts("ptr_start 在前面");
	}
	/*
		指针之间可以直接比较大小
		参与比较的是指针指向的位置先后
	*/

	/*
		指针可以直接进行遍历
		通过指针指向对应位置的元素
	*/
	for (d32* index = ptr_start; index <= ptr_end; index++)
	{
		printf("%" PRId32 " ", *index);
	}
	printf("\n");
	// 正序

	for (d32* index = ptr_end; index >= ptr_start; index--)
	{
		printf("%" PRId32 " ", *index);
	}
	printf("\n");
	// 倒序


	printf("数组中第一个元素:%" PRId32 "\n", *ptr_start);
	printf("数组中第五个元素:%" PRId32 "\n", *(ptr_start + 5));
	printf("数组中第四个元素（从第五个回退）:%" PRId32 "\n", *(ptr_start + 5 - 1));
	

	return 0;
}