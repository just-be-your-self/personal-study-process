 #define _CRT_SECURE_NO_WARNINGS 1 	
#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
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
    int i = 0;
   for (i = 0; i < row; i++)
  { 
	//1.打印一行的数据
	printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
	//2.打印分割行
	if(i < row-1)
	printf("---|---|---\n");
  }
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("请玩家下棋：>\n");
	while (1)
	{
		printf("请输入坐标：>");
		scanf("%d%d", &x, &y);
		//判断位置坐标的合法性
		if (x >= 1 && x <= row && y >=1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标已有棋子\n");
			}
		}
		else
		{
			printf("坐标非法请重新输入：\n");
		}
	}
}
void CoputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑下棋：\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
//返回1表示棋盘满了0表示棋盘还没满
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//横三行判断
	for (i = 0; i < ROW; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][1];
		}
	}
	//竖三列判断
	for (i = 0; i < COL; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//两条对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断是否平局
	if (1==IsFull(board,ROW,COL))
	{
		return 'Q';
	}
	return 'C';
}
