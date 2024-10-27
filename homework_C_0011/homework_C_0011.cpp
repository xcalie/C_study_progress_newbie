#include<stdio.h>
#include<string.h>

int main(void)
{
	int len = 0;
	int n = 0;
	int s[100] = { 0 };
	scanf_s("%d", &n);
	while (n > 0)
	{
		s[len] = n % 10;
		len++;
		n = n / 10;
	}

	printf("你输入的是");
	switch (len)
	{
	case 0:
		printf("零");
		break;
	case 1:
		printf("一");
		break;
	case 2:
		printf("二");
		break;
	case 3:
		printf("三");
		break;
	case 4:
		printf("四");
		break;
	case 5:
		printf("五");
		break;
	}
	printf("位数\n");

	for (int i = len - 1; i >= 0; i--)
	{
		printf("第");
		switch (len - i)
		{
		case 0:
			printf("零");
			break;
		case 1:
			printf("一");
			break;
		case 2:
			printf("二");
			break;
		case 3:
			printf("三");
			break;
		case 4:
			printf("四");
			break;
		case 5:
			printf("五");
			break;
		}
		printf("位数字:%d\n", s[i]);
	}

	for (int i = 0; i <= len - 1; i++)
	{
		printf("%d", s[i]);
	}

	return 0;
}