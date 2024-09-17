#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define d32 int32_t

int main(void)
{
	d32 number[] = {
		2,4,5,4,3,5
	};
	printf("%" PRIu32 "", number[4]);
	// 隐式定义，更具内容增加空间
	/*
		使用隐式定义时 
		原先a[123] = {0};的方法下定义全部数组的方法会失效
		仅有固定大小数组才可以全定义
	*/

	return 0;
}