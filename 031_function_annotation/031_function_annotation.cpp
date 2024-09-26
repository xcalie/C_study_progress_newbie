#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t
#define d32 int32_t

/**
*	这个是标准函数注释的案例
*	在每一行都有一个*
*	会出现第一个有两个**的情况
*/
void process(void)
{
	printf("Hallo world\n");
}

int main(void)
{
	process();

	return 0;
}