#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t

int main(void)
{
	u32 number_1 = 4;
	u32 number_2 = 3,*ptr_2 = &number_1;
	u32* ptr_1 = &number_2;

	/*
		int* ptr 微软标准命名
			但本质和 int *ptr 一样
		如果 int* ptr,number; 
			则会声明一个 指针变量 和 整形变量
	*/

	printf("%p\n", ptr_1);
	printf("%p\n", ptr_2);

	return 0;
}