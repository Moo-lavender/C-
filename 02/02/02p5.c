#define _CRT_SECURE_NO_WARNINGS 1
//5.�������������Լ����
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k, t;
	printf("��������������\n");
	scanf("%d%d", &i, &j);
	if (i<j);
	{
		t = i;
		i = j;
		j = t;
	}
	while (i%j != 0)
	{
		k = i%j;
		i = j;
		j = k;
	}
	printf("���Լ���ǣ�%d\n", j);
	system("pause");
	return 0;
}

