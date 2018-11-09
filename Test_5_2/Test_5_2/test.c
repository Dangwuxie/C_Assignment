#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//2、题目：在一个整形有序数组中查找想要找的数字
//找到了返回下标，找不到返回-1.（折半查找）
//分析：如代码中的数组，假设要找数字9；那么可以这样做：先定义左下标右下标，以及最中间数的下标；
//将9与a[mid]比较大小，大了就在mid的右半部分，小了就在左半部分；如果等于，那就直接输出就行；这是第一次比较
//第二次：9小于a[4]，所以，左下标不变，右下标变成第一次mid的数的左边的数的下标，就是第一次mid的左半部分
//然后以此类推，直到最后一次，如果依旧没有key=a[mid],那就没有查到
int main()
{
	int i = 0;
	int a[10] = { 2, 4, 7, 9, 13, 15, 16, 17, 20, 21 };
	int key = 0;
	printf("请输入你要查找的数字（2, 4, 7, 9, 13, 15, 16, 17, 20, 21）：");
	scanf("%d", &key);
	int left = 0;
	int right = sizeof(a) / sizeof(a[0])-1;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (key>a[mid])
		{
			left = mid+1;

		}
		else if (key < a[mid])
		{
			right = mid-1;
		}
		else
			break;
	}
	if (left<=right)
	{
		printf("找到了，下标是%d\n",mid);
	}
	else
	{
		printf("没找到\n");
	}
	
	system("pause");
	return 0;
}