#include<stdio.h>

int main(void)
{
	float number = 4825.655f;
	// float数要带上尾号f
	// 类似 long long(int64_t) 要LL
	//		unsigned XXX 要U(LL)
	
	float number_1 = 5284.97e5f;
	// 科学计数法 既5284.97*(10**5)

	printf("one number is %f\n", number);
	// 此处已经丢失精度
	printf("one number is %.5f\n", number);
	// 仍然丢失

	double number_2 = 8453.6531f;
	printf("ong number_2 is %f\n", number_2);
	// double精度不丢失

	return 0;
}