#define _CRT_SECURE_NO_WARNINGS 1
//.��дһ�����򣬿���һֱ���ռ����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ���������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ������
#include<stdio.h>
#include<stdlib.h>
int main4()
{
	char c = 0;
	printf("�������ַ�\n");
	while (((c = getchar()) != EOF))
	{
		if (c >= 'A' && c <= 'Z')
			putchar(c + ('a' - 'A'));
		else if (c >= 'a' && c <= 'z')
			putchar(c - ('a' - 'A'));
		else if (c >= '0'&& c <= '9')
			;
		else putchar(c);
	}
	system("pause");
	return 0;
}
