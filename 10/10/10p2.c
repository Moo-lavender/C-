#define _CRT_SECURE_NO_WARNINGS 1
/*
A˵�������ҡ�
B˵����C��
C˵����D��
D˵��C�ں�˵
��֪3����˵���滰��1����˵���Ǽٻ���
*/
#include<stdio.h>
#include<stdlib.h>
int main2()
{
	char murder = 0;
	for (murder = 'A'; murder < 'D'; murder++)
	{
		if (('A' != murder) + ('C' == murder) + ('D' == murder) + ('D' != murder) == 3)
		{
			printf("%c������\n", murder);
		}
	}

	system("pause");
	return 0;
}