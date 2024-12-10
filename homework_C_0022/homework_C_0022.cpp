#include<stdio.h>

void Change(int* arr[])
{
	//对二维数组进行转置
	for (int i = 0; i < 3; i++)
	{
		for (int j = i; j < 3; j++)
		{
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
}

int main(void)
{
	int a[9];

	for (int i = 0; i < 9; i++)
	{
		scanf_s(" %d", &a[i]);
	}
	
	int arr[3][3];	

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = a[i * 3 + j];
		}
	}

	// 定义一个指针数组，存放二维数组的行指针
	int* ptr[3];
	for (int i = 0; i < 3; i++)
	{
		ptr[i] = arr[i];
	}

	// 打印转置前的数组
	printf("original array:\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}

	Change(ptr);
	
	// 打印转置后的数组
	printf("convert array:\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
}


/*实验报告
* 
* 1.本次实验的目的是学习指针数组的使用方法，通过指针数组实现二维数组的转置。
* 2.实验中遇到的问题是，对于二维数组的转置，需要使用指针数组，而不是直接对二维数组进行操作。
* 
*/