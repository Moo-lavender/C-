#define _CRT_SECURE_NO_WARNINGS 1
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ� ���ҳ�������֡���ʹ��λ���㣩
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main3()
{
	int a[20] = { 1, 2, 5, 8, 7, 8, 7, 4, 5, 2, 1,  };
	int ret = 0;
	for (int i = 0; i < 20; i++)
	{
		ret ^= a[i];  //��λ���
	}
	printf("%d\n",ret);
	system("pause");
	return 0;
} 
