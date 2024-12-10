#include <cstdlib>
#include<stdio.h>

// 寻找可以被7整除和被11整除的数但是不能同时被7和11整除的数
int findNum(int left, int right, int* res)
{
	int count = 0;
	for (int i = left; i <= right; i++)
	{
		if (i % 7 == 0 && i % 11 == 0)
		{
			continue;
		}
		if (i % 7 == 0 || i % 11 == 0)
		{
			res[count++] = i;
		}
	}
	//返回个数
	return count;
}


int main(void)
{
	int left, right;
	scanf_s("%d %d", &left, &right);

	int* res = (int*)malloc(sizeof(int) * (right - left + 1));

    int num = findNum(left, right, res);

	for (int i = 0; i < num; i++)
	{
		printf("%5d", res[i]);
	}

	return 0;
}


/*实验报告
*
*本次实验对函数进行封装，实现了一个函数findNum，
*该函数的功能是寻找[left,right]区间内可以被7整除和被11整除的数但是不能同时被7和11整除的数
*
*/