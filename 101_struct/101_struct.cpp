#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t
#define d32 int32_t

struct Person {
	d32 number;
	d32 personality;
	d32 age;
	d32 height;
	d32 weight;
}Person;

int main(void)
{
	struct Person people = { 1001, 2, 24, 175, 65 };
	printf("people's number : %" PRId32 "\n", people.number);

	struct Person* Apeople = &people;
	printf("Apeople's number : %" PRId32 "\n", Apeople -> number);
	// C语言中struct声明必须要带上 struct


	return 0;
}