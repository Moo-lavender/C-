#define _CRT_SECURE_NO_WARNINGS 1
//3.ʵ��һ�������ж�year�ǲ������ꡣ
#include<stdio.h>
#include<stdlib.h>

int judge_year(int year)
{
	return((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int main3()
{
	int year;
	int r;
	printf(" ������һ����ݣ�>");
	scanf("%d", &year);
	r = judge_year(year);
	if (r == 1)
	{
		printf("%d ������\n", year);
	}
	else
		printf("%d ��������\n", year);
	system("pause");
	return 0;
}