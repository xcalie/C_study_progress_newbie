#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdbool.h>

#define u32 uint32_t

int main(void)
{
	const u32 total_student = 5;
	u32 grades_total[total_student] = { 90, 94, 59, 39, 93 };
	u32 grades_all = 0;
	double average;

	for (u32 index = 0; index < total_student; index++)
	{
		grades_all += grades_total[index];
		printf("第%" PRIu32 "个学生的成绩是%" PRIu32 "\n", index + 1, grades_total[index]);
	}

	average = (double)grades_all / (double)total_student;
	printf("总分是%" PRIu32 "\n", grades_all);
	printf("平均分是%lf\n", average);

	return 0;
}