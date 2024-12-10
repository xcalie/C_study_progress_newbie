#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "PersonnelStruct.h"
#include "Personnel_Founction.h"

void LoadProcess(void);
void MainProcess(void);


// 主进程
int main(void)
{
	// 初始化学生信息管理系统
	StudentInfoMgr_init();

	// 加载进程
	LoadProcess();

	// 进入主进程
	MainProcess();
	

	return 0;
}


// 主进程
void MainProcess(void)
{
	system("cls");

	// 退出标志状态
	bool isExit = 0;

	// 进入主循环
	while (!isExit)
	{
		// 显示主菜单
		StudentInfoMgr_showMainMenu();

		// 获取用户输入
		int choice = StudentInfoMgr_getUserChoice();

		Personnel* student = NULL;//学生信息缓冲池

		// 根据用户输入执行相应操作
		switch (choice)
		{
		case 1:
			student = InputStudentInfo();
			if (student == NULL)
			{
				printf("\n学号重复！！！\n");
				break;
			}
			StudentInfoMgr_addStudent(student);//添加学生
			SaveToFileJudge();//判断是否保存到文件
			printf("操作完成\n");
			break;
		case 2:
			StudentInfoMgr_deleteStudent();//删除学生
			printf("操作完成\n");
			break;
		case 3:
			StudentInfoMgr_modifyStudent();//修改学生信息
			printf("操作完成\n");
			break;
		case 4:
			StudentInfoMgr_queryStudent();//查询学生信息
			printf("操作完成\n");
			break;
		case 5:
			StudentInfoMgr_showAllStudents();//显示所有学生信息
			break;
		case 6:
			StudentInfoMgr_saveToFile();//保存到文件
			printf("操作完成\n");
			break;
		//case 7:
		//	StudentInfoMgr_loadFromFile();//从文件加载
		//	printf("操作完成\n");
		//	break;
		case 7:
			StudentInfoMgr_Setting();//设置
			break;
		case 8:
			isExit = true;
			printf("即将退出\n");
			SaveToFileJudge();//判断是否保存到文件
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}

		// 暂停程序，等待用户操作
		system("pause");
		// 清空屏幕
		system("cls");
	}
}

// 加载进程
void LoadProcess(void)
{
	// 启动画面
	LunchSystem();
	ProcessBar();
	//从文件加载学生信息
	StudentInfoMgr_loadFromFile();
	puts("\n\n处理完成");
	system("pause");
}