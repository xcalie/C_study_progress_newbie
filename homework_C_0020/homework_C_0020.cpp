#include<stdio.h>

//二分查找
int find(int* num, int targrt,int left, int right)
{
	if (left <= right)
	{
		int mid = (left + right) / 2;
		if (num[mid] == targrt)
		{
			return mid;
		}
		else if (num[mid] > targrt)
		{
			return find(num, targrt, left, mid - 1);
		}
		else
		{
			return find(num, targrt, mid + 1, right);
		}
	}
	return -1;
}

int main(void)
{
	int a[15] = { 1,2,3,4,5,16,27,28,39,42,44,52,57,64,75 };
	//输出数组
	for (int i = 0; i < 15; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	//输入一个数
	int num;
	scanf_s("%d", &num);
	
	int ptr = find(a, num, 0, 14);
	if (ptr != -1)
	{
		printf("Has found %d, its position is %d", num, ptr + 1);
		return 0;
	}

	printf("cannot find %d.", num);
	return 0;
}