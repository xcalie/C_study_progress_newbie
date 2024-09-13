#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdbool.h>

int main(void)
{
	uint32_t number;
	uint32_t result = 0;
	while (true)
	{
		scanf_s(" %" SCNu32 "", &number);
		result += number;
		if (number == 0)
		{
			break;
		}
	}
	printf("%" PRIu32 "", result);

	return 0;
}