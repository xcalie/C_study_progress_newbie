#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t

void print(void);
void speak(u32 number);


int main(void)
{
	speak(3);
	print();
	speak(2);

	return 0;
}

void print(void)
{
	printf("Hi\n");
}

void speak(u32 number)
{
	printf("%" PRIu32 "\n", number);
}