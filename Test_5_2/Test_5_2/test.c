#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//2、题目：在一个整形有序数组中查找想要找的数字
//找到了返回下标，找不到返回-1.（折半查找）
//分析：如代码中的数组，假设要找数字9；那么可以这样做：先定义左下标右下标，以及最中间数的下标；
//将9与a[mid]比较大小，大了就在mid的右半部分，小了就在左半部分；如果等于，那就直接输出就行；这是第一次比较
//第二次：9小于a[4]，所以，左下标不变，右下标变成第一次mid的数的左边的数的下标，就是第一次mid的左半部分
//然后以此类推，直到最后一次，如果依旧没有key=a[mid],那就没有查到
//int main()
//{
//	int i = 0;
//	int a[10] = { 2, 4, 7, 9, 13, 15, 16, 17, 20, 21 };
//	int key = 0;
//	printf("请输入你要查找的数字（2, 4, 7, 9, 13, 15, 16, 17, 20, 21）：");
//	scanf("%d", &key);
//	int left = 0;
//	int right = sizeof(a) / sizeof(a[0])-1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (key>a[mid])
//		{
//			left = mid+1;
//
//		}
//		else if (key < a[mid])
//		{
//			right = mid-1;
//		}
//		else
//			break;
//	}
//	if (left<=right)
//	{
//		printf("找到了，下标是%d\n",mid);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	
//	system("pause");
//	return 0;
//}
//题目3：3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//int main()
//{
//	char arr1[10] = "123456";
//	char arr2[10] = "";
//	int n = 3;
//	printf("Please input a password:");
//	while (n)
//	{
//		gets(arr2);
//		if (strcmp(arr1,arr2)==0)
//		{
//			printf("密码正确！");
//				break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入->");
//				n--;
//		}
//	}
//	if (n==0)
//	{
//		printf("三次输入错误！退出程序！");
//	}
//	system("pause");
//	return 0;
//}
//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
int main()
{
	////分析：可以使用库函数toupper()\tolower()，直接转换	
	//char alpha;
	//char letter = 0;
	//while (1)
	//{
	//	alpha = getchar();
	//	if (alpha >= 'A'&&alpha <= 'Z')
	//	{
	//		printf("%c\n", tolower(alpha));
	//		printf("---------------------------------------------------------\n");
	//	}
	//	else if (alpha >= 'a'&&alpha <= 'z')
	//	{
	//		printf("%c\n", toupper(alpha));
	//		printf("---------------------------------------------------------\n");
	//	}
	//}
	//也可以直接根据ASCII码表上面的，大写字母跟小写字母之间相差32，来计算
	char alpha;
	while (1)
	{
		alpha = getchar();
		if (alpha>='a'&&'z'>=alpha)
		{
			printf("%c\n", alpha - 32);
			printf("---------------------------------------------------------\n");
		}
		else if (alpha>='A'&&'Z'>=alpha)
		{
			printf("%c\n", alpha + 32);
			printf("---------------------------------------------------------\n");
		}

	}
	system("pause");
	return 0;
}
