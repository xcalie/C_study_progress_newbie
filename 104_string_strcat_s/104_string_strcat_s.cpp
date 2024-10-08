#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<string.h>
#include<errno.h>

int main(void)
{
	// strcat_s

	char dest[50] = { 0 };
	strcpy_s(dest, sizeof(dest), "Hello");
	// char dest[50] = "Hello"

	const char* src = ",World!\n";

	//dest = "Hello,World!"
	uint32_t dest_size = sizeof(dest) - strlen(dest) - 1;
	// 需要确认dest剩余多少空间

	// 返回是否拼接成功
	errno_t err = strcat_s(dest, dest_size, src);
	if (err != 0)
	{
		printf("Errno!!");
	}

	printf("%s", dest);

	return 0;
}