#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

#include "Functions.h"

#include <inttypes.h>
#include <stdlib.h>
#include <Windows.h>

#include "ProcessType.h"

#define D32 int32_t

#define U64 uint64_t
#define U32 uint32_t
#define U8 uint8_t

#define MAX 100
#define TOTAL_STAPS 50



// 欢迎界面
void Welcome(void)
{
	printf("\n");
	printf("  __        __   _\n");
	printf("  \\ \\      / /__| | ___ ___  _ __ ___   ___\n");
	printf("   \\ \\ /\\ / / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\\n");
	printf("    \\ V  V /  __/ | (_| (_) | | | | | |  __/\n");
	printf("     \\_/\\_/ \\___|_|\\___\\___/|_| |_| |_|\\___|\n");
	printf("\n");

	ProcessBar();
	printf("\n\n");

	system("pause");
}

// 模拟加载进程
void ProcessBar(void)
{
	puts("\n加载中，请稍等");

	for (U32 i = 0; i <= TOTAL_STAPS; i++)
	{
		printf("\r[");

		// 打印进度条部分
		for (U32 j = 0; j < i; j++)
		{
			printf("#");
		}
		for (U32 j = i; j < TOTAL_STAPS; j++)
		{
			printf(" ");
		}

		printf("] %" PRIu32 "%%", (i * 100) / TOTAL_STAPS);

		fflush(stdout); // 确保即时显示
		Sleep(50); // 模拟加载延迟
	}
}

//进程循环
void processLoop(ProcessType type)
{
	bool isExit = false;

	while (!isExit)
	{
		system("cls");

		NowMenuId(type);

		switch (type)
		{
		case MainMenu:
			MainProcess(&isExit);
			break;
		case LeastBiggestCommonMultiple:
			Find_LeastBiggestCommonMultiple(&isExit);
			break;
		case SaddlePoint:
			Find_SaddlePoint(&isExit);
			break;
		case MaxLength:
			Find_MaxLength(&isExit);
			break;
		case TenToSixteen:
			Find_TenToSixteen(&isExit);
			break;
		case Exit:
			JudgeExit(&isExit);
			break;
		}
	}
}

//打印主菜单
void Print_Menu(void)
{
	printf("+-------------------------------+\n");
	printf("| 1.寻找最小公倍数和最大公约数	|\n");
	printf("| 2.寻找鞍点			|\n");
	printf("| 3.寻找最长字符串		|\n");
	printf("| 4.十进制转十六进制		|\n");
	printf("| 5.退出			|\n");
	printf("+-------------------------------+\n");
}

//当前菜单ID
void NowMenuId(ProcessType type)
{
	switch (type)
	{
	case MainMenu:
		printf("Current menu: 主菜单\n");
		break;
	case LeastBiggestCommonMultiple:
		printf("Current menu: 寻找最小公倍数\n");
		break;
	case SaddlePoint:
		printf("Current menu: 寻找鞍点\n");
		break;
	case MaxLength:
		printf("Current menu: 寻找最长字符串\n");
		break;
	case TenToSixteen:
		printf("Current menu: 十进制转十六进制\n");
		break;
	case Exit:
		printf("Current menu: 退出\n");
		break;
	default:
		break;
	}
	printf("\n");
}

//主进程
void MainProcess(bool* isExit)
{
	Print_Menu();

	switch (JudgeInput())
	{
	case 1:
		processLoop(LeastBiggestCommonMultiple);
		break;
	case 2:
		processLoop(SaddlePoint);
		break;
	case 3:
		processLoop(MaxLength);
		break;
	case 4:
		processLoop(TenToSixteen);
		break;
	case 5:
		JudgeExit(isExit);
		system("cls");
		break;
	default:
		printf("输入错误，请重新输入\n\n");
		system("pause");
		break;
	}
}

//寻找最小公倍数和最大公约数
void Find_LeastBiggestCommonMultiple(bool* isExit)
{
	//输入两个数
	printf("请输入两个数(以空格间隔)：");
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	printf("\n");

	//最小公约数
	int a = num1, b = num2, temp;
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	printf("最大公约数为：%d\n", a);

	//最小公倍数
	printf("最小公倍数为：%d\n", num1 * num2 / a);


	ClearInputBuffer();
	JudgeExit(isExit);
}

