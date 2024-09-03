#include<stdio.h>
#include<float.h>
int main(void)
{
	printf("2.31 -> %.1f\n", 2.31f);
	printf("2.39 -> %.1f\n\n", 2.39f);

	printf("2.35 -> %.1f\n", 2.35f);
	printf("2.25 -> %.1f\n\n", 2.25f);

	printf("2.235 -> %.2f\n", 2.235f);
	printf("2.225 -> %.2f\n", 2.225f);

	/*
		四舍五入标准
		精度位 “.2f” 这里是第二位
		若该位的下一位为“5”
		此时如果下一位为 偶数 ，舍到该位偶数
						奇数 ，向上进一位
	*/

	return 0;
}