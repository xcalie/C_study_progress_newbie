#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdbool.h>

#define u32 uint32_t

u32* ptr = NULL;

void process(void);

int main(void)
{
	u32 number_1 = 2;
	ptr = &number_1;
	printf("%p\n", (void*)ptr);
	printf("%d\n\n", *ptr);

	process();
	// 此时上一个作用域生命周期已经结束，指针变为野指针
	printf("%p\n", (void*)ptr);
	printf("%d\n\n", *ptr);
	// 发生错误

	return 0;
}


void process(void)
{
	u32 number_2 = 3;
	ptr = &number_2;
	printf("%p\n", (void*)ptr);
	printf("%d\n\n", *ptr);
}