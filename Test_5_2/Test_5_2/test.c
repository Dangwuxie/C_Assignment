#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//2����Ŀ����һ���������������в�����Ҫ�ҵ�����
//�ҵ��˷����±꣬�Ҳ�������-1.���۰���ң�
//������������е����飬����Ҫ������9����ô�������������ȶ������±����±꣬�Լ����м������±ꣻ
//��9��a[mid]�Ƚϴ�С�����˾���mid���Ұ벿�֣�С�˾�����벿�֣�������ڣ��Ǿ�ֱ��������У����ǵ�һ�αȽ�
//�ڶ��Σ�9С��a[4]�����ԣ����±겻�䣬���±��ɵ�һ��mid��������ߵ������±꣬���ǵ�һ��mid����벿��
//Ȼ���Դ����ƣ�ֱ�����һ�Σ��������û��key=a[mid],�Ǿ�û�в鵽
//int main()
//{
//	int i = 0;
//	int a[10] = { 2, 4, 7, 9, 13, 15, 16, 17, 20, 21 };
//	int key = 0;
//	printf("��������Ҫ���ҵ����֣�2, 4, 7, 9, 13, 15, 16, 17, 20, 21����");
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
//		printf("�ҵ��ˣ��±���%d\n",mid);
//	}
//	else
//	{
//		printf("û�ҵ�\n");
//	}
//	
//	system("pause");
//	return 0;
//}
//��Ŀ3��3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
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
//			printf("������ȷ��");
//				break;
//		}
//		else
//		{
//			printf("�����������������->");
//				n--;
//		}
//	}
//	if (n==0)
//	{
//		printf("������������˳�����");
//	}
//	system("pause");
//	return 0;
//}
//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
int main()
{
	////����������ʹ�ÿ⺯��toupper()\tolower()��ֱ��ת��	
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
	//Ҳ����ֱ�Ӹ���ASCII�������ģ���д��ĸ��Сд��ĸ֮�����32��������
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
