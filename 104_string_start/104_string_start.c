#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<string.h>



int main(void)
{

	char* str_pointer = "Hallo";
	// c专属写法
	const char str_const = "Hallo";
	// 本质两种效果一致 不能修改

	char str_common_1[] = "Hallo";
	// H a l l o \0 一共6个字符，如果定义为更多用 \0 填充
	// 字符串最后会随着 \0 作为终止符号
	printf("%s\n", str_common_1);

	char str_common_2[5] = "Hallo";
	// 此处由于空间限制 失去了\0 发生溢出，应该尽量避免显式定义
	printf("%s\n", str_common_2);
	// 烫烫烫
	// 输入相关在后面sscanf补充

	return 0;
}