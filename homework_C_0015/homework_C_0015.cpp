#include<stdio.h>

int main(void)
{
	int c[10];
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d ", &c[i]);
	}

	printf("逆序输出");
	for (int i = 9; i >= 0; i--)
	{
		printf("%d ", c[i]);
	}

	return 0;
}