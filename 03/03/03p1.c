#define _CRT_SECURE_NO_WARNINGS 1
//1. ������A�е����ݺ�����B�е����ݽ��н�����������һ����
#include<stdio.h>
#include<stdlib.h>
int main1()
{
	int i, j, k, t;
	int arr[10];
	int a[10];
	printf("��Ϊ����1����10������\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("��Ϊ����2����10������\n");
	for (j = 0; j < 10; j++)
	{
		scanf("%d", &a[j]);
	}
	for (k = 0; k < 10; k++)
	{
		t = arr[k];
		arr[k] = a[k];
		a[k] = t;
	}
	printf("����1Ϊ��\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("����2Ϊ��\n");
	for (j = 0; j < 10; j++)
	{
		printf("%d ", a[j]);
	}
	system("pause");
	return 0;
}