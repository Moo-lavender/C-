#define _CRT_SECURE_NO_WARNINGS 1
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�ʵ�֣��������ַ����е��ַ��������С�Ҫ�󣺲���ʹ��C�������е��ַ�������������
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse_string(char * str)
{
	int end = strlen(str) - 1;
	char tmp = str[0];
	if (*str)
	{
		str[0] = str[end];
		str[end] = '\0';
		reverse_string(str + 1);
		str[end] = tmp;
	}



}

int main()
{
	char arr[20] = "hello world!";
	reverse_string(arr);
	for (int i = 0; i < strlen(arr); i++)
	{
		printf("%c", arr[i]);
	}
	//Ҳ����д��puts(str);
	system("pause");
	return 0;
}
