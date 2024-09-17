#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<limits.h>

#define u32 uint32_t

int main(void)
{
	const u32 number_participant = 5;
	u32 total_ticket = 0;
	u32 ticket[number_participant] = {0};
	u32 max_ticket = 0;

	ticket[0] += 200;
	ticket[1] += 150;
	ticket[2] += 175;
	ticket[3] += 160;
	ticket[4] += 120;

	u32 flag;
	for (u32 index = 0; index < number_participant; index++)
	{
		total_ticket += ticket[index];
		if (max_ticket < ticket[index])
		{
			max_ticket = ticket[index];
			flag = index + 1;
		}
		printf("第%" PRIu32 "位票数为%" PRIu32 "\n", index + 1, ticket[index]);
	}
	
	printf("总票数位%" PRIu32 "\n", total_ticket);
	printf("最大票数为第%" PRIu32 ",共%" PRIu32 "票\n", flag, max_ticket);

	return 0;
}