#include<stdio.h>

int main(void)
{
	int a[2][3] = { {1,2,3},{4,5,6} };

	printf("数组a:\n");
	for (int i = 0; i < 2; i++)
	{
		printf("%5d%5d%5d\n",a[i][0], a[i][1], a[i][2]);
	}

	printf("数组b:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%5d%5d\n", a[0][i], a[1][i]);
	}

	return 0;
}