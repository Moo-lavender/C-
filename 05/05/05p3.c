#define _CRT_SECURE_NO_WARNINGS 1
//编写代码模拟三次密码输入的场景。最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，可以重新输入，最多输入三次。三次均错，则提示退出程序。
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
		printf("请输入密码:>");
		scanf("%s", arr2);
		if (strcmp(arr1, arr2) == 0)      //可以写成  if (！ strcmp(arr1, arr2) )
		{
			printf("恭喜您，登录成功!\n");
			break;
		}
		else if (i == 2)
		{
			printf("三次输入错误，退出程序\n");
			break;
		}
		else
			printf("输入错误,");


	}
	system("pause");
	return 0;
}

//字符串数组不需要传输数组的长度，在子函数中可以有\0来表示结束，来求长度
//其他类型的数组需要传输数组的长度
