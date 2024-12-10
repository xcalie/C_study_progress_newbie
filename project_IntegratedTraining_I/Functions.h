#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "ProcessType.h"

//函数声明
void processLoop(ProcessType type);						//进程循环

void Print_Menu(void);									//打印菜单

void MainProcess(bool* isExit);							//主进程

void NowMenuId(ProcessType type);						//当前菜单ID

void ClearInputBuffer(void);							//清空输入缓冲区

void Welcome(void);										//欢迎界面

void ProcessBar(void);									//进度条

//功能函数声明

void Find_LeastBiggestCommonMultiple(bool* isExit);		//寻找最小公倍数和最大公约数

void Find_SaddlePoint(bool* isExit);					//寻找鞍点

void Find_MaxLength(bool* isExit);						//寻找最长字符串

void Find_TenToSixteen(bool* isExit);					//十进制转十六进制

void JudgeExit(bool* isExit);							//判断是否退出

int JudgeInput(void);									//判断输入是否合法


#endif // !FUNCTIONS_H
