#include<stdio.h>
#include<float.h>

int main(void)
{
	float number_float = 10.0f / 3.0f;
	double number_double = 10.0 / 3.0;

	printf("result float : %.20f\n", number_float);
	printf("result double : %.20lf\n", number_double);

	printf("defined max precision for float : %d\n", FLT_DIG);
	printf("defined max precision for double : %d\n", DBL_DIG);

	return 0;
}