#define _CRT_SECURE_NO_WARNINGS 1
//1.��ɲ�������Ϸ�� 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*************  ��������Ϸ  ***********\n");
	printf("**************************************\n");
	printf("*********     1 ����ʼ��Ϸ    ********\n");
	printf("*********     0 �� �˳���Ϸ   ********\n");
	printf("**************************************\n");

}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;    //����1-100�������
	while (1)
	{
		printf("��������µ����֣�");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶��ˣ���ȷ���־���:%d\n", ret);
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
		printf("���������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;

		}
	} while (input);

	system("pause");
	return 0;
}


/*
ȡ�������
0 - n   rand() % (n + 1)
a - b  rand() % (b - a + 1) + a
100�������7�βµ�
*/