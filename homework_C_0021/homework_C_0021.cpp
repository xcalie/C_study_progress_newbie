#include<stdio.h>


//统计每个字符串中的字符类型及其个数
int UpperCase = 0, LowerCase = 0, Digit = 0, Space = 0, other = 0;

// 统计
void select(char str[100])
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			UpperCase++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			LowerCase++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			Digit++;
		}
		else if (str[i] == ' ')
		{
			Space++;
		}
		else
		{
			other++;
		}
	}
}


int main(void)
{
	//输入三个字符串
	char str0[100];
	char str1[100];
	char str2[100];
	printf("please input line 1:\n");
	gets_s(str0, 100);
	printf("please input line 2:\n");
	gets_s(str1, 100);
	printf("please input line 3:\n");
	gets_s(str2, 100);
	printf("\n");

	select(str0);
	select(str1);
	select(str2);

	//输出结果
	printf("upper case: %d\n", UpperCase);
	printf("lower case: %d\n", LowerCase);
	printf("digit     : %d\n", Digit);
	printf("space     : %d\n", Space);
	printf("other     : %d\n", other);


	return 0;
}