#define _CRT_SECURE_NO_WARNINGS 1
//.编写一个程序，可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。
#include<stdio.h>
#include<stdlib.h>
int main4()
{
	char c = 0;
	printf("请输入字符\n");
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
