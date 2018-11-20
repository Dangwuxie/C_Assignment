#define _CRT_SECURE_NO_WARNINGS 1
//1.递归和非递归分别实现求第n个斐波那契数
//分析：斐波拉契数是1、1、2、3、5、8，就是前两个数相加
#include <stdio.h>
#include <stdlib.h>
//------------------------------------------------------------------
//int Recursion(int i);
//int main()
//{
//非递归实现：
	//int i = 0;
	//int integer = 0;
	//int a[100] = { 1,1 };
	//printf("Please input a integer :");
	//scanf("%d", &integer);
	//for ( i = 2; i < integer; i++)
	//{
	//	a[i] = a[i - 1] + a[i - 2];
	//}
	//printf("第%d个数字为%d\n",integer, a[integer-1]);
////递归实现：
//	/*int i = 0;
//	int recur = 0;
//	printf("Please input a integer :\n");
//	scanf("%d", &i);
//	recur = Recursion(i);
//	printf("第%d个Fibonacci number is %d\n", i, recur);
//	system("pause");
//	return 0;
//}
//int Recursion(int i)
//{
//	if (i == 2 || i == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return Recursion(i - 1) + Recursion(i - 2);
//	}
//}*/
////2.编写一个函数实现n^k，使用递归实现；
//-------------------------------------------------------------------------
//int pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*pow(n,k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = pow(n, k);
//	printf("%d的%d次方是%d\n",n ,k ,ret);
//
//	system("pause");
//	return 0;
//}
//-------------------------------------------------------------------------
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//int DigitSum(int n)
//{
//	//int count = 0;
//	if (n<=9&&n>=1)
//	{
//		return n;
//	}
//	else
//	{	
//		return (n%10 + DigitSum(n/10));
//	}
//
//}
//int main()
//{
//	int n = 0;
//	printf("Please input a integer :\n");
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("组成它的数字之和为%d\n", ret);
//	system("pause");
//	return 0;
//}
//-------------------------------------------------------------------------
//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
void reverse_string(char * string)
{
	char * str = string;
	int len = 0;
	int i = 0;
	while (*(str+i) != '\0')
	{
		len++;	
		i++;
	}
	for ( i = 0; i < len; i++)
	{
		char tmp = 0;
		if (i < len/2)
		{
			tmp = *(str + i);
			*(str + i) = *(str+(len - i - 1));
			*(str + (len - i - 1)) = tmp;
		}
	}

	for ( i = 0; i < len; i++)
	{
		printf("%c", *(str + i));
	}
	printf("\n");
}
int main()
{
	char arr[] = { 0 };
	gets(arr);
	/*char arr2[] = */reverse_string(arr);
	///*int arr2 = */reverse_string(arr);
	/*printf("倒置后的字符串为%s", arr2);*/
	system("pause");
	return 0;

}