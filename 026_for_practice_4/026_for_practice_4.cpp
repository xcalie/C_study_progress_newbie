#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<math.h>
#include<stdbool.h>

#define u32 uint32_t

int main(void)
{
	u32 number = 37;
	// （筛法更快)开方法作为for参考
	bool flag = true;
	for (u32 index = 2; index < (u32)sqrt(number); index++)
	{
		if (number % index == 0)
		{
			flag = false;
		}
	}
	if (flag)
	{
		puts("that is a prime number");
	}
	else
	{
		puts("that is not a prime number");
	}

	return 0;
}