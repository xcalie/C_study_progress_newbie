#include<stdio.h>

int Mutiple(int num)
{
	if (num == 0)
	{
		return 1;
	}
	return num * Mutiple(num - 1);
}

int main(void)
{
	int num;
	scanf_s("%d", &num);
	printf("%d!=%d", num, Mutiple(num));
	return 0;
}

/*实验报告
* 
* 本次实验的目的是实现一个递归函数，计算阶乘。
* 通过递归的思想，将整数递减，直到整数为0，然后返回1。
* 递归函数返回整数乘以递归函数自身。
* 
*/