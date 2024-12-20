#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>
#include <Windows.h>

#include "Functions.h"
#include "ProcessType.h"

#define D32 int32_t

#define U64 uint64_t
#define U32 uint32_t
#define U8 uint8_t

#define MAX 100
#define TOTAL_STAPS 50


// 订餐信息链表（全局变量）
DinnerNode* g_dinnerList = NULL;

// 操作完之后是否自动保存到文件
bool isSaveAuto = false;

void SaveToFileJudge(void)
{
	if (isSaveAuto)
	{
		// 保存到文件
		Dinner_saveToFile();
	}
}

// 对链表进行排序
void sort(DinnerNode* head)
{
	// 冒泡排序
	for (DinnerNode* p = head; p != NULL; p = p->next)
	{
		for (DinnerNode* q = p->next; q != NULL; q = q->next)
		{
			if (p->data->id > q->data->id)
			{
				DinnerStruct* temp = p->data;
				p->data = q->data;
				q->data = temp;
			}
		}
	}
}

// 欢迎界面
void Welcome(void)
{
	printf("\n");
	printf("  __        __   _\n");
	printf("  \\ \\      / /__| | ___ ___  _ __ ___   ___\n");
	printf("   \\ \\ /\\ / / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\\n");
	printf("    \\ V  V /  __/ | (_| (_) | | | | | |  __/\n");
	printf("     \\_/\\_/ \\___|_|\\___\\___/|_| |_| |_|\\___|\n");
	printf("\n");

	ProcessBar();
	printf("\n\n");

	system("pause");
}

// 模拟加载进程
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

// 初始化管理系统
void Dinner_init(void)
{
	// 初始化订餐信息链表
	g_dinnerList = NULL;
}

void SettingMenu(void)
{
	printf("+-------------------------------+\n");
	printf("|1. 修改自动保存状态		|\n");
	printf("|2. 返回			|\n");
	printf("|##       自动保存：%s        ##|\n", isSaveAuto ? "是" : "否");
	printf("+-------------------------------+\n");
}

//进程循环
void processLoop(ProcessType type)
{
	bool isExit = false;

	while (!isExit)
	{
		system("cls");

		NowMenuId(type);

		switch (type)
		{
		case MainMenu:
			MainProcess(&isExit);
			break;
		case Insert:
			InsertProcess(&isExit);
			break;
		case Delete:
			DeleteProcess(&isExit);
			break;
		case Search:
			SearchProcess(&isExit);
			break;
		case Modify:
			ModifyProcess(&isExit);
			break;
		case Traverse:
			TraverseProcess(&isExit);
			break;
		case FindByID:
			FindByIDProcess(&isExit);
			break;
		case Setting:
			SettingProcess(&isExit);
			break;
		case Exit:
			JudgeExit(&isExit);
			break;
		}
	}
}

//打印主菜单
void Print_Menu(void)
{
	printf("+-------------------------------+\n");
	printf("|1. 插入			|\n");
	printf("|2. 删除			|\n");
	printf("|3. 查找			|\n");
	printf("|4. 修改			|\n");
	printf("|5. 查询所有			|\n");
	printf("|6. 按ID查找			|\n");
	printf("|7. 设置			|\n");
	printf("|8. 退出			|\n");
	printf("+-------------------------------+\n");
}

//当前菜单ID
void NowMenuId(ProcessType type)
{
	switch (type)
	{
	case MainMenu:
		printf("Current menu: 主菜单\n");
		break;
	case Insert:
		printf("Current menu: 插入\n");
		break;
	case Delete:
		printf("Current menu: 删除\n");
		break;
	case Search:
		printf("Current menu: 查找\n");
		break;
	case Modify:
		printf("Current menu: 修改\n");
		break;
	case Traverse:
		printf("Current menu: 遍历\n");
		break;
	case FindByID:
		printf("Current menu: 按ID查找\n");
		break;
	case Setting:
		printf("Current menu: 设置\n");
		break;
	case Exit:
		printf("Current menu: 退出\n");
		break;
	}
	printf("\n");
}

//主进程
void MainProcess(bool* isExit)
{
	Print_Menu();

	switch (JudgeInput())
	{
	case 1:
		processLoop(Insert);
		break;
	case 2:
		processLoop(Delete);
		break;
	case 3:
		processLoop(Search);
		break;
	case 4:
		processLoop(Modify);
		break;
	case 5:
		processLoop(Traverse);
		break;
	case 6:
		processLoop(FindByID);
		break;
	case 7:
		processLoop(Setting);
		break;
	case 8:
		JudgeExit(isExit);
		system("cls");
		break;
	default:
		printf("输入错误，请重新输入\n\n");
		system("pause");
		break;
	}
}


//判断是否退出
void JudgeExit(bool* isExit)
{
	printf("\n是否退出？(1.是 2.否)\n");
	switch (JudgeInput())
	{
	case 1:
		*isExit = true;
		break;
	case 2:
		*isExit = false;
		break;
	default:
		printf("输入错误，请重新输入\n");
		break;
	}
}

//创建订餐信息
DinnerStruct* CreateDinner(void)
{
	DinnerStruct* dinner = (DinnerStruct*)malloc(sizeof(DinnerStruct));
	if (dinner == NULL)
	{
		printf("内存分配失败\n");
		return NULL;
	}

	printf("请输入订餐ID：");
	gets_s(dinner->id, MAX);

	printf("请输入订餐人姓名：");
	gets_s(dinner->name, MAX);

	printf("请输入订餐时间：");
	gets_s(dinner->time, MAX);

	printf("请输入订餐份数：");
	scanf_s("%d", &dinner->num);
	ClearInputBuffer();

	return dinner;
}

