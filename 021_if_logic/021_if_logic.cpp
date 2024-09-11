#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	bool flag_weather = true;
	bool flag_earth = false;
	
	if (flag_weather && flag_earth)
	{
		printf("可以进行\n");
	}
	else
	{
		printf("不可以进行\n");
		if (!flag_earth) 
		{
			printf("场地不行\n");
		}
		if (!flag_weather)
		{
			printf("天气不行\n");
		}
	}

	return 0;
}