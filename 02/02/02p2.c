#define _CRT_SECURE_NO_WARNINGS 1
//2. ����������ʱ����������������������
#include<stdio.h>
#include<stdlib.h>
int main2()
{
	int i, j;
	printf("�������� i= ");
	scanf("%d", &i);
	printf("�������� j= ");
	scanf("%d", &j);
	i = i + j;
	j = i - j;
	i = j - i;
	printf("i=%d", i);
	printf("\nj=%d", j);
	system("pause");
	return 0;
}
