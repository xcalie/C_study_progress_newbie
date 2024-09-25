#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t

// 作用域，flag只存在于该函数中，离开后被释放
void process(u32 flag)
{
	u32 number_2 = 0;
}

int main(void)
{
	u32 number_1 = 0;

	// for 循环中的也是仅在循环中 存在，出去后被释放
	for (u32 index = 1; index <= 10; index++)
	{
		number_1++;
	}

	if (number_1 == 10)
	{
		// if 中的变量也存在作用域，出去后生命周期结束，释放
		u32 number_3 = 1;
	}

	return 0;
}