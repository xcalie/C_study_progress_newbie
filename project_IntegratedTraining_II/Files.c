#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "Functions.h"
#include "DinnerStruct.h"

// 订餐信息链表（全局变量）
extern DinnerNode* g_dinnerList;

// 从文件加载订餐信息
void Dinner_loadFromFile(void)
{
	// 打开文件
	FILE* file = fopen("Dinner_File.txt", "r");
	if (file == NULL)
	{
		printf("文件打开失败\n");
		return;
	}

	bool isEnd = false;		// 文件结束标志
	
	bool isNow[4] = { false,false,false,false };//当前的状态

	DinnerStruct* dinner = NULL;	// 订餐信息

	// 读取文件
	// 读取文件
	while (!isEnd)
	{
		char buffer[1024] = { 0 };
		size_t readSize = fread(buffer, sizeof(buffer), 1, file);

		U32 index = 0;//缓冲区索引
		U32 IndexForAll[4] = { 0 };//所有的索引

		//从字符串中读取订餐信息
		while (buffer[index] != '\0')
		{
			if (dinner == NULL)//当一个订餐信息读取完毕后，为下一个订餐信息分配内存
			{
				//为订餐信息分配内存
				dinner = (DinnerStruct*)malloc(sizeof(DinnerStruct));
				memset(dinner->id, 0, sizeof(dinner->id));
				memset(dinner->name, 0, sizeof(dinner->name));
				memset(dinner->time, 0, sizeof(dinner->time));
				dinner->num = 0;
			}

			if (buffer[index] == '\n')
			{
				addDinner(dinner); //添加订餐信息到链表
				dinner = NULL; //清空订餐信息

				//重置状态
				for (int i = 0; i < 4; i++)
				{
					isNow[i] = false;
				}

				//重置索引
				for (int i = 0; i < 4; i++)
				{
					IndexForAll[i] = 0;
				}

				index++;
				continue;
			}

			if (buffer[index] == ' ' && isNow[0] == false) //空格分隔仅对第一个空格进行处理(姓名中可能存在空格)
			{
				isNow[0] = true;
				index++;
				continue;
			}
			if (buffer[index] == ' ' && isNow[1] == false) //空格分隔仅对第一个空格进行处理(姓名中可能存在空格)
			{
				isNow[1] = true;
				index++;
				continue;
			}
			if (buffer[index] == ' ' && isNow[2] == false) //空格分隔仅对第一个空格进行处理(姓名中可能存在空格)
			{
				isNow[2] = true;
				index++;
				continue;
			}
			if (buffer[index] == ' ' && isNow[3] == false) //空格分隔仅对第一个空格进行处理(姓名中可能存在空格)
			{
				isNow[3] = true;
				index++;
				continue;
			}

			if (isNow[0] == false)
			{
				dinner->id[IndexForAll[0]++] = buffer[index];
			}
			else if (isNow[1] == false)
			{
				dinner->name[IndexForAll[1]++] = buffer[index];
			}
			else if (isNow[2] == false)
			{
				dinner->time[IndexForAll[2]++] = buffer[index];
			}
			else if (isNow[3] == false)
			{
				dinner->num = dinner->num * 10 + buffer[index] - '0';
			}

			index++;
		}


		if (readSize < sizeof(buffer))
		{
			isEnd = true;
		}

	}

	sort(g_dinnerList); //排序订餐信息

	// 关闭文件
	fclose(file);
}

// 保存订餐信息到文件
void Dinner_saveToFile(void)
{
	// 打开文件
	FILE* file = fopen("Dinner_File.txt", "w");
	if (file == NULL)
	{
		printf("文件打开失败\n");
		return;
	}

	// 保存订餐信息
	DinnerNode* node = g_dinnerList;
	while (node != NULL)
	{
		DinnerStruct* dinner = node->data;

		// 保存订餐信息到文件
		fprintf(file, "%s %s %s %d\n", dinner->id, dinner->name, dinner->time, dinner->num);

		node = node->next;
	}

	// 关闭文件
	fclose(file);
}

