#include<stdio.h>
int main(void)
{

	for (int i = 1; i <= 30; i++)
	{
		if (i % 3 != 0)
		{
			printf("%d ", i);
		}
	}

	return 0;
}