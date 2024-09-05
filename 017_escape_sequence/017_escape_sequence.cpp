#include<stdio.h>

int main(void)
{
	printf("第一行文本\n\t");
	printf("第二行文本，由上一行赋予缩进\n\t\t");
	printf("第三行文本，由上一行赋予两次缩进\n");

	printf("\\");

	// 清除屏幕
	//printf("\033[2J");

	// 将光标放在第三行第三列
	//printf("\033[%d;%dH", 3, 3);

	return 0;
}