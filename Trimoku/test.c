#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
    //������Ĺ���
    char board[ROW][COL];
    //��ʼ������
    InitBoard(board, ROW, COL);
    //��ӡ����
    DisplayBoard(board, ROW, COL);
    //����
    char ret = IsWin(board, ROW, COL);
    while (1)
    {
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);//��ӡ����
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
        printf("ƽ��");
    else if (ret == '*')
        printf("���Ӯ");
    else if (ret == '*')
        printf("����Ӯ");

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
        printf("��ѡ��:\n");
        scanf("%d", &input);
        switch (input)
        {
        case 0: game(); break;
        case 1:printf("�˳���Ϸ\n"); break;
        default:printf("ѡ�����������ѡ��\n"); break;
        }
    } while (input);

    return 0;
}