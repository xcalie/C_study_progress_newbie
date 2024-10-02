#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t
#define d32 int32_t

typedef struct {
	d32 day;
	d32 month;
	d32 year;
}Date;

void fix_1(Date* object);
void fix_2(Date* object);

int main(void)
{
	Date one_day = { 4, 5, 2024 };
	printf("%" PRId32 "-%" PRId32 "-%" PRId32 "\n", one_day.year, one_day.month, one_day.day);

	fix_1(&one_day);

	printf("%" PRId32 "-%" PRId32 "-%" PRId32 "\n", one_day.year, one_day.month, one_day.day);

	fix_2(&one_day);

	printf("%" PRId32 "-%" PRId32 "-%" PRId32 "\n", one_day.year, one_day.month, one_day.day);

	return 0;
}


// 两种指针访问方式
void fix_1(Date* object) {
	(object->day)++;
	(object->month)++;
	(object->year)++;
}

void fix_2(Date* object) {
	(*object).day++;
	(*object).month++;
	(*object).year++;
}