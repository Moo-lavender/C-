#define _CRT_SECURE_NO_WARNINGS 1
//3.��10 �����������ֵ��
#include<stdio.h>
#include<stdlib.h>
int main3()
{
	int i, max, j;
	int a[10];
	printf("������10������\n");
	for (i = 0; i<10; i++)
	{

		scanf("%d", &a[i]);
	}
	max = a[0];
	for (j = 0; j <10; j++)
	{
		if (max<a[j])
		{
			max = a[j];
		}
	}
	printf("�������ǣ�%d", max);
	system("pause");
	return 0;
}