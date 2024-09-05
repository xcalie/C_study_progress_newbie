#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<float.h>

int main(void)
{
	uint32_t number_1 = 342;
	uint32_t number_2 = 2342;

	uint32_t result_add = number_1 + number_2;
	uint32_t result_subtraction = number_2 - number_2;
	uint32_t result_multiplication = number_1 * number_2;
	uint32_t result_division = number_2 / number_1;
	uint32_t result_mod = number_2 % number_1;

	printf("result add : %" PRIu32 "\n", result_add);
	printf("result subtraction : %" PRIu32 "\n", result_subtraction);
	printf("result multiplication : %" PRIu32 "\n", result_multiplication);
	printf("result division : %" PRIu32 "\n", result_division);
	printf("result mod : %" PRIu32 "\n", result_mod);

	float number_3 = 71.0f;

	float result_float = number_3 / 24.0f;

	printf("result division with float : %.2f", result_float);

	return 0;
}