#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//1.
//дһ���������ز����������� 1 �ĸ���
//���磺 15       0000 1111       4 �� 1
//����ԭ�ͣ�
//int  count_one_bits(unsigned int value)
//{
// ���� 1��λ��
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
////////////��ȡn�ĵ�iλ��ֵ��n>>(i-1)&1;
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
		integer = integer&(integer - 1);//ÿ��һ�Σ����Ķ�����λ�ٸ�1�������Ķ�����λ��͵�λ��1���0��
		count++;//��������
	}
	return count;
}
/////////////////
//������������

int main()
{
	int integer = 0;
	printf("Please input a integer :");
	scanf("%d", &integer);
	//int count = count_one_bits(integer);
	printf("%d�Ķ�������1����Ϊ%d��\n;", integer, count_one_bits(integer));
	system("pause");
	return 0;
}

//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
//void Bit(inte)
//{
//	if (inte == 1)
//	{
//		printf("%d",inte);
//	}
//	else
//	{
//		Bit(inte / 2);//���õݹ��˳������Ҫ��ע��һ�£�
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
//			printf("��%dλ������\n", count1);
//			integer /= 2;
//			count2++;
//		}
//		else if (integer%2 == 0)
//		{
//			count1++;
//			printf("��%dλ��ż��λ\n", count1);
//			integer /= 2;
//			count3++;
//		}
//	}
//	Bit(inte);
//	printf("\n");
//	printf("����λһ��%d��\n", count2);
//	printf("ż��λһ��%d��\n", count3);
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
//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
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
//	printf("��ͬ��1�ĸ���һ����%d�� \n", count);
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
//printf("����λΪ%d��\n", count1);
//printf("ż��λΪ%d��\n", count2);*/