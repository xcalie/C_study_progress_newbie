#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdbool.h>
#include<stdlib.h>

int main(void)
{
	puts("请输入数字(包括混合输入且数字在先)，会尝试输出");
	puts("输入其他会结束进程");

	int32_t flag_scanf_number;
	int32_t status_number = 0;
	char buffer[50];

	do
	{
		fgets(buffer ,sizeof(buffer), stdin);
		flag_scanf_number = sscanf_s(buffer, "%d", &status_number);
		if (flag_scanf_number == 1)
		{
			printf("对应数字为%" PRIu32 "\n", status_number);
			continue;
		}
		puts("结束");
		puts(buffer);
		break;
	} while (true);

	return 0;
}