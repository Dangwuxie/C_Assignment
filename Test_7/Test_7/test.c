#define _CRT_SECURE_NO_WARNINGS 1
//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//������쳲���������1��1��2��3��5��8������ǰ���������
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
////��һ�ַ������ǵݹ鷽���������У�
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
////�ڶ��ַ������ݹ飻
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
	//	//ע�⣺�������˳�������ܸı䣻���������ѵ�ѧ���ģ�
	//	//�Լ�ʵ��Ū�����������ÿ�����ѧ���ģ��Լ�Ҳ����һ��
	//	char tmp = *st;//�Ȱѵ�һ����ĸ����һ����ʱ����
	//	int length = Len(st);//��һ����˳��������ⰲ��
	//	*st = *(st+(length - 1));//Ȼ������һ���ַ���ֵ����һ��Ԫ�ص�λ�ã�
	//	*(st + (length - 1)) = '\0';//�����������ֱ���������ඥ��
	//	//Ӧ���ǣ��Ȱѵ�ǰ���ַ��������һ��Ԫ�ر��'\0'����Ϊ���Ѿ���ֵ����һ��λ�õ�Ԫ����
	//	//�͵Ƚ�tmp����ʱ���������Ԫ�ظ����������ˣ�������֮ǰ���ý����õݹ�����任��ǰ�ַ����м���ַ�
	//	//��ǰ���������ַ����'\0'���ٴε��ã��ַ�������ʼλ�ø�����Ԫ��λ�ã��պ���ǰһ����������ַ���
	//	//��ȥ��λԪ�غ��һ���ַ����������������˳����ã�ֱ���м�ʣ��'\0'����ֹͣ�ݹ��ˣ�
//		reverse_string(st + 1);
//		*(st + (length - 1)) = tmp;
//	}	
//}
//int main()
//{
//	int i = 0;
//	char arr[100] = { 0 };
//	printf("����һ���ַ���\n");
//
//-------------------------------------------------------------------------
//-------------------------------------------------------------------------
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
////ע��һ�£��������Ĺ�����ͳ�Ƴ���'\0'֮�����е��ַ���
// ��һ�֣��ǵݹ�
//int MyStrlen(char * st)
//{
//	int i = 0;
//	while (*(st + i) != '\0')
//	{
//		i++;
//	}
//	return i;
//}
//�ڶ��֣��ݹ�
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
//	printf("������һ���ַ���");
//	gets(arr);
//	int len = MyStrlen(arr);
//	printf("�ַ����ĳ���Ϊ%d\n", len);
//
//	system("pause");
//	return 0;
//}
//-------------------------------------------------------------------------
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//�ݹ�ķ���ǰ��ڶ������ˣ�����������һ�·ǵݹ飻
//int main()
//{
//	int k = 0;
//	int n = 0;
//	printf("��ֱ�����k��n����k��n�η���\n");
//	scanf("%d %d", &k, &n);
//	////����ֱ������һ������pow������
//	////int num = pow(k, n);
//	//printf("k��n�η�=%d\n",(int) pow(k, n));
//	//���߿�����һ��ѭ���������
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
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
void Print(int a)
{
	if (a>=1&&a<=9)
	{
		printf(" %d ", a);
	}
	else
	{	
		Print(a / 10);//����ע��һ�£��������������һ��˳�򣬴�ӡ����˳���������ģ�
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