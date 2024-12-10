#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <Windows.h>

#include "PersonnelStruct.h"
#include "Personnel_Founction.h"

#define TOTAL_STAPS 50


/// <summary>
///  学生信息链表（全局变量）
/// </summary>
PersonnelNode* g_studentList = NULL;

/// <summary>
///  操作完之后是否自动保存到文件
/// </summary>
bool isSaveAuto = false;

void SaveToFileJudge(void)
{
	if (isSaveAuto)
	{
		// 保存到文件
		StudentInfoMgr_saveToFile();
	}
}


/// <summary>
/// 对链表进行排序
/// </summary>
/// <param name=""></param>
void StudentInfoMgr_sortList(void)
{
	// 冒泡排序
	for (PersonnelNode* p = g_studentList; p != NULL; p = p->next)
	{
		for (PersonnelNode* q = p->next; q != NULL; q = q->next)
		{
			if (p->data->number > q->data->number)
			{
				Personnel* temp = p->data;
				p->data = q->data;
				q->data = temp;
			}
		}
	}
}

/// <summary>
/// 判断学生是否存在(主要是学号是否重复)
/// </summary>
/// <param name="number"></param>
/// <returns></returns>
bool StudentInfoMgr_isExist(U64 number)
{
	PersonnelNode* p = g_studentList;
	while (p != NULL)
	{
		if (p->data->number == number)
		{
			return true;
		}
		p = p->next;
	}
	return false;
}

/// <summary>
/// 输入学生信息
/// </summary>
/// <returns></returns>
Personnel* InputStudentInfo(void)
{
	Personnel* student = (Personnel*)malloc(sizeof(Personnel));
	printf("请输入学生编号：");
	scanf_s("%" SCNu64 "", &student->number);


	// 判断学生是否存在
	if (StudentInfoMgr_isExist(student->number))
	{
		return NULL;
	}


	printf("请输入学生姓名：");
	scanf_s("%s", student->name, 20);

	return student;
}

/// <summary>
///  初始化管理系统
/// </summary>
/// <param name=""></param>
void StudentInfoMgr_init(void)
{
	// 初始化学生信息链表
	g_studentList = NULL;
}

/// <summary>
/// 启动画面
/// </summary>
/// <param name=""></param>
void LunchSystem(void)
{
	printf(" ____   _             _            _     __  __\n");
	printf("/ ___| | |_ _   _  __| | ___ _ __ | |_  |  \\/  | __ _ _ __\n");
	printf("\\___ \\ | __| | | |/ _` |/ _ \\ '_ \\| __| | |\\/| |/ _` | '__|\n");
	printf(" ___) || |_| |_| | (_| |  __/ | | | |_  | |  | | (_| | |\n");
	printf("|____/  \\__|\\__,_|\\__,_|\\___|_| |_|\\__| |_|  |_|\\__, |_|\n");
	printf("                                                |___ /\n");
}

/// <summary>
/// 模拟加载进程
/// </summary>
/// <param name=""></param>
void ProcessBar(void)
{
	puts("\n加载中，请稍等");

	for (U32 i = 0; i <= TOTAL_STAPS; i++)
	{
		printf("\r[");

		// 打印进度条部分
		for (U32 j = 0; j < i; j++)
		{
			printf("#");
		}
		for (U32 j = i; j < TOTAL_STAPS; j++)
		{
			printf(" ");
		}

		printf("] %" PRIu32 "%%", (i * 100) / TOTAL_STAPS);

		fflush(stdout); // 确保即时显示
		Sleep(50); // 模拟加载延迟
	}
}

