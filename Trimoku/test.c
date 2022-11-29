#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
    //三子棋的过程
    char board[ROW][COL];
    //初始化棋盘
    InitBoard(board, ROW, COL);
    //打印棋盘
    DisplayBoard(board, ROW, COL);
    //下棋
    char ret = IsWin(board, ROW, COL);
    while (1)
    {
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);//打印棋盘
        ret = IsWin(board, ROW, COL);
        if (ret != 't')
            break;

        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        ret = IsWin(board, ROW, COL);
        if (ret != 't')
            break;
    }

    if (ret == 'd')
        printf("平局");
    else if (ret == '*')
        printf("玩家赢");
    else if (ret == '*')
        printf("电脑赢");

}
void menu()
{
    printf("******************************\n");
    printf("*********   0.play   *********\n");
    printf("*********   1.exit   *********\n");
    printf("******************************\n");
}
int main()
{
    srand((unsigned)time(NULL));
    int input = 0;
    do
    {
        menu();
        printf("请选择:\n");
        scanf("%d", &input);
        switch (input)
        {
        case 0: game(); break;
        case 1:printf("退出游戏\n"); break;
        default:printf("选择错误，请重新选择\n"); break;
        }
    } while (input);

    return 0;
}