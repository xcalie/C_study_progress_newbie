#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<string.h>
#include<errno.h>

int main(void)
{
	// str n cpy_s
	// str n cpy

	char dest[20];
	const char* src = "Hallo World!\n";

	size_t max_copy = 10; // 最多要求10个字符

	errno_t err = strncpy_s(dest, sizeof(dest), src, max_copy);
	// 拷贝会覆盖原字符串，和追加 cat 有区别
	if (err == 0)
	{
		printf("%s\n", dest);
	}
	else
	{
		printf("Errno!!!");
	}

	return 0;
}