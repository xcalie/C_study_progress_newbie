#include<stdio.h>
#include <stdlib.h>
#include <string.h>

char* copystrFromOrgin(char* str, int adr);
char* copystrIntoNew(char* str, int adr);

int main(void)
{
	printf("input string:");
	char str[100];
	gets_s(str, 100);

	printf("which character that begin to copy?");
	int adr;
	scanf_s("%d", &adr);

	char* strNew1;
    strNew1 = copystrFromOrgin(str, adr);

	printf("result:%s\n", strNew1);

	char* strNew2;
	strNew2 = copystrIntoNew(str, adr);

	printf("result:%s\n", strNew2);

	return 0;
}

//仅在原字符串的基础上取子串的指针
char* copystrFromOrgin(char* str, int adr)
{
	char* strNew;
	strNew = str + adr;
	return strNew;
}

//将一个新的字符串，将原字符串的子串复制到新字符串中
char* copystrIntoNew(char* str, int adr)
{
	char* strNew = calloc(100, sizeof(char));

	for (int i = 0; i < strlen(str); i++)
	{
		strNew[i] = str[adr + i];
	}
	return strNew;
}

/*实验报告
* 
* 本次实验是将一个字符串的子串复制到一个新的字符串中
* 通过copystrFromOrgin函数，仅在原字符串的基础上取子串的指针
* 通过copystrIntoNew函数，将一个新的字符串，将原字符串的子串复制到新字符串中
* 最后封装为一个函数
* 
*/