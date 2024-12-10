#ifndef PERSONNEL_FOUNCTION_H
#define PERSONNEL_FOUNCTION_H

#include "PersonnelType.h"
#include "PersonnelStruct.h"

//功能函数原型
void StudentInfoMgr_sortList(void);					//对学生信息链表进行排序

Personnel* InputStudentInfo();						//输入学生信息

bool StudentInfoMgr_isExist(U64 number);			//判断学生是否存在

void ProcessBar(void);								//进度条

void SaveToFileJudge(void);							//保存到文件判断

//函数原型 操作系统原型
void LunchSystem(void);								//启动画面

void StudentInfoMgr_init(void);						//初始化学生信息管理系统

void StudentInfoMgr_showMainMenu(void);				//显示主菜单

int StudentInfoMgr_getUserChoice(void);				//获取用户选择	

void StudentInfoMgr_addStudent(Personnel* student);	//添加学生

void StudentInfoMgr_deleteStudent(void);			//删除学生

void StudentInfoMgr_modifyStudent(void);			//修改学生信息

void StudentInfoMgr_queryStudent(void);				//查询学生信息

void StudentInfoMgr_showAllStudents(void);			//显示所有学生信息

void StudentInfoMgr_saveToFile(void);				//保存到文件

void StudentInfoMgr_loadFromFile(void);				//从文件加载

void StudentInfoMgr_Setting(void);					//设置

void StudentInfoMgr_SettingMenu(void);				//设置菜单

#endif // !PERSONNEL_FOUNCTION_H
