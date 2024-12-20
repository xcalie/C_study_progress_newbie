#include "Functions.h"
#include "processType.h"

int main(void)
{
	Welcome();

	Dinner_init();
	Dinner_loadFromFile();

	processLoop(MainMenu);

	Dinner_saveToFile();

	return 0;
}