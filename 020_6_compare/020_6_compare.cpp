#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>


int main(void)
{
	int32_t number_1 = 32;
	int32_t number_2 = 53;

	printf("number 1 : %" PRId32 " , number 2 : %" PRId32 "\n", number_1, number_2);

	bool small_1_with_2 = number_1 < number_2;
	printf("number 1 < number 2 : %" PRId32 "\n", small_1_with_2);

	bool big_1_with_2 = number_1 > number_2;
	printf("number 1 > numebr 2 : %" PRId32 "\n", big_1_with_2);

	bool big_or_equal_1_with_2 = number_1 >= number_2;
	printf("number 1 >= number 2 : %" PRId32 "\n", big_or_equal_1_with_2);

	bool equal_1_with_2 = number_1 == number_2;
	printf("number 1 == number 2 : %" PRId32 "\n", equal_1_with_2);

	return 0;
}