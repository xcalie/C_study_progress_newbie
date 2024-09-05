#include<stdio.h>

int main(void)
{
	/*
		char 类型
			32号以前 为控制字符
			32从空格开始
			48 为 0 
			64 为 @
			65 为 A
			91 ~ 96 为  [  \  ]  ^  _  ' 共6位
			97 为 a
	*/
	
	//由于有整形的数字作为标识 故char 类型可以作为整形表示(int8_t)

	char char_1 = 'a';
	printf("char 1 : %c\n", char_1);

	char char_2 = 'A';
	printf("char 2 : %c\n", char_2);

	int number_1 = 65;
	printf("char 3 : %c\n", number_1);

	return 0;
}