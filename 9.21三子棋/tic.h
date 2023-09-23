#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

//函数的声明

#include<stdio.h>
#include<stdlib.h>
#include<time.h>



#define ROW 3
#define COL 3

void menu(); //菜单

void game(char arr[ROW][COL], int row, int col); //游戏                     //前面这里还要传参嘛？      
void end(); //退出

void other(); //别的情况
