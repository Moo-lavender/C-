#define _CRT_SECURE_NO_WARNINGS 1
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字， 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0, s = 0, i = 1;
	printf("请输入一个10以内的整数：");
	scanf("%d", &a);
	s = a;
	for (i = 1; i < 5; i++)
	{
		a = a * 10 + a;
		s += a;

	}
	printf("%d ", s);
	system("pause");
	return 0;
}