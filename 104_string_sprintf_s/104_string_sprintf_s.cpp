#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<string.h>
#include<errno.h>

int main(void)
{
	/*
		sprintf()
		sprintf_s()
	*/

	char buffer[50] = { 0 };
	int32_t number = 3;
	double pi = 3.1415926;

	errno_t err = sprintf_s(buffer, sizeof(buffer), "Integer: %d,Double: %.2f", number, pi);
	// 格式化输出字符串，将数据带入后变为字符串
	// 当字符串长度大于空间，将发生错误并返回
	if (err > 0)
	{
		printf("Formatted string : %s\n", buffer);
	}
	else
	{
		printf("Errno!!!");
	}

	return 0;
}