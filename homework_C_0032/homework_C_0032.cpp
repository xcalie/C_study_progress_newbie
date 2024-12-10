#include<stdio.h>


void SortWithLetter(char* str[]);


int main(void)
{
	const char* nameO[] = { "Follow me","BASIC","Great Wall","FORTRAN","Computer design" };
	char* name[5];
	for (int i = 0; i < 5; i++)
	{
		name[i] = (char*)nameO[i];
	}
	SortWithLetter(name);
	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", name[i]);
	}
	return 0;
}

//按字母顺序排列字符串数组
void SortWithLetter(char* str[])
{
	char* temp;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (*str[i] > *str[j])
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
}

/* 实验报告
*
* 本次实验的目的是按字母顺序排列字符串数组
* 通过调用SortWithLetter函数，实现字符串数组的排序
* 实现原理是通过双重循环，比较字符串数组中的字符串的首字母，进行排序
* 最后封装为一个函数
* 
*/