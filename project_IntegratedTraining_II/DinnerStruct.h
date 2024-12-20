#ifndef DINNERSTRUCT_H
#define DINNERSTRUCT_H

#include<stdint.h>


#define U8 uint8_t
#define U32 uint32_t
#define U64 uint64_t

#define D32 int32_t
#define D64 

typedef struct
{
	char id[20];					//编号
	char name[20];					//姓名
	int num;						//人数
	char time[20];					//用餐时间
} DinnerStruct;


//人员链表节点
typedef struct DinnerNode
{
	DinnerStruct* data;				//数据
	struct DinnerNode* next;		//指向下一个节点的指针
} DinnerNode;


#endif // !DINNERSTRUCT_H

