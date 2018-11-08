#define _CRT_SECURE_NO_WARNINGS 1
//题目1：猜数字游戏
#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
void menu();
void game();
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("选择开始或者退出游戏：>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏！");
				break;
			default:
				printf("输入错误，请重新输入！");
				break;
		}
		printf("\n");
	} while (input);
	system("pause");
	return 0;
}
