#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t
#define d32 int32_t

int main(void)
{
	d32 number = 2;
	d32* address = &number;
	printf("%p\n", &number);
	printf("%p\n", address);
	
	printf("%d\n", number);
	printf("%d\n", *address);
	/*
		作为指针可以通过 *xxx 对指针的地址进行指向
		直接指向对应变量

		此处
			address == &number
			*address == number
	*/

	return 0;
}