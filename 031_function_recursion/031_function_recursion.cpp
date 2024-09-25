#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdbool.h>

#define u32 uint32_t
#define d32 int32_t

#define MOVE 4
#define SIZE 5

/*
		方向
	X
	Y
*/
d32 direction[2][MOVE] = {
	{1,0,-1,0},
	{0,1,0,-1}
};

d32 map[SIZE][SIZE] = {
	{1,0,1,2,0},
	{2,4,5,1,0},
	{0,3,4,0,1},
	{2,5,3,6,3},
	{9,8,0,2,1}
};

bool map_flag[SIZE][SIZE];
// 此处自动初始化为false

d32 sum = 0;
void process_find(d32 x,d32 y)
{

	if (!map_flag[x][y])
	{
		map_flag[x][y] = true;
		sum += map[x][y];
	}

	for (d32 index = 0; index < SIZE; index++)
	{
		if (x + direction[0][index] < 0 || y + direction[1][index] < 0)
		{
			continue;
		}
		if (x + direction[0][index] >= SIZE || y + direction[1][index] >= SIZE)
		{
			continue;
		}

		if (!map_flag[x + direction[0][index]][y + direction[1][index]])
		{
			process_find(x + direction[0][index], y + direction[1][index]);
		}
	}
}

int main(void)
{
	process_find(0, 0);
	printf("%" PRId32 "\n", sum);

	return 0;
}