//添加订餐信息
void addDinner(DinnerStruct* newDinner)
{
	// 新建节点
	DinnerNode* newNode = (DinnerNode*)malloc(sizeof(DinnerNode));
	if (newNode == NULL)
	{
		printf("内存分配失败\n");
		return;
	}
	newNode->data = newDinner;
	newNode->next = NULL;

	// 添加到链表
	if (g_dinnerList == NULL)
	{
		g_dinnerList = newNode;
	}
	else
	{
		DinnerNode* p = g_dinnerList;
		// 找到链表尾部
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = newNode;
	}
}

//插入
void InsertProcess(bool* isExit)
{
	DinnerStruct* newDinner = CreateDinner();
	if (newDinner == NULL)
	{
		return;
	}

	addDinner(newDinner);

	printf("插入成功\n");

	SaveToFileJudge();

	JudgeExit(isExit);
}

//删除
void DeleteProcess(bool* isExit)
{
	printf("请输入要删除的订餐ID：");
	char id[MAX];
	gets_s(id, MAX);

	DinnerNode* p = g_dinnerList;
	DinnerNode* q = NULL;

	while (p != NULL)
	{
		if (strcmp(p->data->id, id) == 0)
		{
			if (q == NULL)
			{
				g_dinnerList = p->next;
			}
			else
			{
				q->next = p->next;
			}
			free(p->data);
			free(p);
			printf("删除成功\n");

			SaveToFileJudge();

			JudgeExit(isExit);
			return;
		}
		q = p;
		p = p->next;
	}

	printf("未找到该订餐信息\n");

	JudgeExit(isExit);
}

//查找
void SearchProcess(bool* isExit)
{
	printf("请输入要查找的订餐ID：");
	char id[MAX];
	gets_s(id, MAX);

	DinnerNode* p = g_dinnerList;

	while (p != NULL)
	{
		if (strcmp(p->data->id, id) == 0)
		{
			printf("订餐ID：%s\n", p->data->id);
			printf("订餐人姓名：%s\n", p->data->name);
			printf("订餐时间：%s\n", p->data->time);
			printf("订餐份数：%d\n", p->data->num);

			JudgeExit(isExit);
			return;
		}
		p = p->next;
	}

	printf("未找到该订餐信息\n");

	JudgeExit(isExit);
}

//修改
void ModifyProcess(bool* isExit)
{
	printf("请输入要修改的订餐ID：");
	char id[MAX];
	gets_s(id, MAX);

	DinnerNode* p = g_dinnerList;

	while (p != NULL)
	{
		if (strcmp(p->data->id, id) == 0)
		{
			printf("请输入新的订餐ID：");
			gets_s(p->data->id, MAX);

			printf("请输入新的订餐人姓名：");
			gets_s(p->data->name, MAX);

			printf("请输入新的订餐时间：");
			gets_s(p->data->time, MAX);

			printf("请输入新的订餐份数：");
			scanf_s("%d", &p->data->num);
			ClearInputBuffer();

			printf("修改成功\n");

			SaveToFileJudge();

			JudgeExit(isExit);
			return;
		}
		p = p->next;
	}

	printf("未找到该订餐信息\n");

	JudgeExit(isExit);
}

//遍历
void TraverseProcess(bool* isExit)
{
	DinnerNode* p = g_dinnerList;

	while (p != NULL)
	{
		printf("订餐ID：%s\n", p->data->id);
		printf("订餐人姓名：%s\n", p->data->name);
		printf("订餐时间：%s\n", p->data->time);
		printf("订餐份数：%d\n", p->data->num);
		printf("\n");

		p = p->next;
	}

	*isExit = true;

	JudgeExit(isExit);
}

//按ID查找
void FindByIDProcess(bool* isExit)
{
	printf("请输入要查找的订餐ID：");
	char id[MAX];
	gets_s(id, MAX);

	DinnerNode* p = g_dinnerList;

	while (p != NULL)
	{
		if (strcmp(p->data->id, id) == 0)
		{
			printf("订餐ID：%s\n", p->data->id);
			printf("订餐人姓名：%s\n", p->data->name);
			printf("订餐时间：%s\n", p->data->time);
			printf("订餐份数：%d\n", p->data->num);

			JudgeExit(isExit);

			return;
		}
		p = p->next;
	}

	printf("未找到该订餐信息\n");

	JudgeExit(isExit);
}


//设置
void SettingProcess(bool* isExit)
{
	system("cls");

	SettingMenu();

	switch (JudgeInput())
	{
	case 1:
		isSaveAuto = !isSaveAuto;
		printf("设置成功\n");
		break;
	case 2:
		*isExit = true;
		break;
	default:
		printf("输入错误，请重新输入\n");
		break;
	}
}

//判断输入是否合法
int JudgeInput(void)
{
	char inputBuffer[MAX];
	printf("\n请输入您的选择：");
	gets_s(inputBuffer, MAX);

	//正确输入必然是数字，并且是从头开始的，所以只需要判断字符是否是数字即可
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

	return choice;
}

//清空输入缓冲区
void ClearInputBuffer(void)
{
	char c;
	while ((c = getchar()) != '\n');
}