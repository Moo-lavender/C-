#define _CRT_SECURE_NO_WARNINGS 1
//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
#include<stdio.h>
#include<stdlib.h>
int main2()
{
	int a, b,average;
	printf("����������������>");
	scanf("%d%d", &a, &b);
	average = a + (b - a) / 2;
	printf("%d ", average);
	system("pause");
	return 0;
}
