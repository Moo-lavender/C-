#define _CRT_SECURE_NO_WARNINGS 1
//3.实现一个函数判断year是不是润年。
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
	printf(" 请输入一个年份：>");
	scanf("%d", &year);
	r = judge_year(year);
	if (r == 1)
	{
		printf("%d 是闰年\n", year);
	}
	else
		printf("%d 不是闰年\n", year);
	system("pause");
	return 0;
}