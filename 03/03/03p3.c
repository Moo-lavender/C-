#define _CRT_SECURE_NO_WARNINGS 1
//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9�� 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 1, count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9 || i / 10 ==9)
			count++;
	}
	printf("1-100��9���ֵĴ���Ϊ: %d\n ", count);
	system("pause");
	return 0;
}
