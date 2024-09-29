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
}person;

int main(void)
{
	Person people = { 1001, 2, 24, 175, 65 };
	printf("people's number : %" PRId32 "\n", people.number);

	Person* Apeople = &people;
	printf("Apeople's number : %" PRId32 "\n", Apeople -> number);



	return 0;
}