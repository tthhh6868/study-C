#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("*************************\n");
	printf("**********1.play*********\n");
	printf("**********0.exit*********\n");
	printf("*************************\n");
}
void game()
{
	char show[ROWS][COLS] = { 0 };
	char mine[ROWS][COLS] = { 0 };
	Init_board(show, ROWS, COLS,'*');
	Init_board(mine, ROWS, COLS,'0');
	//display_board(mine, ROW, COL);
	display_board(show, ROW, COL);
	set_mine(mine, ROW, COL);
	//display_board(mine, ROW, COL);
	//display_board(show, ROW, COL);
	find_mine(mine, show, ROW, COL);
}
int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	menu();
	printf("������:<");
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n"); 
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������:<\n");
			break;
		}		
	} while (input);
	return 0;
}