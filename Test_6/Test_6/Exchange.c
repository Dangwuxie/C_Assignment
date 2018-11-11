#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Exchange(int i, int j)
{
	int t = 0;
	t = i;
	i = j;
	j = t;
	printf("i = %d  j = %d", i, j);
}