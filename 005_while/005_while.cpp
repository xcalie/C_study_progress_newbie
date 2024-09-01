#pragma warning(disable:4996)

#include<stdio.h>

int main(void)
{
	int number = 1;
	int i = 1;

	scanf("%d", &number);

	while (i <= 10)
	{
		i++;
		number++;
	}

	printf("%d", number);

	return 0;
}