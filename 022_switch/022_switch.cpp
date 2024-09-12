#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	uint32_t flag = 5;

	switch (flag)
	{
	case 1:
		puts("1");
		break;
	case 2:
		puts("2");
		break;
	case 3:
		puts("3");
		break;
	default:
		puts("not 1 or 2 or 3");
		break;
	}
	/*
		switch可以做到直接去查询对应状况的结果
		不用一条一条的检查
		适合同一变量的检查

		用if去做同一件事时会多重检查条件，时间花费较多
		适合复杂条件的执行
	*/


	return 0;
}