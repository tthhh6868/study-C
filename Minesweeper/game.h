#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define EASY_COUNT 10
#define ROWS ROW+2
#define COLS COL+2
void Init_board(char board[ROWS][COLS], int rows, int cols,char set);
void display_board(char board[ROWS][COLS], int row, int col);
void set_mine(char mine[ROWS][COLS], int row,int col);
int get_mine_count(char mine[ROWS][COLS], int x, int y);
void find_mine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);