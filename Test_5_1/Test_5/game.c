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
	printf("������µ�����->");
	while (x != integer)
	{
		scanf("%d", &x);
		if (x>integer)
		{
			printf("�´��ˣ������²�->");
		}
		else if (x<integer)
		{
			printf("��С�ˣ������²�->");
		}
	}
	if (x == integer)
	{
		printf("�¶��ˣ�������ѡ��ʼ�����˳���Ϸ��>");
	}
}