#define _CRT_SECURE_NO_WARNINGS 1
//��д����ģ��������������ĳ���������������������룬������ȷ����ʾ����¼�ɹ���, ������󣬿����������룬����������Ρ����ξ�������ʾ�˳�����
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main3()
{
	int i;
	char arr1[10] = { "654321" };
	char arr2[10];
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", arr2);
		if (strcmp(arr1, arr2) == 0)      //����д��  if (�� strcmp(arr1, arr2) )
		{
			printf("��ϲ������¼�ɹ�!\n");
			break;
		}
		else if (i == 2)
		{
			printf("������������˳�����\n");
			break;
		}
		else
			printf("�������,");


	}
	system("pause");
	return 0;
}

//�ַ������鲻��Ҫ��������ĳ��ȣ����Ӻ����п�����\0����ʾ���������󳤶�
//�������͵�������Ҫ��������ĳ���
