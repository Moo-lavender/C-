#define _CRT_SECURE_NO_WARNINGS 1
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣� 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0, s = 0, i = 1;
	printf("������һ��10���ڵ�������");
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