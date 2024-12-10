#include <stdio.h>
#include <string.h>

void inverse(char* ch)
{
    int size = strlen(ch); // 获取字符串的实际长度
    // 倒置
    for (int i = 0; i < size / 2; i++)
    {
        char temp = ch[i];
        ch[i] = ch[size - i - 1];
        ch[size - i - 1] = temp;
    }
}

int main(void)
{
    char ch[1000];
    gets_s(ch, 1000);
    inverse(ch);
    printf("inverse string:%s", ch);

    return 0;
}

/*实验报告
* 
* 本次实验是要求输入一个字符串，然后将字符串倒置输出。
* 通过使用了一个函数inverse，这个函数的作用是将字符串倒置。
* 利用strlen函数获取字符串的实际长度，然后通过for循环将字符串倒置。
* 
*/