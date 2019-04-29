#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10
int Menu() //打印菜单
{
	printf("=======================================================\n");
	printf("1.开始游戏\n");
	printf("0.结束游戏\n");
	printf("=======================================================\n");
	printf("请输入您的选择：");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Init(char show_map[MAX_ROW][MAX_COL],
	char mine_map[MAX_ROW][MAX_COL])         //初始化以及埋雷
{
	for (int row = 0; row < MAX_ROW; ++row)
	{
		for (int col = 0; col < MAX_COL; ++col)
		{
			show_map[row][col] = '*';
		}
	}
	for (int row = 0; row < MAX_ROW; ++row)
	{
		for (int col = 0; col < MAX_COL; ++col)
		{
			mine_map[row][col] = '0';
		}
	}
	int mine_count = MINE_COUNT;
	while (mine_count > 0)
	{
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (mine_map[row][col] == '1')
		{
			continue;
		}
		mine_map[row][col] = '1';
		--mine_count;
	}
}
void PrintMap(char map[MAX_ROW][MAX_COL])
{
	int row, col;
	printf(" |");
	for (col = 0; col < MAX_COL; ++col)
	{
		printf("%d ", col);
	}
	printf("\n");
	for (col = 0; col < MAX_COL; ++col)
	{
		printf("---");
	}
	printf("\n");
	for (row = 0; row < MAX_ROW; ++row)
	{
		printf("%d|", row);
		for ( col = 0; col < MAX_COL; ++col)
		{
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}
}
void UpdateShowMap(char show_map[MAX_ROW][MAX_COL],
	char mine_map[MAX_ROW][MAX_COL], int row, int col)  //更新地图
{
	int count = 0;
	if (row - 1 >= 0 && col - 1 >= 0
		&& mine_map[row - 1][col - 1] == '1')
	{
		++count;
	}
	if (row - 1 >= 0 
		&& mine_map[row - 1][col] == '1')
	{
		++count;
	}
	if (row - 1 >= 0 && col + 1 < MAX_COL 
		&& mine_map[row - 1][col + 1] == '1')
	{
		++count;
	}
	if (col - 1 >= 0 &&
		mine_map[row][col - 1] == '1')
	{
		++count;
	}
	if ( col + 1 < MAX_COL
		&& mine_map[row][col + 1] == '1')
	{
		++count;
	}
	if (col - 1 >= 0 && row + 1 < MAX_ROW
		&& mine_map[row + 1][col - 1] == '1')
	{
		++count;
	}
	if (row + 1 < MAX_ROW
		&& mine_map[row + 1][col] == '1')
	{
		++count;
	}
	if (col + 1 < MAX_COL && row + 1 < MAX_ROW
		&& mine_map[row + 1][col + 1] == '1')
	{
		++count;
	}
	show_map[row][col] = count + '0';
}
void Game()
{
	char show_map[MAX_ROW][MAX_COL];
	char mine_map[MAX_ROW][MAX_COL];
	Init(show_map, mine_map);
	int blank_count = 0;
	while (1)
	{
		system("cls");
		PrintMap(show_map); //让用户输入一组坐标，并校验
		printf("请输入一组坐标（row col）：>");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_ROW
			|| col < 0 || col >= MAX_COL)
		{
			printf("您的输入有误，请重新输入！\n");
			continue;
		}
		if (show_map[row][col] != '*')
		{
			printf("您输入的位置以及被翻开，请重新输入！\n");
			continue;
		}
		//判定是否踩雷
		if (mine_map[row][col] == '1')
		{
			system("cls");
			PrintMap(mine_map);
			printf("Game Over!\n");
			break;
		}
		++blank_count;
		//判断胜利
		if (MINE_COUNT == MAX_ROW * MAX_COL - blank_count)
		{
			printf("恭喜你，扫雷成功！\n");
			break;
		}
		//更新地图，把雷的位置变成数字
		UpdateShowMap(show_map,mine_map,row,col);
	}
}

int main()
{
	srand((unsigned int)time(0));
	while (1)
	{
		int choice = Menu();
		if (choice == 1)
		{
			Game();
		}
		else if (choice == 0)
		{
			printf("游戏结束！\n");
			break;
		}
		else
		{
			printf("您的输入有误！\n");
		}
	}
	system("pause");
	return 0;
}

