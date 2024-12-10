#include<stdio.h>

int main(void)
{
	//打印杨辉三角

	int n = 10;
	int a[10][10] = { 0 };

	for (int i = 0; i < n; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}

	for (int i = 2; i < n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%6d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}

/*实验报告
* 
* 通过本次实验，利用二维数组的特性，打印出了杨辉三角。
* 杨辉三角的特点是，第一行只有一个数1
* 以下每行的每个数是上一行的左上方和右上方的数之和。
* 
*/