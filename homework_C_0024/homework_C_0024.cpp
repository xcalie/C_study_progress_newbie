#include<stdio.h>

int ComMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
int LeapMonth[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

int Dath(int year, int month, int day)
{
	int sum = 0;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		for (int i = 0; i < month - 1; i++)
		{
			sum += LeapMonth[i];
		}
	}
	else
	{
		for (int i = 0; i < month - 1; i++)
		{
			sum += ComMonth[i];
		}
	}
	sum += day;
	return sum;
}


int main(void)
{
	int year, month, day;
	scanf_s("%d %d %d", &year, &month, &day);

	printf("%d/%d/%d is the %dth day in this year.", year, month, day, Dath(year, month, day));

	return 0;
}

/*实验报告
*
*本次实验对函数进行封装，
*实现了一个函数用于计算某一天是这一年的第几天
*通过提前装载好的数组，根据是否是闰年来计算
* 
*/