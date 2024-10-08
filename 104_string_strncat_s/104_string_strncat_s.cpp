#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<string.h>
#include<errno.h>

int main(void)
{
	// str n cat_s
	// 最多追加n个字符

	char dest[20] = "Hello";
	const char* src = ",World\n";

	size_t max_append = 4;			// 最多追加七个字符

	errno_t err = strncat_s(dest, sizeof(dest), src, max_append);
	
	if (errno == 0)
	{
		printf("Concatenated string: %s\n", dest);
	}
	else
	{
		printf("Error!!!");
	}

	return 0;
}