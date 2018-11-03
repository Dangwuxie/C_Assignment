#include <stdio.h>
int main (void)
{
	int i,j,x;
	for (i=1;i<=9;i++)
	{
		for (j=1;j<=i;j++)
		{
			x = i * j ;
			printf ("    %d*%d=%d",j,i,x);
			if (i==j)
			printf ("\n");
		}
	
		//printf ("")
	}
	return 0;
}
