#include<stdio.h>

int main(void)
{
	// 输入字符如果为大写转换为小写，否则不变

	char ch;
	scanf_s("%c", &ch);
	if(ch >= 'A' && ch <= 'Z') ch += 32;  //过ASCII码转换为大写
	printf("%c", ch);


	return 0;
}
/*实验报告
	
	本次实验通过ASCII码的转换，将小写字母转换为大写字母。
	以及对字符的输入输出处理

*/