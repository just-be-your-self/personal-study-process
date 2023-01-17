 #define _CRT_SECURE_NO_WARNINGS 1 	
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//函数声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void CoputerMove(char board[ROW][COL], int row, int col);
//'*'玩家赢
//‘#’电脑赢
//‘Q’平局啦
//‘C’继续游戏
char IsWin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);
	