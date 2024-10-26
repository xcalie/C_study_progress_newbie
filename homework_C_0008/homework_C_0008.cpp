#include<stdio.h>

int main(void)
{
	// 实现越阶函数

	int num;

	scanf_s("%d", &num);

	if (num < 0) printf("x=%d,y=-1", num);
	else if (num > 0) printf("x=%d,y=1", num);
	else printf("x=%d,y=0", num);


	return 0;
}
/*实验报告
* 
* 本次实验通过if嵌套来实现越阶函数
* 连续的if—else语句便可以实现多次判断
* 
*/