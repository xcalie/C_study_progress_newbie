#include <stdbool.h>
#include<stdio.h>

#include "Functions.h"
#include "processType.h"

int main(void)
{
	Welcome();
	processLoop(MainMenu);

	return 0;
}
