#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t

/*
	局部变量有自动存储期
	和作用域同时存在
	退出作用域时空间释放
*/

/*
	由于局部变量无初始化
	将会导致空间的占用,最终导致栈溢出，后果严重
*/

// 此处警告，既局部变量无初始化
void process(void)
{
	u32 number_3;
	printf("%" PRIu32 "\n", number_3);

	u32 number_4 = 1;
	printf("%" PRIu32 "\n", number_4);
}

// 主函数内变量也无初始化
int main(void)
{
	u32 number_1;
	printf("%" PRIu32 "\n", number_1);

	u32 number_2 = 1;
	printf("%" PRIu32 "\n", number_2);

	return 0;
}