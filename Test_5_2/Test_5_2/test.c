#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//2����Ŀ����һ���������������в�����Ҫ�ҵ�����
//�ҵ��˷����±꣬�Ҳ�������-1.���۰���ң�
//������������е����飬����Ҫ������9����ô�������������ȶ������±����±꣬�Լ����м������±ꣻ
//��9��a[mid]�Ƚϴ�С�����˾���mid���Ұ벿�֣�С�˾�����벿�֣�������ڣ��Ǿ�ֱ��������У����ǵ�һ�αȽ�
//�ڶ��Σ�9С��a[4]�����ԣ����±겻�䣬���±��ɵ�һ��mid��������ߵ������±꣬���ǵ�һ��mid����벿��
//Ȼ���Դ����ƣ�ֱ�����һ�Σ��������û��key=a[mid],�Ǿ�û�в鵽
int main()
{
	int i = 0;
	int a[10] = { 2, 4, 7, 9, 13, 15, 16, 17, 20, 21 };
	int key = 0;
	printf("��������Ҫ���ҵ����֣�2, 4, 7, 9, 13, 15, 16, 17, 20, 21����");
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
		printf("�ҵ��ˣ��±���%d\n",mid);
	}
	else
	{
		printf("û�ҵ�\n");
	}
	
	system("pause");
	return 0;
}