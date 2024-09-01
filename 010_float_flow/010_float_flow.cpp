#include<stdio.h>
#include<float.h>

int main(void)
{
	float number_float_max = FLT_MAX;
	
	float overflow = number_float_max * 1000.0f;
	//注意避免转换
	printf("number float max : %E\n", number_float_max);
	printf("overflow : %E\n", overflow);
	/*
		inf : infinity
	*/

	float number_float_min = FLT_MIN;

	float underflow = number_float_min / 1000.0f;
	
	printf("number float min : %E\n", number_float_min);
	printf("underflow : %E\n", underflow);
	/*
		隐式向第一位或者更多位借位，导致精度丢失
	*/

	return 0;
}