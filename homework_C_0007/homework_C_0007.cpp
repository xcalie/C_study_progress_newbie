#include<stdio.h>

int main(void)
{
	// 输入一个整数，判断是否能被3整除

	int num;

	scanf_s("%d", &num);

	// 判断是否能被3整除
	if(num % 3 == 0)
		printf("Right!\n");
	else
		printf("False!\n");


	return 0;
}

/*实验报告

本次实验通过运算符来对输入的数字进行判断
判断是否能被3整除
运用了if语句


*/