#define _CRT_SECURE_NO_WARNINGS 1
//4.����һ�����飬ʵ�ֺ���init������ʼ�����顢ʵ��empty����������顢ʵ��reverse���������������Ԫ�ص����á�Ҫ���Լ���ƺ����Ĳ���������ֵ��
#include<stdio.h>
#include<stdlib.h>
void show(int a[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n");
}

void init(int a[], int len)
{
	int i = 0;
	printf("������%d����������ʼ������\n", len);
	for (i = 0; i < len; i++)
	{
		scanf("%d", &a[i]);
	}
}
void reverse(int a[], int len)
{
	int i, j, t;
	for (i = 0, j = len - 1; i < j; i++, j--)
	{

		t = a[j];
		a[j] = a[i];
		a[i] = t;
	}
}
void empty(int a[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		a[i] = 0;
	}
}

int main4()
{
	int a[10];
	int len = 10;
	init(a, len);
	show(a, len);
	reverse(a, len);
	show(a, len);
	empty(a, len);
	show(a, len);
	system("pause");
	return 0;
}