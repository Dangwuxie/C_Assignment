#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//1����Ŀ�������������α�����ֵ��������ֵ�����ݽ��н���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	
//	printf("please input two integer:");
//	scanf("%d  %d", &a, &b);
//	//��һ�ַ���������һ����ʱ������������
//	//int t = 0;
//	//t = a;
//	//a = b;
//	//b = t;
//	//�ڶ��ַ�������������ʱ��������
//// a-->1011   b-->0001
////  a = a^b==>1010
////  b = a^b==>1010^0001-->b=1011
////  a = a^b==>1010^1011-->a=0001
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d   b=%d", a, b);
//�����ַ�����
//  a = a + b;//a��a+b�ĺ�
//  b = a - b;//a+b��ȥb��ֵ����ǰ��a��ֵ���ٸ���b����ʱb��ֵ����a��ֵ����a��ֵ������b��ֵ
//  a = a - b;//��a+b��ȥ��ǰb��ֵ��Ҳ������ǰa��ֵ��������ǰb��ֵ��Ȼ���ٸ���a��������ʵ���˺�����	
//	system("pause");
//	return 0;
//}
//��Ŀ2�����ʮ�������е����ֵ��
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
//��Ŀ3�������������Ӵ�С���
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
//��Ŀ4���������������Լ��
//շת��������
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