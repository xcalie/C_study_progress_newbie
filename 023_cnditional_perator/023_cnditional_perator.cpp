#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	int32_t number_1 = 90;

	char grade = 
		(number_1 <= 45) ? 'D' :
		(number_1 <= 60) ? 'C' :
		(number_1 <= 75) ? 'B' : 'A';

	printf("%c", grade);

	return 0;
}