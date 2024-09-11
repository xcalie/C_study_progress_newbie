#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	int32_t number_1 = 23434;
	int32_t number_2 = 23445;

	bool flag_vip = true;
	bool flag_bigger_than_50 = true;

	if (flag_vip)
	{
		printf("是vip\n");
		if (flag_bigger_than_50)
		{
			printf("花费大于50\n");
		}
		else
		{
			printf("花费小于50\n");
		}
	}
	else
	{
		printf("不是vip\n");
		if (!flag_bigger_than_50)
		{
			printf("花费大于50\n");
		}
		else
		{
			printf("花费小于50\n");
		}
	}

	return 0;
}