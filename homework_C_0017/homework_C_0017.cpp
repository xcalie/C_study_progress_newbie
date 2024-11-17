#include<stdio.h>

int main(void)
{
	int insert;
	int num[15] = { 1,11,33,66,99,111,199,222,999 };

	scanf_s("%d", &insert);

	int index = 0;
	while (num[index] <= insert) index++;

	for (int i = 10; i > index; i--)
	{
		num[i] = num[i - 1];
	}
	num[index] = insert;

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", num[i]);
	}


	return 0;
}