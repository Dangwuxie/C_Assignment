#include <stdio.h>
//#include <math.h>
int main (void)
{
	int i,j;
	for (i=101;i<201;i+=2)//质数（素数除了2以外所有的偶数都是和数，所以只要遍历奇数就行了； 
	{
		for (j=2;j<i;j++)
		{
			if (i%j==0)
			break;
		}
		if (j>=i)
		printf (" The prime is %d\n",i);
	}
}
