#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdbool.h>

#define u32 uint32_t

int main(void)
{
	const u32 number_customer = 3;
	u32 money[number_customer] = {
		15000, 20000, 25000
	};

	for (u32 index = 0; index < number_customer; index++)
	{
		printf("第%" PRIu32 "位顾客的账户有%" PRIu32 "元\n", index + 1, money[index]);
	}

	money[0] -= 1500;
	money[2] += 2000;

	for (u32 index = 0; index < number_customer; index++)
	{
		printf("取款后第%" PRIu32 "位顾客的账户有%" PRIu32 "元\n", index + 1, money[index]);
	}

	return 0;
}