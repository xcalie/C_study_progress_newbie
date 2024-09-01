#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
	int8_t number_int8 = INT8_MAX;
	int32_t number_int32 = INT32_MAX;
	uint32_t number_uint32 = UINT32_MAX;
	uint64_t number_uint64 = UINT64_MAX;

	printf("int8_t: %" PRId8 "\n", number_int8);
	printf("int32_t: %" PRId32 "\n", number_int32);
	printf("uint32_t: %" PRIu32 "\n", number_uint32);
	printf("uint64_t: %" PRIu64 "\n", number_uint64);

	return 0;
}