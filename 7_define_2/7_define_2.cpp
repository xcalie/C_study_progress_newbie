#include<stdio.h>

int main() {

	short number_3 = 1;
	number_3 <<= 15;
	printf("printf short %hd\n", number_3);

	unsigned short number_4 = 1;
	number_4 <<= 15;
	printf("printf unsigned short %hu\n", number_4);

	unsigned short color;

	//16bit
	color = 0b1111100000000000;
	printf("RED : 0x%X\n", color);

	return 0;
}