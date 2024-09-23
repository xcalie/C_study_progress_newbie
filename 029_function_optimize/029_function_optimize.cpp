#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t

bool judge_leap_year(u32 year);

int main(void)
{
	u32 number_year;
	scanf_s("%" SCNu32 "", &number_year);

	printf("%s\n", judge_leap_year(number_year) ? "是润年" : "不是闰年");
	

	return 0;
}

bool judge_leap_year(u32 year)
{
	return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}