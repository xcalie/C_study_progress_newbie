#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t
#define d32 int32_t

int main(void)
{
	d32 number[] = {
		54,45,32,12,128,89,456
	};

	d32* ptr_number = number;
	// 数组的指针指向第一个元素

	printf("%p\n", (void*)ptr_number);
	printf("%" PRId32 "\n\n", *ptr_number);
	// 指针输出时输出第一个数

	ptr_number++;
	printf("%" PRId32 "\n\n", *ptr_number);
	// 可以通过直接加减指向下诺干位数

	ptr_number += 4;
	printf("%" PRId32 "\n\n", *ptr_number);
	// 指向第五位

	d32 size = sizeof(number) / sizeof(number[0]);
	// sizeof()得到的是数组的字节大小
	// int 类型一个数字占4个字节
	// 运用上述方法得到元素数量
	d32* start_ptr = &number[0];
	d32* end_ptr = &number[size - 1];

	// 两个指针减 所得到的类型为 ptrdiff_t
	// 表示为 两指针之间的距离
	// 类型使用 %td进行打印
	printf("%td\n\n", end_ptr - start_ptr);


	return 0;
}