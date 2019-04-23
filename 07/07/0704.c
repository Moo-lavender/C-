#define _CRT_SECURE_NO_WARNINGS 1
//4. 编写一个函数 reverse_string(char * string)（递归实现）实现：将参数字符串中的字符反向排列。要求：不能使用C函数库中的字符串操作函数。
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
	//也可以写成puts(str);
	system("pause");
	return 0;
}
