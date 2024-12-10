#ifndef PERSONNELSTRUCT_H
#define PERSONNELSTRUCT_H


#include <stdbool.h>
#include<stdint.h>

#include "PersonnelType.h"

#define U8 uint8_t
#define U32 uint32_t
#define U64 uint64_t

#define D32 int32_t
#define D64 int64_t

/**数据设计
* 
* 学生编号使用uint64_t 此处是64位 共8字节
* 若为uint8_t[12] 共开销12个字节不划算
* 
*/

//人员类型
typedef struct
{
	U64 number;						//人员编号(主键)
	PersonnelType type;				//人员类型(默认为学生)
	char name[20];					//姓名
} Personnel;

//人员链表节点
typedef struct PersonnelNode
{
	Personnel* data;					//人员信息
	struct PersonnelNode* next;		//指向下一个节点的指针
} PersonnelNode;


#endif // !PERSONNELSTRUCT_H
