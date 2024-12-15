#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <stdlib.h>

// 求最大公约数的函数

int gcd(int a, int b) {

    int temp;

    while (b != 0) {

        temp = b;

        b = a % b;

        a = temp;

    }

    return a;

}

// 求最小公倍数的函数，根据最大公约数来求

int lcm(int a, int b) {

    return a * b / gcd(a, b);

}

// 求两个整数的最大公约数和最小公倍数的功能函数

void func1() {

    int num1, num2;

    printf("请输入两个整数：\n");

    scanf("%d %d", &num1, &num2);

    printf("最大公约数为：%d\n", gcd(num1, num2));

    printf("最小公倍数为：%d\n", lcm(num1, num2));

    char yes;

    printf("是否继续计算？输入\"Y\"继续，任意键退回主菜单:");

    scanf("%c", &yes);



}

// 找二维数组鞍点的功能函数

void func2() {

    int arr[10][10];

    int i, j, k;

    int row = 0, col = 0;

    int flag;

    // 输入二维数组

    printf("请输入二维数组的行数和列数（不超过10行10列）：\n");

    scanf("%d %d", &row, &col);

    printf("请输入二维数组的元素：\n");

    for (i = 0; i < row; i++) {

        for (j = 0; j < col; j++) {

            scanf("%d", &arr[i][j]);

        }

    }

    // 找鞍点

    for (i = 0; i < row; i++) {

        for (j = 0; j < col; j++) {

            flag = 1;

            // 比较行

            for (k = 0; k < col; k++) {

                if (arr[i][j] > arr[i][k]) {

                    flag = 0;

                    break;

                }

            }

            // 比较列

            if (flag) {

                for (k = 0; k < row; k++) {

                    if (arr[i][j] < arr[k][j]) {

                        flag = 0;

                        break;

                    }

                }

            }

            if (flag) {

                printf("鞍点为：%d，在第%d行第%d列\n", arr[i][j], i + 1, j + 1);

            }

        }

    }

    char yes;

    printf("是否继续计算？输入\"Y\"继续，任意键退回主菜单:");

    scanf("%c", &yes);

    return;

}

// 找出最长单词的功能函数

void func3() {

    char str[100];

    int i = 0, j = 0;

    int len = 0, maxLen = 0;

    int start = 0;

    printf("请输入一行字符：\n");

    //gets(str);

    while (str[i] != '\0') {

        if (str[i] != ' ') {

            len++;

            if (len == 1) {

                start = i;

            }

        }
        else {

            if (len > maxLen) {

                maxLen = len;

                j = start;

            }

            len = 0;

        }

        i++;

    }

    if (len > maxLen) {

        maxLen = len;

        j = start;

    }

    printf("最长的单词是：");

    for (i = j; i < j + maxLen; i++) {

        printf("%c", str[i]);

    }

    printf("\n");

    char yes;

    printf("是否继续计算？输入\"Y\"继续，任意键退回主菜单:");

    scanf("%c", &yes);

    return;

}

// 十六进制转十进制的功能函数

void func4() {

    char hexNum[100];

    long int decimal;

    int i;

    printf("请输入一个十六进制数：\n");

    scanf("%s", hexNum);

    decimal = strtol(hexNum, NULL, 16);

    printf("相应的十进制数为：%ld\n", decimal);

    char yes;

    printf("是否继续计算？输入\"Y\"继续，任意键退回主菜单:");

    scanf("%c", &yes);

    return;

}





int main() {

    char yer;

    int choice;

    while (1) {

        printf("*************************主菜单**********************\n");

        printf("1、求两个整数的最大公约数和最小公倍数\n");

        printf("2、找出一个二维数组中的鞍点，二维数组元素由键盘输入\n");

        printf("3、输入一行字符，将此字符中的最长的单词输出\n");

        printf("4、输入一个十六进制数，输出相应的十进制数\n");

        printf("5、退出程序\n");

        printf("*****************************************************\n");

        printf("请输入你的选择：");

        scanf("%d", &choice);

        switch (choice) {

        case 1:

            int yes;

            do {

                func1();

                scanf("%c", &yes);

            } while (yes == 'y' || yes == 'Y');

            break;

        case 2:

            do {

                func2();

                scanf("%c", &yes);

            } while (yes == 'y' || yes == 'Y');

            break;

        case 3:

            do {

                func3();

                scanf("%c", &yes);

            } while (yes == 'y' || yes == 'Y');

            break;

        case 4:

            do {

                func4();

                scanf("%c", &yes);

            } while (yes == 'y' || yes == 'Y');

            break;

        case 5:

            exit(0);

        default:

            printf("输入错误，请重新输入！\n");

        }

    }

    return 0;

}