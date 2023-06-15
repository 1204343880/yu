#pragma once

#include<stdio.h>   //为了用输入输出函数
#include<string.h>  //为了用 memset
#include<assert.h>  //为了用  assert
#include<stdlib.h>

#define MOREN 3
#define DEFAULT_SZ 3//增加容量的个数
#define INC_SZ 2//通讯录初始容量
//信息管理系统相关的声明

typedef struct Peoinfo      //个人信息
{
	char name[20];              //姓名
	char sno[15];                 //学号
	int eng;                         //英语成绩     这种小型数据不用列数组存了。
	int math;                       //数学成绩               
	int pro;                          //专业课成绩
	int sum;                         //总分
}Peoinfo;



//动态版本
typedef struct sysetem
{
	Peoinfo* data;
	int count;
	int capacity;    //当前通讯录容量
}MIS;

//静态版本
//typedef struct sysetem
//{
//	Peoinfo data[50];
//	int count;
//}MIS;




//初始化信息管理系统
int Initsystem(MIS* pc);

//添加学生信息
void Addsystem(MIS* pc);

//删除学生信息
void Delsystem(MIS* pc);

//查找学生信息
void Findbysno1(MIS* pc);  

//改变学生信息
void Modifysystem(MIS* pc);

//显示学生信息
void Showsystem(MIS* pc);

//排序学生信息
void Sortsystem(MIS* pc);

//保存成绩系统到文件
void Savesystem(const MIS* pc);

//加载成员信息
void Loadsystem(MIS* pc);