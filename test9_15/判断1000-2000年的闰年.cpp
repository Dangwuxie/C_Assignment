#include <stdio.h>
int main (void)
{
	int year ,flag ,n;
	for (year=1000;year<=2000;year++)
	{
		if (year%400==0)
		{
			flag = 1;
		}
		else{
			if(year%4==0)
			{
				if (year%100!=0){
					flag = 1 ;
				}
				else{
					flag = 0 ;
				}
			}
			else{
				flag = 0;//ÅĞ¶Ï1000--2000ÄêµÄÈòÄê£» 
			}
		}
		if(flag){
			printf("%5d",year);
			n++;
			if(n%10==0){
				printf ("\n");
			}
		}
	}
	return 0;
}
