#define _CRT_SECURE_NO_WARNINGS 1
//5.ʵ��һ���������ж�һ�����ǲ���������
#include<stdio.h>
#include<stdlib.h>
int judge(int i)
{
	int j;
	for (j = 2; j <= i / 2; j++)
	{
		if (i%j == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i, r;
	printf("����һ��������>");
	scanf("%d", &i);
	r = judge(i);
	if (r == 1)
	{
		printf("%d������\n", i);
	}
	else
		printf("%d��������\n", i);
	system("pause");
	return 0;
}
