#include <stdio.h>
//#include <math.h>
int main (void)
{
	int i,j;
	for (i=101;i<201;i+=2)//��������������2�������е�ż�����Ǻ���������ֻҪ�������������ˣ� 
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
