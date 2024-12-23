#include<stdio.h>
#include<string.h>

char news[105];
char a[100];

int main(void)
{
    int index;
    char x;

	gets_s(a, 100);
    scanf_s("%d %c", &index, &x);

    int len = strlen(a);

    for (int i = len - 1; i >= index; i--)
        news[i + 1] = a[i];

    news[index] = x;

    for (int i = 0; i < index; i++)
        news[i] = a[i];


    printf("%s", news);

    return 0;
}