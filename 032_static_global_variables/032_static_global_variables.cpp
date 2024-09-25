#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t

extern void process_1(void);

//static u32 number_1 = 0;
u32 number_1 = 0;

static u32 number_2 = 0;
// 带上static的全局变量不会离开此文件
// 可以避免各个文件间的串调用
// 在其他文件中使用extern不能调用到该函数或者变量

int main(void)
{
	process_1();

	number_1++;
	printf("%" PRIu32 "\n", number_1);

	process_1();

	return 0;
}