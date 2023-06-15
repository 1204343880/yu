#define _CRT_SECURE_NO_WARNINGS 1

#include "StudentManagementSystem.h"

void MakeMenu()
{
	printf("***************************************\n");
	printf("******1. 新建联系人  2. 删除联系人*******\n");
	printf("******3. 排序       4.查找联系人********\n");
	printf("******5. 显示联系人  6. 修改信息*******\n");
	printf("**********0. 退出通讯录****************\n");
	printf("***************************************\n");
}

int main()
{
	contact con;
	InitContact(&con);
	int input = 0;
	do
	{

		MakeMenu();

		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);//增加
			break;

		}
	} while (input);
	return 0;
}