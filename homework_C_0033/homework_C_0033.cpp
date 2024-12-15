#include<stdio.h>

typedef struct Date
{
	int day;
	int month;
	int year;
} Date;

int CommonYear[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
int LeapYear[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

int nowNumDay(Date date)
{
	int num = 0;
	if (date.year % 4 == 0 && date.year % 100 != 0 || date.year % 400 == 0)
	{
		for (int i = 0; i < date.month - 1; i++)
		{
			num += LeapYear[i];
		}
	}
	else
	{
		for (int i = 0; i < date.month - 1; i++)
		{
			num += CommonYear[i];
		}
	}
	num += date.day;
	return num;
}

int main(void)
{
	Date date;
	printf("input year,month,day:");
	scanf_s("%d, %d, %d", &date.year, &date.month, &date.day);

	printf("%d/%d is the %d day in %d.", date.month, date.day, nowNumDay(date), date.year);
	return 0;
}

/*实验报告
* 
* 本次实验主要是通过输入年月日，计算出该日期是该年的第几天
* 利用提前输入的月份天数数组，通过循环计算出该日期是该年的第几天
* 通过结构体Date来存储年月日
* 最后封装成函数，通过函数调用来计算
*
*/