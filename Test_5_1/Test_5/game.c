#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void menu()
{
	printf("****************************************\n");
	printf("***********    1.play    ***************\n");
	printf("***********    0.exit    ***************\n");
	printf("****************************************\n");
}

void game()
{
	int x = 0;
	srand((unsigned)time(NULL));
	int integer = rand() % 100 + 1;
	printf("请输入猜的数字->");
	while (x != integer)
	{
		scanf("%d", &x);
		if (x>integer)
		{
			printf("猜大了，请重新猜->");
		}
		else if (x<integer)
		{
			printf("猜小了，请重新猜->");
		}
	}
	if (x == integer)
	{
		printf("猜对了！请重新选择开始或者退出游戏：>");
	}
}