//寻找鞍点
void Find_SaddlePoint(bool* isExit)
{
	//输入矩阵的行数和列数
	printf("请输入矩阵的行数和列数(以空格间隔)：");
	int row, col;
	scanf_s("%d %d", &row, &col);
	printf("\n");

	//为矩阵分配内存
	int** matrix = (int**)malloc(row * sizeof(int*));
	for (int i = 0; i < row; i++)
	{
		matrix[i] = (int*)malloc(col * sizeof(int));
	}

	//输入矩阵
	printf("请输入矩阵(数字之间以空格间隔)：\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			scanf_s("%d", &matrix[i][j]);
		}
	}

	
	//寻找鞍点
	//每行的最大值的列号(可能含有多个)
	int** maxCol = (int**)malloc(row * sizeof(int*));
	for (int i = 0; i < row; i++)
	{
		maxCol[i] = (int*)malloc(col * sizeof(int));
	}
	//每列的最小值的行号(可能含有多个)
	int** minRow = (int**)malloc(col * sizeof(int*));
	for (int i = 0; i < col; i++)
	{
		minRow[i] = (int*)malloc(row * sizeof(int));
	}
	//初始化
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			maxCol[i][j] = 0;
		}
	}
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			minRow[i][j] = 0;
		}
	}

	//每行的最大值的索引数
	int* maxColIndex = (int*)malloc(row * sizeof(int));
	//每列的最小值的索引数
	int* minRowIndex = (int*)malloc(col * sizeof(int));
	//初始化
	for (int i = 0; i < row; i++)
	{
		maxColIndex[i] = 0;
	}
	for (int i = 0; i < col; i++)
	{
		minRowIndex[i] = 0;
	}

	//寻找每行的最大值
	for (int i = 0; i < row; i++)
	{
		int max = matrix[i][0];
		for (int j = 1; j < col; j++)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
			}
		}
		for (int j = 0; j < col; j++)
		{
			if (matrix[i][j] == max)
			{
				maxCol[i][maxColIndex[i]] = j;
				maxColIndex[i]++;
			}
		}
	}

	//寻找每列的最小值
	for (int i = 0; i < col; i++)
	{
		int min = matrix[0][i];
		for (int j = 1; j < row; j++)
		{
			if (matrix[j][i] < min)
			{
				min = matrix[j][i];
			}
		}
		for (int j = 0; j < row; j++)
		{
			if (matrix[j][i] == min)
			{
				minRow[i][minRowIndex[i]] = j;
				minRowIndex[i]++;
			}
		}
	}

	//输出鞍点
	bool isSaddlePoint = false;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			for (int k = 0; k < maxColIndex[i]; k++)
			{
				if (maxCol[i][k] == j)
				{
					for (int l = 0; l < minRowIndex[j]; l++)
					{
						if (minRow[j][l] == i)
						{
							printf("第%d行第%d列为鞍点,大小为%d\n", i + 1, j + 1, matrix[i][j]);
							isSaddlePoint = true;
						}
					}
				}
			}
		}
	}

	//释放内存
	//矩阵
	for (int i = 0; i < row; i++)
	{
		free(matrix[i]);
	}
	free(matrix);
	//每行的最大值的列号
	for (int i = 0; i < row; i++)
	{
		free(maxCol[i]);
	}
	free(maxCol);
	//每列的最小值的行号
	for (int i = 0; i < col; i++)
	{
		free(minRow[i]);
	}
	free(minRow);
	//每行的最大值的索引数
	free(maxColIndex);
	//每列的最小值的索引数
	free(minRowIndex);


	ClearInputBuffer();
	JudgeExit(isExit);
}

//寻找最长字符串
void Find_MaxLength(bool* isExit)
{
	//输入字符串
	printf("请输入字符串(长度限制为1000)：");
	char str[MAX * 10];
	gets_s(str, MAX * 10);

	//寻找最长字符串
	int max = 0;
	int maxIndex = 0;
	int index = 0;
	while (str[index] != '\0')
	{
		int count = 0;
		while (str[index] != ' ' && str[index] != '\0')
		{
			count++;
			index++;
		}
		if (count > max)
		{
			max = count;
			maxIndex = index - count;
		}
		if (str[index] != '\0')
		{
			index++;
		}
	}

	//输出最长字符串
	printf("最长字符串为：");
	for (int i = maxIndex; i < maxIndex + max; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");

	JudgeExit(isExit);
}

//十进制转十六进制
void Find_TenToSixteen(bool* isExit)
{
	//输入十进制数
	printf("请输入一个十进制数：");
	int num;
	scanf_s("%d", &num);
	printf("\n");

	//转换为十六进制
	 
	// 简洁版
	//printf("转换为十六进制为：%x\n", num);

	// 算法版
	printf("转换为十六进制为：");
	U32 temp = num;
	U8 hex[MAX];
	U32 index = 0;
	while (temp != 0)
	{
		U8 remainder = temp % 16;
		if (remainder < 10)
		{
			hex[index] = remainder + '0';
		}
		else
		{
			hex[index] = remainder - 10 + 'A';
		}
		temp /= 16;
		index++;
	}
	for (U32 i = index; i > 0; i--)
	{
		printf("%c", hex[i - 1]);
	}
	printf("\n");


	ClearInputBuffer();
	JudgeExit(isExit);
}

//判断是否退出
void JudgeExit(bool* isExit)
{
	printf("\n是否退出？(1.是 2.否)\n");
	switch (JudgeInput())
	{
	case 1:
		*isExit = true;
		break;
	case 2:
		*isExit = false;
		break;
	default:
		printf("输入错误，请重新输入\n");
		break;
	}
}

//判断输入是否合法
int JudgeInput(void)
{
	char inputBuffer[MAX];
	printf("\n请输入您的选择：");
	gets_s(inputBuffer, MAX);

	//正确输入必然是数字，并且是从头开始的，所以只需要判断字符是否是数字即可
	D32 index = 0;
	D32 choice = 0;
	while (inputBuffer[index] != '\0')
	{
		if (inputBuffer[index] < '0' || inputBuffer[index] > '9')
		{
			return -1;
		}
		if (inputBuffer[index] >= '0' && inputBuffer[index] <= '9')
		{
			choice = choice * 10 + inputBuffer[index] - '0';
		}
		index++;
	}

	return choice;
}

//清空输入缓冲区
void ClearInputBuffer(void)
{
	char c;
	while ((c = getchar()) != '\n');
}