#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int Judge_Prime(int prime)
{
	int i = 0;
	for ( i = 3; i <= sqrt(prime); i+=2)
	{
		if (prime%i == 0)
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}


}