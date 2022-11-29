#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
    int i, j;
    //��ӡ����
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < col - 1)
                printf("|");
        }
        printf("\n");
        //��ӡ�ָ���
        if (i < row - 1)
        {
            for (j = 0; j < col; j++)
            {
                printf("---");
                if (j < col - 1)
                    printf("|");
            }
        }
        printf("\n");
    }
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
    printf("�����:>\n");
    int x, y;
    while (1)
    {
        printf("����������:>\n");
        scanf("%d%d", &x, &y);

        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (board[x - 1][y - 1] == ' ')
            {
                board[x - 1][y - 1] = '*';
                break;
            }
            else
            {
                printf("���걻ռ�ã�����������\n");
            }
        }
        else
        {
            printf("����Ƿ���������Χ\n");
        }
    }
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
    printf("������:>\n");

    while (1)
    {
        int x = rand() % row;//0~2 ע�����ѭ����,��֤ÿһ�ν����������һ�������
        int y = rand() % col;//0~2
        if (board[x][y] == ' ')
        {
            board[x][y] = '#';
            break;
        }
    }
}
int IsFull(char board[ROW][COL], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (board[i][j] == ' ')
                return 0;//���̻�û��
        }
    }
    return 1;//��������
}
char IsWin(char board[ROW][COL], int row, int col)
{
    //��
    int i, j;
    for (i = 0; i < row; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return board[i][0];
    }
    //��
    for (j = 0; j < col; j++)
    {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
            return board[0][j];
    }
    //�Խ���
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return board[0][0];
    else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return board[0][2];
    //ƽ��
    if (IsFull(board, ROW, COL))
        return 'd';
    //��Ϸ����
    return 't';
}