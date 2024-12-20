#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "ProcessType.h"
#include "DinnerStruct.h"

#include <stdbool.h>

//函数声明
void processLoop(ProcessType type);						//进程循环

void Print_Menu(void);									//打印菜单

void MainProcess(bool* isExit);							//主进程

void NowMenuId(ProcessType type);						//当前菜单ID

void ClearInputBuffer(void);							//清空输入缓冲区

void Welcome(void);										//欢迎界面

void ProcessBar(void);									//进度条

int JudgeInput(void);									//判断输入

void JudgeExit(bool* isExit);							//判断退出

DinnerStruct* CreateDinner(void);						//创建订餐信息

void Dinner_init(void);									//初始化管理系统

void SettingMenu(void);									//设置菜单

void addDinner(DinnerStruct* newDinner);				//添加订餐信息


//对订餐系统的操作
void InsertProcess(bool* isExit);								//插入

void DeleteProcess(bool* isExit);								//删除

void SearchProcess(bool* isExit);								//查找

void ModifyProcess(bool* isExit);								//修改

void TraverseProcess(bool* isExit);								//遍历

void FindByIDProcess(bool* isExit);								//按ID查找

void SaveToFileJudge(bool* isExit);								//保存到文件判断

void SettingProcess(bool* isExit);								//设置

void sort(DinnerNode* head);									//排序

void Dinner_loadFromFile(void);									//从文件加载订餐信息

void Dinner_saveToFile(void);									//保存到文件


#endif // !FUNCTIONS_H