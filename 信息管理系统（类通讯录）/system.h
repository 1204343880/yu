#pragma once

#include<stdio.h>   //为了用输入输出函数
#include<string.h>  //为了用 memset
#include<assert.h>  //为了用  assert
#include<stdlib.h>

//信息管理系统相关的声明

//为什么我这个地方创建struct是错的，没用头文件？
//typetef struct Peo;     就是因为这个typetet不能用
//好了，找了半小时资料，发现是单词写错了 我真想敲死自己

//此处用typedef的原因是为了更简介
typedef struct Peoinfo      //个人信息
{
	char name[20];              //姓名
	char sno[15];                 //学号
	int eng;                         //英语成绩     这种小型数据不用列数组存了。
	int math;                       //数学成绩               
	int pro;                          //专业课成绩
	int sum;                         //总分
}Peoinfo;


typedef struct sysetem
{
	Peoinfo data[50];
	                                                                                                                  //Q: 这个count是不是要在.h文件创造
                                                                                                                   	  //A:搞错了，不是要创建int count=0这种 直接在结构体创建就好了
	int count;
}MIS;


//为什么写 MIS* pc 这种形式呢，因为你传过来的就是MIS形式。
//此处不要混淆了MIS和sys这俩不一样，MIS是你创建的一 种 结构体。 sys则是你已经创建出来的一 个 结构体了

//初始化信息管理系统
void InitMIS(MIS* pc);
//关于运算，应该怎么实现？

//添加学生信息
void AddMIS(MIS*pc);

//删除学生信息
void DelMIS(MIS* pc);

//查找学生信息
void Findbysno1(MIS* pc);   //只能实现查找函数，不是那种较为通用的函数

//改变学生信息
void ModifyMIS(MIS* pc);

//显示学生信息
void ShowMIS(MIS* pc);

//排序学生信息
void SortMIS(MIS* pc);
