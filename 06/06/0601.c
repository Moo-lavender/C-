#define _CRT_SECURE_NO_WARNINGS 1
//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��������9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
#include<stdio.h>
#include<stdlib.h>
void pri_mul(int n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" %2d *%2d=%3d ", j, i, i*j);
			//������ȿո�λ��%02d��0��λ��%-2d���油�ո�����롣���Ⱥ͸���Ȳ���ͬʱ���֡�%-6.21f :> 6���ȣ�2���ȡ�
		}
		printf("\n");
	}
}

int main1()
{
	int i;
	printf("��������Ҫ��ӡ�˷����������>");
	scanf("%d", &i);
	pri_mul(i);

	system("pause");
	return 0;
}
