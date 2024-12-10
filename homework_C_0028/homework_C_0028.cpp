#include<stdio.h>


void SortNum(int* num)
{
	int size = sizeof(num) / sizeof(num[0]);

	for (int i = 0; i < size; i++)
	{
		for (int j = size; j > i; j--)
		{
			if (num[j - 1] > num[j])
			{
				int t = num[j - 1];
				num[j - 1] = num[j];
				num[j] = t;
			}
		}
	}
}


int main(void)
{
	puts("please enter three numbers:");
	int num[3];

	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d,", &num[i]);
	}

	SortNum(num);

	printf("The order is:");
	for (int i = 0; i < 3; i++)
	{
		printf("%d", num[i]);
		
		if (i < 2)
		{
			printf(",");
		}
	}


	return 0;
}

/**实验报告
*
* 本次实验通过指针传入函数，实现对三个数的排序
* 再通过指针传出函数，将排序后的数输出
* 实现对排序的功能封装
* 
*/