#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t

/*
	静态存储对于全局变量
	赋予全局变量空间,在结束前保留空间
	不进行释放
*/

/*
	全局变量会自动初始化存储在栈中
	但手动初始化避免未知错误为上
*/

u32 number_1;

void process(void)
{
	number_1++;
}
// 全局变量可以在任何函数中调用
int main(void)
{

	number_1++;
	printf("%" PRIu32 "", number_1);

	return 0;
}