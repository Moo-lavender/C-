#define _CRT_SECURE_NO_WARNINGS 1
//1. �����������α�����ֵ��������ֵ�����ݽ��н�����
#include<stdio.h>
#include<stdlib.h>
int main1()
{
	int i, j, t;
	printf("�������� i= ");
	scanf("%d", &i);
	printf("�������� j= ");
	scanf("%d", &j);
	t = i;
	i = j;
	j = t;
	printf("i=%d", i);
	printf("\nj=%d", j);
	system("pause");
	return 0;
}
