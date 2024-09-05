#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	/*
		数据对象
		左值 lvalue
		右值 rvalue
		运算符
	*/

	uint32_t number_1 = 234;
	uint32_t number_2 = 422;

	uint32_t number_3 = number_1 + number_2;

	printf("add result : %" PRIu32 "\n", number_3);

	return 0;
}