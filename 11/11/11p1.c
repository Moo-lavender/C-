#define _CRT_SECURE_NO_WARNINGS 1
//дһ���������ز����������� 1 �ĸ��� 
#include<stdio.h>
#include<stdlib.h>
int count_ont_bits1(unsigned int value)
{
		int i, count = 0;
		for (i = value; i; i /= 2) //��λ����
		{
			count += i % 2;
	
		}
		return count;
}
	int count_ont_bits2(unsigned int value)
	{
		int  count = 0;
		while (value &= value - 1) //ÿ�ΰ����һλ��1�ð�λ�������ȥ0
		{
			count++;
		}
		return count +1;
	}
	int main1()
	{
		int n, ret = 0;
		printf("����һ��������>");
		scanf("%d", &n);
		ret = count_ont_bits2(n);
		printf("%d\n", ret);
		system("pause");
		return 0;

		system("pause");
		return 0;
	}
