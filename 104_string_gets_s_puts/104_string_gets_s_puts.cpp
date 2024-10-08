#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<string.h>
#include<errno.h>

int main(void)
{
	// gets();
	// puts();

	const char* str = "Hello!";
	puts(str);
	// puts只能字符串

	const char* str_1 = "Hello! %" PRIu32 "\n";
	printf(str_1, 12);
	

	char buffer[100];
	// 确保避免缓冲器溢出
	if (gets_s(buffer, sizeof(buffer)) == NULL)
	{
		printf("Error or end of file encountered.\n");
	}
	else
	{
		printf("%s\n", buffer);
	}

	return 0;
}