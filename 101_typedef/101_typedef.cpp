#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t
#define d32 int32_t

typedef struct Date{
	d32 day;
	d32 month;
	d32 year;
	char flag;
}Date;


// typedef 可以不在struck后面明确写出结构体名称
typedef struct {
	d32 day;
	d32 month;
	d32 year;
	char flag;
} Date_1;


// typedef 可以定义别名
typedef struct Date_00 {
	d32 day;
	d32 month;
	d32 year;
	char flag;
}Date_01 , Date_02;

// 允许隐藏
typedef struct {
	d32 day;
	d32 month;
	d32 year;
	char flag;
}Date_001, Date_002;


int main(void)
{
	Date_00 date = { 30, 9, 2024 };
	Date_01 date_1 = { 30, 9, 2024 };
	Date_02 date_2 = { 30, 9, 2024 };

	Date_001 date_3 = { 30, 9, 2024 };
	Date_002 date_4 = { 30, 9, 2024 };

	return 0;
}