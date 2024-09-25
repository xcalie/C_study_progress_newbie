#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t


void process_1(void);

int main(void)
{
	process_1();
	process_1();
	process_1();

	return 0;
}

void process_1(void)
{
	static u32 number_1 = 0;
	// 局部定义static变量，只会定义一次，后续运行不会再运行
	// 可以通过debug追踪
	// 作用域依然只会在该函数中作用
	// 其他函数（包括主函数）调用时依然会保留
	number_1++;
	printf("%" PRIu32 "\n", number_1);
}
