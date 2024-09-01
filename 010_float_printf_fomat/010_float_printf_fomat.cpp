#include<stdio.h>

int main(void)
{
	float number = 123.456f;

	// %f
	printf("Using %%f: %f\n", number);

	// %e %E 科学计数法
	printf("Using %%e:%e\n", number);
	printf("Using %%E:%e\n", number);

	// %A %a 十六进制输出
	printf("Using %%a:%a\n", number);
	printf("Using %%A:%A\n", number);

	return 0;
}