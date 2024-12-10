#include<stdio.h>

void input();
void delChar(char* str, char c);

int main(void)
{
	printf("请输入字符串:");
	char str[100];
	gets_s(str, 100);

	printf("请输入要删除的字符:");
	char c;
	scanf_s("%c", &c);

	delChar(str, c);

	printf("%s", str);

	return 0;
}


void delChar(char* str, char c)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			for (int j = i; str[j] != '\0'; j++)
			{
				str[j] = str[j + 1];
			}
		}
		else
		{
			i++;
		}
	}
}

/*实验报告
* 
* 本次实验通过指针传入函数，实现对字符串中的字符删除
* 再通过指针传出函数，将删除后的字符串输出
* 实现对删除字符的功能封装
* 
*/