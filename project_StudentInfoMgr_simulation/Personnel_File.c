#include <inttypes.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "Personnel_Founction.h"
#include "PersonnelStruct.h"

// 学生信息链表
extern PersonnelNode* g_studentList;

//从文件加载学生信息
void StudentInfoMgr_loadFromFile(void)
{
	// 打开文件
	FILE* file = fopen("Personnel_Student_File.txt", "r");
	if (file == NULL)
	{
		printf("文件打开失败\n");
		return;
	}

	bool isEnd = false;		//文件结束标志
	bool isNumber = true;	//是否为数字

	Personnel* student = NULL;	//学生信息

	// 读取文件
	while (!isEnd)
	{
		//TODO: 从文件中读取学生信息，这里需要重构,利用缓冲区读取文件需要注意的问题	
		char buffer[1024] = { 0 };
		size_t readSize = fread(buffer, sizeof(buffer), 1, file);

		U32 index = 0;//缓冲区索引
		U32 NameIndex = 0;//姓名索引
		//从字符串中读取学生信息
		while (buffer[index] != '\0')
		{
			if (student == NULL)//当一个人员信息读取完毕后，为下一个人员信息分配内存
			{
				//为学生信息分配内存
				student = (Personnel*)malloc(sizeof(Personnel));
				student->number = 0;
				memset(student->name, 0, sizeof(student->name));
			}

			if (buffer[index] == '\n')
			{
				StudentInfoMgr_addStudent(student);// 添加到链表
				student = NULL; //清空学生信息
				isNumber = true;//重置为数字
				NameIndex = 0;//重置姓名索引
				index++;
				continue;
			}
			if (buffer[index] == ' ' && isNumber) //空格分隔仅对第一个空格进行处理(姓名中可能存在空格)
			{
				isNumber = false;
				index++;
				continue;
			}
			if (isNumber)
			{
				student->number = student->number * 10 + buffer[index] - '0';
			}
			else
			{
				student->name[NameIndex++] = buffer[index];
			}
			index++;
		}


		if (readSize < sizeof(buffer))
		{
			isEnd = true;
		}

	}

	// 对链表进行排序
	StudentInfoMgr_sortList();

	// 关闭文件
	fclose(file);
}

//保存学生信息到文件
void StudentInfoMgr_saveToFile(void)
{
	// 打开文件
	FILE* file = fopen("Personnel_Student_File.txt", "w");
	if (file == NULL)
	{
		printf("文件打开失败\n");
		return;
	}

	// 保存到文件
	PersonnelNode* p = g_studentList;
	while (p != NULL)
	{
		fprintf(file, "%" PRIu64 " %s\n", p->data->number, p->data->name);
		p = p->next;
	}

	// 关闭文件
	fclose(file);
}