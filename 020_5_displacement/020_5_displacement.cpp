#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	//  >>   <<

	uint8_t number = 22;
	// 00010110
	printf("original number : %" PRIu8 " 00010110\n", number);

	// 左移
	uint8_t left_shifted = number << 2;
	printf("left shifted by 2: %" PRIu8 " 01011000\n", left_shifted);

	// 右移
	uint8_t right_shifted = number >> 2;
	printf("right shifted by 2: %" PRIu8 " 00000101\n", right_shifted);


	int8_t number_1 = 22;
	// 00010110
	printf("before number : %" PRId8 " 00010110\n", number_1);
	number_1 <<= 3;
	// 10110000
	printf("overed number : %" PRId8 " 10110000\n", number_1);

	return 0;
}