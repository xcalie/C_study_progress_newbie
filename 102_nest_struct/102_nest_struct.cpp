#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t
#define d32 int32_t


typedef struct {
	d32 address;
	d32 id;
	d32 strength;
} Job;

typedef struct {
	Job money;
	d32 age;
	d32 height;
	d32 weight;
	d32 personality;
} Person;


int main(void)
{
	Person one_people = { { 439033, 100012, 12306 }, 24, 175, 85, 22 };

	printf("%" PRId32 " %" PRId32 " %" PRId32 "\n%" PRId32 " %" PRId32 " %" PRId32 " %" PRId32 "\n", one_people.money.address, one_people.money.id, one_people.money.strength, one_people.age, one_people.height, one_people.weight, one_people.personality);

	Person* ptr = &one_people;
	printf("%" PRId32 " %" PRId32 "", ptr->money.address, ptr->age);
	// 如此应用

	return 0;
}