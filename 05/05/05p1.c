#define _CRT_SECURE_NO_WARNINGS 1
//1.完成猜数字游戏。 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*************  猜数字游戏  ***********\n");
	printf("**************************************\n");
	printf("*********     1 ：开始游戏    ********\n");
	printf("*********     0 ： 退出游戏   ********\n");
	printf("**************************************\n");

}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;    //生成1-100的随机数
	while (1)
	{
		printf("请输入你猜的数字：");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了，正确数字就是:%d\n", ret);
			break;
		}


	}

}
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入你的选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;

		}
	} while (input);

	system("pause");
	return 0;
}


/*
取出随机数
0 - n   rand() % (n + 1)
a - b  rand() % (b - a + 1) + a
100以内最多7次猜到
*/