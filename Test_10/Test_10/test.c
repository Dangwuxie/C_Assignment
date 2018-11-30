#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15       0000 1111       4 个 1
//程序原型：
//int  count_one_bits(unsigned int value)
//{
// 返回 1的位数
//}
//int count_one_bits(int integer)
//{
//	int count = 0;
//	while (integer > 0)
//	{
//		if (integer%2==1)
//		{
//			count++;
//			integer /= 2;
//		}
//		else
//		{
//			integer /= 2;
//		}
//	}
//	return count;
//}
////////////获取n的第i位的值，n>>(i-1)&1;
//int count_one_bits(unsigned int integer)
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 0; i < 32; i++)
//	{
//		if (((integer >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//////////////////////////////////
int count_one_bits(unsigned int integer)
{
	int count = 0;
	while (integer)
	{
		integer = integer&(integer - 1);//每与一次，他的二进制位少个1，将它的二进制位最低低位的1变成0；
		count++;//计数器；
	}
	return count;
}
/////////////////
//还可以这样：

int main()
{
	int integer = 0;
	printf("Please input a integer :");
	scanf("%d", &integer);
	//int count = count_one_bits(integer);
	printf("%d的二进制中1个数为%d个\n;", integer, count_one_bits(integer));
	system("pause");
	return 0;
}

//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
//void Bit(inte)
//{
//	if (inte == 1)
//	{
//		printf("%d",inte);
//	}
//	else
//	{
//		Bit(inte / 2);//调用递归的顺序贼重要，注意一下；
//		printf("%d", inte % 2);
//	}
//}
//
//void count_bits(int integer)
//{
//	int inte = integer;
//	int count1 = 0;
//	int count2 = 0;
//	int count3 = 0;
//	int two_bits = 0;
//	while (integer > 0)
//	{
//		if (integer%2 == 1)
//		{
//			count1++;
//			printf("第%d位是奇数\n", count1);
//			integer /= 2;
//			count2++;
//		}
//		else if (integer%2 == 0)
//		{
//			count1++;
//			printf("第%d位是偶数位\n", count1);
//			integer /= 2;
//			count3++;
//		}
//	}
//	Bit(inte);
//	printf("\n");
//	printf("奇数位一共%d个\n", count2);
//	printf("偶数位一共%d个\n", count3);
//}
//int main()
//{
//	int integer = 0;
//	printf("Please inout a integer :");
//	scanf("%d", &integer);
//	count_bits(integer);
//
//	system("pause");
//	return 0;
//}
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
//int main()
//{
//	int p = 0;
//	int q = 0;
//	int n = 0;
//	int count = 0;
//	printf("Please input a integer :\n");
//	scanf("%d %d", &p, &q);
//	n = p^q;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	printf("不同的1的个数一共有%d个 \n", count);
//
//	system("pause");
//	return 0;
//}




///*while (integer > 0)
//{
//	if (integer%2 == 1)
//	{
//		count1++;
//		integer /= 2;
//	}
//	else if (integer%2 == 0)
//	{
//		count2++;
//		integer /= 2;
//	}
//}
//printf("奇数位为%d个\n", count1);
//printf("偶数位为%d个\n", count2);*/