#include <cstdlib>
#include<stdio.h>

typedef struct
{
	int num;
	float score;
} student;

typedef struct studentNode
{
	student* Node;
	studentNode* next;
} studentNode;

void addStudent(studentNode* head, int num, float score);

//头节点
studentNode* stu = 0;

int main(void)
{
	int num;
	float score;
	int i = 0;
	while (1)
	{
		scanf_s("%d,%f", &num, &score);
		if (num == 0 && score == 0)
		{
			break;
		}
		i++;
		addStudent(stu, num, score);
	}

	printf("Now,These 3 records are:\n");

	for (studentNode* temp = stu; temp != 0; temp = temp->next)
	{
		printf("%d  %.1f\n", temp->Node->num, temp->Node->score);
	}

	return 0;
}


void addStudent(studentNode* head, int num, float score)
{
	student* OneStudent = (student*)malloc(sizeof(student));
	OneStudent->num = num;
	OneStudent->score = score;

	studentNode* node = (studentNode*)malloc(sizeof(studentNode));
	node->Node = OneStudent;
	node->next = 0;

	if (head == 0)
	{
		stu = node;
	}
	else
	{
		studentNode* temp = head;
		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = node;
	}
}



/*实验报告
*
* 本次实验主要是链表的操作，通过链表的操作实现学生信息的添加。
* 利用结构体student存储学生的学号和成绩，利用结构体studentNode存储学生信息和下一个节点的地址。
* 通过addStudent函数实现学生信息的添加，通过循环遍历链表输出学生信息。
*
*/