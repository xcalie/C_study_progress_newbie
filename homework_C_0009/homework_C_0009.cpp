#include<stdio.h>

int main(void)
{
	// 判断年份是否为闰年
	int year;
	printf("please enter a year:\n");
	scanf_s("%d", &year);
	if(year % 4 ==0 && year % 100 != 0 || year % 400 == 0)
		printf("%d是闰年", year);
	else
		printf("%d不是闰年", year);

	return 0;
}

/*实验报告

通过键入参数来判断是否是闰年
以及利用逻辑运算符来缩短判断闰年的逻辑
使得程序更简洁

*/