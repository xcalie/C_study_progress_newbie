#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(void)
{
	float number = 1.1f;
	printf("flaot number : %lf", number);

	/*
		常规有 1位正负 23位尾数 8位doint移动数 2**8 既 127可移动数	
		浮点数二进制表示 1001101.011011
			对应原数    1001101 011011
			 .  doint移动此处即移动7位（对应111二进制）
			头位数肯定为1，在float中可以省略此位，出现“隐式”
			就会出现24位尾数
		  float对应原数 001101  011011
		  此处“1”被节省，更省空间，精度会缺失
	*/

	/*
		double 之中不会去节省空间（毕竟使用双倍的空间）
		不省空间，但精度更高
	*/

	return 0;
}