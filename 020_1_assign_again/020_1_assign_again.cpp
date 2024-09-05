#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	uint32_t number_1, number_2, number_3;
	//尽量避免多重定义

	number_1 = number_2 = number_3 = 33;
	//尽量避免多重赋值
	//一般最多三重赋值
	//多重赋值是从右往左依次运算

	printf("number 1 : %" PRIu32 "\n", number_1);

	return 0;
}