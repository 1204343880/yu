#pragma once

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#define DEFAULT_SZ 3//增加容量的个数
#define INC_SZ 2//通讯录初始容量

typedef struct PoInfo
{
	char name[20];
	int units;
	char QQ[20];
	char tele[20];
	char addr[30];
}PoInfo;


//动态版本
typedef struct contact
{
	PoInfo* data;//通讯录联系人信息包括（name,qq...）
	int count;//记录当前通讯录联系人的个数
	int capacity;//记录当前通讯录的容量
}contact;

//初始化通讯录
void InitContact(contact* pc);
//增容
void CheckCapacity(contact* pc);
//增加联系人
void AddContact(contact* pc);
