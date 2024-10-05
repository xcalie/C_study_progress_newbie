#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

#define u32 uint32_t
#define d32 int32_t

// 枚举，直接表现对应顺序
typedef enum {
	Monday,
	Tuesday,
	Wednesday,
	Foursday,
	Friday,
	Saturday,
	Sunday
}weekday;

const char* today(d32 now);

int main(void)
{
	printf("Today is %s ", today(Foursday));

	return 0;
}


const char* today(d32 now)
{
	switch (now)
	{
	case 0:
		return "Monday";
		break;
	case 1:
		return "Tuesday";
		break;
	case 2:
		return "Wednesday";
		break;
	case 3:
		return "Foursday";
		break;
	case 4:
		return "Friday";
		break;
	case 5:
		return "Saturday";
		break;
	case 6:
		return "Sunday";
		break;
	default:
		return "NULL";
		break;
	}
}