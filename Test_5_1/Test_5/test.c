#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ1����������Ϸ
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
		printf("ѡ��ʼ�����˳���Ϸ��>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ��");
				break;
			default:
				printf("����������������룡");
				break;
		}
		printf("\n");
	} while (input);
	system("pause");
	return 0;
}
