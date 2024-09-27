#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t


int main(void)
{
	register u32 number = 0;
	/*
		寄存器声明可以使局部变量进入寄存器
		计算速度可以更快
		但是该声明只为建议，实际使用由编译器决定
	*/

	return 0;
}