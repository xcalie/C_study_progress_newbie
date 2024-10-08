#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<string.h>

int main(void)
{
	// strlen 可以得到字符串的长度
	// Hello\0

	char dest[50] = { 0 };
	strcpy_s(dest, 50, "Hello");

	// VS中不能直接初始化
	// 可以使用cpy通过拷贝进行赋值

	printf("%zd\n", strlen(dest));


	return 0;
}