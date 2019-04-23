#define _CRT_SECURE_NO_WARNINGS 1
//1.递归和非递归分别实现求第n个斐波那契数。
#include<stdio.h>
#include<stdlib.h>
int fib1(int n)
{
	int an, an_1 = 1, an_2 = 1, i;
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		for (i = 2; i < n; i++)
		{
			an = an_1 + an_2;
			an_2 = an_1;
			an_1 = an;
		}
		return an;
	}
}
int fib2(int n)
{

	if (n <= 2)
	{
		return 1;
	}
	else return(fib2(n - 1) + fib2(n - 2));
}


int main()
{
	int f, r;
	scanf("%d", &f);
	r = fib1(f);
	printf("第%d位数是%d\n", f, r);
	r = fib2(f);
	printf("第%d位数是%d\n", f, r);
	system("pause");
	return 0;
}