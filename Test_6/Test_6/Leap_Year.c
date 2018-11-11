#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Leap_Year(int year)
{
	if (year%10==0 && year%100!=0 || year%400==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}