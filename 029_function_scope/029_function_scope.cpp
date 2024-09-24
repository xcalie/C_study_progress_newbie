#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t

void space_control(void)
{
	u32 number_1 = 0;
}
// number_1只在该函数中发生
// 在函数结束时，变量生命周期结束

u32 number_outside = 0;
// number_outside可以在全局生效

int main(void)
{
	u32 number_main = 0;

	return 0;
}
// number_main只在主函数中发生

/*
	
	在函数中要把void打全，即使意味着无变量引用
	对于意外引用可以进行检查
	例: u32 process(void)
		
		引用 process(32);
		如果声明的时候未写明void
		将不会报错

*/