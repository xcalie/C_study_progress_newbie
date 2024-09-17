#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<ctype.h>

#define d32 int32_t

const d32 LETTER_NUMBER = 26;

int main(void)
{
	char string[] = "My name is Tom";
	d32 flag_letter[LETTER_NUMBER] = { 0 };
	d32 length = sizeof(string);

	for (d32 index = 0; index < length; index++)
	{
		char flag = tolower(string[index]);
		if (flag >= 'a' && flag <= 'z')
		{
			flag_letter[flag - 'a']++;
		}
	}

	for (d32 index = 0; index < LETTER_NUMBER; index++)
	{
		if (flag_letter[index] > 0)
		{
			printf("%c : 共有%" PRId32 "个\n", index + 'a', flag_letter[index]);
		}
	}

	return 0;
}