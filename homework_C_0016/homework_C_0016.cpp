#include<stdio.h>

int main(void)
{
	int num[15];

	for (int i = 0; i < 10; i++)
	{
		scanf_s(" %d", &num[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 9; j > i; j--)
		{
			if (num[j - 1] > num[j])
			{
				int t = num[j - 1];
				num[j - 1] = num[j];
				num[j] = t;
			}
		}
	}

	printf("顺序输出:");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", num[i]);
	}


	return 0;
}