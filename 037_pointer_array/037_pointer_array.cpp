#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t
#define d32 int32_t

int main(void)
{
	d32 number_1[] = {
		1,2,3,4,5
	};
	d32 number_2[] = {
		1,2,3,4,5
	};
	d32 number_3[] = {
		1,2,3,4,5
	};

	d32* ptr[3] = {number_1, number_2, number_3};
	// 指针数组可以存储一系列地址
	// 数组的指针指向第一个，地址只一个，不需要&

	d32 size_all[] = {
		sizeof(number_1) / sizeof(number_1[0]),
		sizeof(number_2) / sizeof(number_2[0]),
		sizeof(number_3) / sizeof(number_3[0])
	};

	for (d32 i = 0; i < 3 ; i++)
	{
		for (d32* j = ptr[i]; j < ptr[i] + size_all[i]; j++)
		{
			printf("%" PRId32 " ", *j);
		}
		printf("\n");
	}

	return 0;
}