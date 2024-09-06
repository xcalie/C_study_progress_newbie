#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	uint32_t number_1;
	uint32_t number_2;

	number_1 = 10;
	number_2 = number_1 + 1;
	printf("add 1 : %" PRIu32 "\n", number_2);

	number_2 = number_1++;
	printf("add and after +1 : %" PRIu32 "\n", number_2);
	printf("number 1 : %" PRIu32 "\n", number_1);

	number_1 = 10;
	number_2 = ++number_1;
	printf("after +1 and add : %" PRIu32 "\n", number_2);
	printf("number 1 : %" PRIu32 "\n\n", number_1);

	number_1 = 10;
	number_1++;
	printf("number 1 : %" PRIu32 "\n", number_1);

	--number_1;
	printf("number 1 : %" PRIu32 "\n", number_1);

	return 0;
}