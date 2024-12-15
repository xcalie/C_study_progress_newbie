#include<stdio.h>

typedef struct student
{
	int num;
	char name[20];
	float score;
}student;

void Sort(student* p, int n)
{
	student temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if ((p + j)->score < (p + j + 1)->score)
			{
				temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}
	}
}

int main(void)
{
	student stu[5] = { 
		{10101,"Zhang",78},
		{10103,"Wang",98.5},
		{10106,"Li",86},
		{10108,"Ling",73.5},
		{10110,"Fun",100} 
	};

	student* p = stu;
	int size = sizeof(stu) / sizeof(stu[0]);
	Sort(p, size);

	printf("The order is:\n");
	for (int i = 0; i < size; i++)
	{
		printf("%6d %8s %6.2f\n", stu[i].num, stu[i].name, stu[i].score);
	}


	return 0;
}

/*实验报告
* 
* 本次实验的通过结构体数组的排序
* 利用结构体数组存储学生的学号、姓名、分数
* 通过函数指针对结构体数组进行排序、
* 最后输出排序后的结果
* 
*/