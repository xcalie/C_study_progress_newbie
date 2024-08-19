#pragma warning(disable:4996)

#include<stdio.h>

int main(void)
{
	int number_1 = 245;
	
	//十进制
	printf("Binary printf: %d\n",number_1);
	//八进制
	printf("Octal printf: %o\n", number_1);
	//十六进制(小写)
	printf("Hexadeciam (lowercase): %x\n", number_1);
	//十六进制（大写）
	printf("Hexadeciam (uppercase): %X\n", number_1);
	//十六进制带井号
	printf("Hexadeciam with '#' (uppercase): %#X\n", number_1);

	int number_2 = 123;

	//右对齐
	printf("format with '10': %10d\n",number_2);
	//'-'标志符，左对齐
	printf("format with '-10': %-10d|appear_there\n", number_2);
	//'0'占位0
	printf("format with '0': %010d\n", number_2);

	return 0;
}