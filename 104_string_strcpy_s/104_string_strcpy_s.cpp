#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<string.h>
#include<stdlib.h>
#include<crtdbg.h>

void my_invalid_parm_handler(const wchar_t* expression, const wchar_t* function, const wchar_t* file, unsigned int line, uintptr_t p_reserved)
{
	wprintf(L"Invalid parameter datected in function %s. File: %s Line %d\n", function, file, line);
	wprintf(L"Expression: %s\n", expression);
}
// 捕获异常

int main(void)
{
	_set_invalid_parameter_handler(my_invalid_parm_handler);

	const char src[] = "Hallo";

	char dest[2];
	// 拷贝目标大于对象空间，拷贝失败
	// 在Debug中不能运行
	// 在Release中将返回错误异常

	// 该函数会将src中的字符串拷贝进dest中
	errno_t err = strcpy_s(dest, sizeof(dest), src);
	if (err != 0)
	{
		printf("Error copying string. Error code: %d\n", err);
	}
	else
	{
		printf("%s\n", dest);
	}


	return 0;
}