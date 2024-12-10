#include <stdio.h>

void int_to_string(int num, char* str, int* index)
{
    if (num == 0)
    {
        return;
    }
    int_to_string(num / 10, str, index);
    str[*index] = num % 10 + '0';
	*index += 1;
}

int main(void)
{
    int num;
    scanf_s("%d", &num);    

    int index = 0;
    char str[100];
    int_to_string(num, str, &index);

	printf("output: ");
	for (int i = 0; i < index; i++)
	{
		printf("%c ", str[i]);
	}
}

/*实验报告
*
* 本次实验的目的是实现一个将整数转换为字符串的函数，通过递归的方式实现。
* 利用递归的思想，将整数除以10，直到整数为0，然后将余数转换为字符，存入字符数组中。
* 使用指针的方式，将字符数组的下标传入函数，实现字符数组的自增。
* 
*/