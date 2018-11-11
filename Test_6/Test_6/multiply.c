#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Mult_Table(int i)
{
	//int length = i;
	int x = i;
	int y = i;
	for ( x = 1; x <= i; x++)
	{
		for ( y = 1; y <= x; y++)
		{
			printf("%d*%d=%-4d", y, x, x*y);
		}
		printf("\n");
	}
}