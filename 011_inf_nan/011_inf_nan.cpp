#include<stdio.h>
#include<float.h>
#include<inttypes.h>
#include<stdint.h>
#include<math.h>

int main(void)
{
	float number_infinity_positive = INFINITY;
	printf("Positive infinity : %f\n", number_infinity_positive);
	// 正无穷

	float number_infinity_negative = -INFINITY;
	printf("Positive negative : %f\n", number_infinity_negative);
	// 负无穷

	float number_1 = 1.0f;
	float infinity = INFINITY;
	printf("1.0 / 0.0 = %f\n", infinity / number_1);
	// 除以0得到的无穷大 （浮点数限定）
	// 0.0 不能 除以 0.0 浮点数也不可以

	float number_2 = sqrt(-1.0f);
	printf("sqrt negative number : %f", number_2);
	// 负数不能被开平方，故出现不确定值 not a number

	return 0;
}