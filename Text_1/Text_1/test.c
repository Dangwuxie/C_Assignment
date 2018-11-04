#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
////1.打印100-200之间的素数
//int main()
//{
//	int i, j;
//	for (i = 101; i<201; i += 2)//质数（素数除了2以外所有的偶数都是和数，所以只要遍历奇数就行了； 
//	{
//		for (j = 2; j<i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j >= i)
//			printf(" The prime is %d\n", i);
//	}
//
//	system("pause");
//	return 0;
//}
////2.输出乘法口诀表
//int main()
//{
//	int i, j, x;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			x = i * j;
//			printf("    %d*%d=%d", j, i, x);
//			if (i == j)
//				printf("\n");
//		}
//	}
//	system("pause");
//	return 0;
//}
////3.判断1000-2000年之间的闰年
////闰年的判断：能被4整除却不能被100整除，或者能被400整除
//int main(void)
//{
//	int year, flag, n;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 400 == 0)
//		{
//			flag = 1;
//		}
//		else{
//			if (year % 4 == 0)
//			{
//				if (year % 100 != 0){
//					flag = 1;
//				}
//				else{
//					flag = 0;
//				}
//			}
//			else{
//				flag = 0;//判断1000--2000年的闰年； 
//			}
//		}
//		if (flag)
//          {
//			   printf("%5d", year);
//			   n++;
//			   if (n % 10 == 0)
//          {
//				printf("\n");
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
int main(void)
{
	int year;
	int flag = 0;
	for (year = 1000; year <= 2000; year++)
	{

		if (year%4==0 &&year%100!=0 ||year%400==0 )
		{
			printf("%d  ", year);
			flag++;		
		}
		if (flag == 5)//每输出5个闰年，换行
		{
			printf("\n");
			flag = 0;
		}
		
	}
	system("pause");
	return 0;
}