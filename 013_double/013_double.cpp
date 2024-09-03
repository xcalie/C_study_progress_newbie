#include<stdio.h>

int main(void)
{
	/*
		float 占32位     快速 占用小  精确度小   例 3D图形渲染   3.14f
		double 占64位	 慢速 占用大  精确度大   例 天文数字	  3.14
	*/

	double number_1 = 214.12 / 323.23;
	double number_2 = 2231.3 * 232.42;

	printf("result 1 : %lf\n", number_1);
	printf("result 2 : %lf\n\n", number_2);

	long double number_3 = 2324.3423L * 24343234.312L;

	printf("result 3 : %llf\n", number_3);

	return 0;
}