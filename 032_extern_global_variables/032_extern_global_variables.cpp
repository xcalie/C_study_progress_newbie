#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t

extern void process_1(void);

//static u32 number_1 = 0;
u32 number_1 = 0;
/*
	全局变量可以进行跨函数引用
	通过关键字extern进行引用
	跨文件也可以引用函数，在之前加入extern关键字即可
*/

int main(void)
{
	process_1();

	number_1++;
	printf("%" PRIu32 "\n", number_1);

	process_1();

	return 0;
}