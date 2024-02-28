#pragma once

//函数的声明

#include<stdio.h>
#include<string.h> //strcmp函数(比较俩字符串)
#include<windows.h>//sleep函数
#include<stdbool.h>//bool函数
#include <conio.h> //getch函数
#include <stdlib.h>//增容函数

#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE

//菜单实现
void menu();

//密码实现
bool password();

//01背包的实现
void base_bag1();
void base_bag2();

//完全背包
void comp_bag();

//背包问题介绍
void introduce();

//退出程序
void Exit();
