#define _CRT_SECURE_NO_WARNINGS 1
//4.�����������Ӵ�С�����
#include<stdio.h>
#include<stdlib.h>
int main4()
{
	int i, j, k, max;
	printf("��������������\n");
	scanf("%d %d %d", &i, &j, &k);
	max = i;
	if (j>i)
	{
		max = j;
		if (k>j)
		{
			max = k;
		}
	}
	else if (k>i)
		max = k;
	printf("�������ǣ�%d", max);
	system("pause");
	return 0;
}
