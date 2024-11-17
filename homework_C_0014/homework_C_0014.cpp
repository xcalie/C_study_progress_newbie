#include<stdio.h>

void printC(int num,char obj, bool flag)
{
	if (flag)
	{
		for (int i = 0; i < num * 2 - 1; i++)
		{
			printf("%c", obj);
		}
	}
	else
	{
		for (int i = 0; i < num; i++)
		{
			printf("%c", obj);
		}
	}
}


void print(int floor, int index, bool dirt, bool flag)
{
	if (index > floor)
	{
		return;
	}
	if (dirt)
	{
		printC(floor - index, ' ', 0);
		if (flag)
		{
			printC(index, '*', 1);
		}
		else
		{
			printC(index, (char)((int)'0' + index),1);
		}
		printf("\n");
		print(floor, index + 1, dirt, flag);
	}
	else
	{
		print(floor, index + 1, dirt, flag);
		printC(floor - index, ' ', 0);
		if (flag)
		{
			printC(index, '*', 1);
		}
		else
		{
			printC(index, (char)((int)'0' + index), 1);
		}
		printf("\n");
	}
}


int main(void)
{
	int n = 0;
	scanf_s("%d", &n);
	print(n, 1, 0, 0);
	print(n, 2, 1, 0);

	return 0;
}