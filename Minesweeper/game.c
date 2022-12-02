#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void Init_board(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows;i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void display_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d", i);
		for (j = 1; j <= col; j++)
		{	
			printf(" %c", board[i][j]);
		}
		printf("\n");
	}

}
void set_mine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while(count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0');
		{
		mine[x][y] = '1';
		count--;
		}
	}
}
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] + 
		mine[x + 1][y] + 
		mine[x + 1][y + 1]+
		mine[x][y + 1] + 
		mine[x - 1][y + 1]-
		8 * '0');
}
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	
	while (win<row*col-EASY_COUNT)
	{
		printf("������Ҫ��ѯ������:<\n");
		scanf("%d,%d", &x, &y);
		if (x <= row && x>0 && y <= col && y>0)
		{
			if(show[x][y]=='*')
			{ 
				if (mine[x][y] == '1')
				{
					printf("���ź����㱻ը����\n");
					display_board(mine, row, col);
					break;
				}
				else
				{
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';
					display_board(show, row, col);
					win++;
				}
			}
			else
			{
				printf("�������ѱ��Ų����\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		display_board(mine, row, col);
		
	}
}