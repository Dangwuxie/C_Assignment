#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//1、题目：给定两个整形变量的值，将两个值的内容进行交换
//int main()
//{
//	int a = 0;
//	int b = 0;
//	
//	printf("please input two integer:");
//	scanf("%d  %d", &a, &b);
//	//第一种方法，创建一个临时变量交换内容
//	//int t = 0;
//	//t = a;
//	//a = b;
//	//b = t;
//	//第二种方法，不创建临时变量交换
//// a-->1011   b-->0001
////  a = a^b==>1010
////  b = a^b==>1010^0001-->b=1011
////  a = a^b==>1010^1011-->a=0001
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d   b=%d", a, b);
//第三种方法：
//  a = a + b;//a是a+b的和
//  b = a - b;//a+b减去b的值就是前面a的值，再赋给b，这时b的值就是a的值，但a的值还不是b的值
//  a = a - b;//再a+b减去当前b的值，也就是以前a的值，就是以前b的值，然后再赋给a，这样就实现了呼唤；	
//	system("pause");
//	return 0;
//}
//题目2、求出十个整数中的最大值：
int main()
{
	int i = 0;
	int a[10] = {0};
	printf("please input ten integer :");
	for (i=0; i<10 ;i++ )
	{
		scanf("%d", &a[i]);
	}
	for ( i = 0; i < 9; i++)
	{
		int t = 0;
		if (a[i]>a[i+1])
		{
			t = a[i];
			a[i] = a[i + 1];
			a[i + 1] = t;
		}
	}
	printf("The biggest integer is %d\n", a[9]);
	system("pause");
	return 0;
}
//题目3：将三个数按从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a>b)
//	{
//		if (a>c)
//		{
//			printf("%d\n", a);
//			if (b>c)
//			{
//				printf("%d\n%d\n", b, c);
//			}
//			else
//			{
//				printf("%d\n%d\n", c, b);
//			}
//		}
//	}
//	else if (b>c)
//	{
//		printf("%d\n", b);
//		if (a>c)
//		{
//			printf("%d\n%d\n", a, c);
//		}
//		else
//		{
//			printf("%d\n%d\n", c, a);
//		}
//	}
//	else
//	{
//		printf("%d\n", c);
//		if (a>b)
//		{
//			printf("%d\n%d\n", a, b);
//		}
//		else
//		{
//			printf("%d\n%d\n", b, a);
//		}
//
//	}
//	system("pause");
//	return 0;
//}
//题目4：求两个数的最大公约数
//辗转相除法求解
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("please input two positive integer");
//	scanf("%d %d", &a, &b);
//	int num = 0;
//	int t = 0;
//	if (a<b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	while(a%b != 0)
//	{
//		t = a%b;
//		a = b;
//		b = t;
//	}
//	printf("The gcd is %d", b);
//	system("pause");
//	return 0;
//}