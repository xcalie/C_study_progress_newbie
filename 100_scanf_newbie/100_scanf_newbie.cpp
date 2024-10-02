#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t
#define d32 int32_t



int main(void)
{
	d32 number_1, number_2;

	scanf_s("%d %d", &number_1, &number_2);
	printf("%d %d\n", number_1, number_2);


	scanf_s("%d_%d", &number_1, &number_2);
	printf("%d %d\n", number_1, number_2);
	// 中间塞什么决定根据什么输入


	d32* ptr_1 = &number_1;
	d32* ptr_2 = &number_2;

	scanf_s("%d %d", ptr_1, ptr_2);
	printf("%d %d\n", number_1, number_2);

	return 0;
}