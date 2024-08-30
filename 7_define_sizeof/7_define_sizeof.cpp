#include<stdio.h>

int main(void)
{
	printf("printf size of short : %zu\n", sizeof(short));
	printf("printf size of unsigned short : %zu\n", sizeof(unsigned short));

	printf("printf size of int : %zu\n", sizeof(int));
	printf("printf size of unsigned int : %zu\n", sizeof(unsigned int));

	printf("printf size of long : %zu\n", sizeof(long));
	printf("printf size of unsigned long : %zu\n", sizeof(unsigned long));

	printf("printf size of long long : %zu\n", sizeof(long long));
	printf("printf size of unsigned long long : %zu\n", sizeof(unsigned long long));


	return 0;
}