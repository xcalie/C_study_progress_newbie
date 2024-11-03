#include<stdio.h>
int main(void)
{
	int ans = 1;
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		ans *= i;
	}

	printf("%d", ans);

	return 0;
}