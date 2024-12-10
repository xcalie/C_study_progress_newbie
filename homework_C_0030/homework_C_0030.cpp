#include <cstring>
#include<stdio.h>

bool Judge(char* str) //判断是否是回文字符串
{
	int i = 0;
	int j = strlen(str) - 1;
	while (i < j)
	{
		if (str[i] != str[j])
		{
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int main(void)
{
	puts("please input a string:");
	char str[100];
	gets_s(str, 100);

	if (Judge(str))
	{
		puts("是回文");
	}
	else
	{
		puts("不是回文");
	}

	

	return 0;
}

/*实验报告
* 
* 本次实验的目的是判断一个字符串是否是回文字符串
* 通过调用Judge函数，判断字符串是否是回文字符串
* 利用双索引，从字符串的两端向中间遍历，判断是否相等
* 最后封装为一个函数
* 
*/