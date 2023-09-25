#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
//函数的声明
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS  COL+2

#define  MINE 80

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//菜单的实现
void menu();

//游戏的实现
void game(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);