#pragma warning(disable:4996)

#include<stdio.h>

int main(void)
{
	int number = 0;
	int input_1;

	scanf("%d", &input_1);

	bool flag;
	if (input_1 <= 10)
	{
		flag = 0;
	}
	else
	{
		flag = 1;
	}

	if (flag)
	{
		printf("bigger than 10!\n");
	}
	else
	{
		printf("smaller than 10!\n");
	}

	return 0;
}