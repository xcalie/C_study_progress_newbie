#include <stdio.h>

int main(void)
{
	float a[3];
	// 输入并比大小以及按顺序输出
	scanf_s("%f,%f,%f", &a[0], &a[1], &a[2]);

	// 冒泡排序
	for (int i = 0; i < 2; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (a[i] > a[j])
			{
				float temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	// 输出
	printf("%5.2f,%5.2f,%5.2f", a[0], a[1], a[2]);



	return 0;
}

/*实验报告
* 
* 在这次实验中，通过format来对浮点数进行输出处理
* 使得浮点数输出更美观精确符合标准
* 通过排序算法来实现多个数据的排序
* 
* 
*/