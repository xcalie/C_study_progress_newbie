#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t
#define d32 int32_t

int main(void)
{
	d32* ptr = NULL;
	// 空指针，不指向任何地址
	// 作为初始化

	d32 number = 0;
	ptr = &number;

	return 0;
}