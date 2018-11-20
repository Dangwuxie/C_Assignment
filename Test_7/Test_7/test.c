#define _CRT_SECURE_NO_WARNINGS 1
//1.递归和非递归分别实现求第n个斐波那契数
//分析：斐波拉契数是1、1、2、3、5、8，就是前两个数相加
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
////第一种方法：非递归方法反向排列：
//int reverse_string(char * string)
//{
//	char * str = string;
//	int len = 0;
//	int i = 0;
//	while (*(str+i) != '\0')
//	{
//		len++;	
//		i++;
//	}
//	for ( i = 0; i < len; i++)
//	{
//		char tmp = 0;
//		if (i < len/2)
//		{
//			tmp = *(str + i);
//			*(str + i) = *(str+(len - i - 1));
//			*(str + (len - i - 1)) = tmp;
//		}
//	}
//	return len;
//}
//int main()
//{
//	int i = 0;
//	char arr[10] = { 0 };

//	gets(arr);
//	int len = reverse_string(arr);
//	for (i = 0; i < len; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	system("pause");
//	return 0;
//
//}
////第二种方法：递归；
//int Len(char *str)
//{
//	int i = 0;
//	while (*(str+i)!='\0')
//	{
//		i++;
//	}
//	return i;
//}
//void reverse_string(char * st)
//{
//	if (*st=='\0')
	//{
	//	return;
	//}
	//else
	//{
	//	//注意：这里面的顺序坚决不能改变；我在网上搜的学长的，
	//	//自己实在弄不出来，还好看懂了学长的，自己也敲了一遍
	//	char tmp = *st;//先把第一个字母赋给一个临时变量
	//	int length = Len(st);//第一二步顺序可以随意安排
	//	*st = *(st+(length - 1));//然后把最后一个字符赋值给第一个元素的位置；
	//	*(st + (length - 1)) = '\0';//下面这两句简直对我醍醐灌顶；
	//	//应该是，先把当前的字符串的最后一个元素变成'\0'；因为它已经赋值给第一个位置的元素了
	//	//就等将tmp的临时变量保存的元素赋给它就行了；但在这之前，得接着用递归继续变换当前字符串中间的字符
	//	//当前串里最后的字符变成'\0'后，再次调用，字符串的起始位置跟最后的元素位置，刚好是前一个函数里的字符串
	//	//除去首位元素后的一串字符，就这样按着这个顺序调用，直到中间剩个'\0'，就停止递归了；
//		reverse_string(st + 1);
//		*(st + (length - 1)) = tmp;
//	}	
//}
//int main()
//{
//	int i = 0;
//	char arr[100] = { 0 };
//	printf("输入一串字符：\n");
//
//-------------------------------------------------------------------------
//-------------------------------------------------------------------------
//5.递归和非递归分别实现strlen
////注意一下：这个程序的功能是统计除了'\0'之外所有的字符；
// 第一种：非递归
//int MyStrlen(char * st)
//{
//	int i = 0;
//	while (*(st + i) != '\0')
//	{
//		i++;
//	}
//	return i;
//}
//第二种：递归
//int MyStrlen(char * st)
//{
//	if (*st == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + MyStrlen(st + 1);
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	printf("请输入一串字符：");
//	gets(arr);
//	int len = MyStrlen(arr);
//	printf("字符串的长度为%d\n", len);
//
//	system("pause");
//	return 0;
//}
//-------------------------------------------------------------------------
//6.递归和非递归分别实现求n的阶乘
//递归的方法前面第二题做了，下面我想做一下非递归；
//int main()
//{
//	int k = 0;
//	int n = 0;
//	printf("请分别输入k和n，求k的n次方：\n");
//	scanf("%d %d", &k, &n);
//	////可以直接用以一个函数pow来计算
//	////int num = pow(k, n);
//	//printf("k的n次方=%d\n",(int) pow(k, n));
//	//或者可以用一个循环来解决：
//	int i = 0;
//	int num = 1;
//	for ( i = 0; i < k; i++)
//	{
//		num *= n;
//	}
//	printf("%d\n", num);
//
//
//	system("pause");
//	return 0;
//}
//-------------------------------------------------------------------------
//7.递归方式实现打印一个整数的每一位
void Print(int a)
{
	if (a>=1&&a<=9)
	{
		printf(" %d ", a);
	}
	else
	{	
		Print(a / 10);//这里注意一下，这两句如果调换一下顺序，打印出的顺序就是逆序的；
		printf(" %d ", a % 10);
	}
}
int main()
{
	int integer = 0;
	int i = 0;
	printf("Please input a integer :\n");
	scanf("%d", &integer);
	Print(integer);
	system("pause");
	return 0;
}