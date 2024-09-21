#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t

u32 number_outside = 10;

u32 print(u32 number_inside);

int main(void)
{
	
	number_outside++;
	printf("%" PRIu32 "\n", number_outside);
	printf("%" PRIu32 "\n", print(number_outside));
	// 在vs中提示，只会有在对应函数中能够调用的变量
	// 全局变量 不论在哪个行数均能调用
	// 局部变量 只能在对应函数内声明调用

	return 0;
}


u32 print(u32 number_inside)
{
	number_inside++;
	number_outside++;

	return number_inside;
}