/// <summary>
/// 设置界面
/// </summary>
/// <param name=""></param>
void StudentInfoMgr_Setting(void)
{
	bool isExit = false;
	while (!isExit)
	{
		system("cls");

		StudentInfoMgr_SettingMenu();
		int choice = StudentInfoMgr_getUserChoice();
		switch (choice)
		{
		case 1:
			isSaveAuto = !isSaveAuto;
			break;
		case 2:
			isExit = !isExit;
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	}
}

void StudentInfoMgr_SettingMenu(void)
{
	printf("+-------------------------------+\n");
	printf("|1. 修改自动保存状态		|\n");
	printf("|2. 返回			|\n");
	printf("|##       自动保存：%s        ##|\n", isSaveAuto ? "是" : "否");
	printf("+-------------------------------+\n");
}


/// <summary>
///  显示主菜单
/// </summary>
/// <param name=""></param>
void StudentInfoMgr_showMainMenu(void)
{
	printf("+-------------------------------+\n");
	printf("|1. 添加学生			|\n");
	printf("|2. 删除学生			|\n");
	printf("|3. 修改学生信息		|\n");
	printf("|4. 查询学生信息		|\n");
	printf("|5. 显示所有学生信息		|\n");
	printf("|6. 保存到文件			|\n");
	//printf("|7. 从文件加载			|\n");
	printf("|7. 设置			|\n");
	printf("|8. 退出			|\n");
	printf("|##       自动保存：%s        ##|\n", isSaveAuto ? "是" : "否");
	printf("+-------------------------------+\n");
}

/// <summary>
///  获取用户选择
/// </summary>
/// <param name=""></param>
/// <returns></returns>
int StudentInfoMgr_getUserChoice(void)
{
	char inputBuffer[50];
	printf("请输入您的选择：");
	gets_s(inputBuffer, 50);//获取用户输入

	//正确输入必然是数字，并且是从头开始的，所以只需要判断第一个字符是否是数字即可
	D32 index = 0;
	D32 choice = 0;
	while (inputBuffer[index] != '\0')
	{
		if (inputBuffer[index] < '0' || inputBuffer[index] > '9')
		{
			return -1;
		}
		if (inputBuffer[index] >= '0' && inputBuffer[index] <= '9')
		{
			choice = choice * 10 + inputBuffer[index] - '0';
		}
		index++;
	}



	//switch判断并返回用户选择 避免输入流阻塞
	switch (choice)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			return choice;
		default:
			return -1;
	}
}

/// <summary>
/// 添加学生
/// </summary>
/// <param name="student"></param>
void StudentInfoMgr_addStudent(Personnel* student)
{
	// 创建新节点
	PersonnelNode* newNode = (PersonnelNode*)malloc(sizeof(PersonnelNode));
	newNode->data = student;
	newNode->next = NULL;

	// 添加到链表
	if (g_studentList == NULL)
	{
		g_studentList = newNode;
	}
	else
	{
		PersonnelNode* p = g_studentList;
		// 找到链表尾部
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = newNode;
	}
}





/// <summary>
///  删除学生
/// </summary>
/// <param name=""></param>
void StudentInfoMgr_deleteStudent(void)
{
	if (g_studentList == NULL)//判断学生信息是否为空,为空则返回
	{
		printf("学生信息为空\n\n");
		return;
	}

	U64 number;
	printf("请输入要删除的学生学号：");
	scanf_s("%" SCNu64 "", &number);

	

	if (!StudentInfoMgr_isExist(number))//判断学生是否存在
	{
		printf("学生不存在，将退回到上一级\n\n");
		return;
	}

	PersonnelNode* p = g_studentList;
	PersonnelNode* prev = NULL;
	while (p != NULL)
	{
		if (p->data->number == number)
		{
			if (prev == NULL)
			{
				g_studentList = p->next;
			}
			else
			{
				prev->next = p->next;
			}
			free(p);
			break;
		}
		prev = p;
		p = p->next;
	}

	SaveToFileJudge();
}

/// <summary>
///  修改学生信息
/// </summary>
/// <param name=""></param>
void StudentInfoMgr_modifyStudent(void)
{
	U64 number;
	printf("请输入要修改的学生学号：");
	scanf_s("%" SCNu64 "", &number);


	// 判断学生是否存在
	if (!StudentInfoMgr_isExist(number))
	{
		printf("学生不存在，将退回到上一级\n\n");
		return;
	}


	PersonnelNode* p = g_studentList;
	while (p != NULL)
	{
		if (p->data->number == number)
		{
			printf("请输入新的学号：");
			scanf_s("%" SCNu64 "", &p->data->number);
			printf("请输入新的姓名：");
			scanf_s("%s", &p->data->name, 20);
			break;
		}
		p = p->next;
	}

	SaveToFileJudge();
}

/// <summary>
///  查询学生信息
/// </summary>
/// <param name=""></param>
void StudentInfoMgr_queryStudent(void)
{
	U64 number;
	printf("请输入要查询的学生学号：");
	scanf_s("%" SCNu64 "", &number);

	PersonnelNode* p = g_studentList;
	while (p != NULL)
	{
		if (p->data->number == number)
		{
			printf("学号：%" PRIu64 "，姓名：%s\n", p->data->number, p->data->name);
			return;
		}
		p = p->next;
	}

	if (p == NULL)
	{
		printf("学生不存在，将退回到上一级\n\n");
	}
}

/// <summary>
///  显示所有学生信息
/// </summary>
/// <param name=""></param>
void StudentInfoMgr_showAllStudents(void)
{
	// 对链表进行排序
	StudentInfoMgr_sortList();
	// 遍历链表
	for (PersonnelNode* p = g_studentList; p != NULL; p = p->next)
	{
		printf("学号：%" PRIu64 "，姓名：%s\n", p->data->number, p->data->name);
	}
}
