#define _CRT_SECURE_NO_WARNINGS 1
//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//������쳲���������1��1��2��3��5��8������ǰ���������
#include <stdio.h>
#include <stdlib.h>
//------------------------------------------------------------------
//int Recursion(int i);
//int main()
//{
//�ǵݹ�ʵ�֣�
	//int i = 0;
	//int integer = 0;
	//int a[100] = { 1,1 };
	//printf("Please input a integer :");
	//scanf("%d", &integer);
	//for ( i = 2; i < integer; i++)
	//{
	//	a[i] = a[i - 1] + a[i - 2];
	//}
	//printf("��%d������Ϊ%d\n",integer, a[integer-1]);
////�ݹ�ʵ�֣�
//	/*int i = 0;
//	int recur = 0;
//	printf("Please input a integer :\n");
//	scanf("%d", &i);
//	recur = Recursion(i);
//	printf("��%d��Fibonacci number is %d\n", i, recur);
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
////2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ�֣�
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
//	printf("%d��%d�η���%d\n",n ,k ,ret);
//
//	system("pause");
//	return 0;
//}
//-------------------------------------------------------------------------
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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
//	printf("�����������֮��Ϊ%d\n", ret);
//	system("pause");
//	return 0;
//}
//-------------------------------------------------------------------------
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
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
	/*printf("���ú���ַ���Ϊ%s", arr2);*/
	system("pause");
	return 0;

}