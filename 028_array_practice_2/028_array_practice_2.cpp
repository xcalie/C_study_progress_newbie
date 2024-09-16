#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<limits.h>

#define u32 uint32_t

int main(void)
{
	const u32 total_days = 5;
	u32 daily_temperatrue[total_days] = {
		43, 32, 24, 34 ,36
	};
	u32 total_temperatrue = 0;
	u32 total_max_temperatrue = 0;
	// unsigned int 最小值为 1111111111111....1111 - 1
	// 故为整数极大值
	u32 total_min_temperatrue = INT32_MAX;
	double avarage;

	for (u32 index = 0; index < total_days; index++)
	{
		printf("第%" PRIu32 "天的温度为%" PRIu32 "\n", index + 1, daily_temperatrue[index]);
		if (daily_temperatrue[index] > total_max_temperatrue)
		{
			total_max_temperatrue = daily_temperatrue[index];
		}
		if (daily_temperatrue[index] < total_min_temperatrue)
		{
			total_min_temperatrue = daily_temperatrue[index];
		}

		total_temperatrue += daily_temperatrue[index];
	}

	printf("最高温:%" PRIu32 "\n", total_max_temperatrue);
	printf("最低温:%" PRIu32 "\n", total_min_temperatrue);
	
	avarage = (double)total_temperatrue / (double)total_days;
	printf("平均温度:%lf\n", avarage);

	return 0;
}