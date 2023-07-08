#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
//测试
#include"system.h"

//登入管理员密码
//用bool函数很好


void menu()
{
	printf("***************************************************************\n");
	printf("***************************************************************\n");
	printf("******                          请选择：                *******\n");
	printf("******           1.Add(增加）             2.Del(删除）  *******\n");
	printf("******                                                  *******\n");
	printf("******           3.Search(查找）          4.Modify(修改)*******\n");
	printf("******                                                  *******\n");
	printf("******           5.Show(显示）            6.Sort(排序） *******\n");
	printf("******                                                  *******\n");
	printf("******           7.Static(统计）          0.Exit(退出） *******\n");
	printf("***************************************************************\n");
	printf("***************************************************************\n");
}
int main()
{
//管理员登录
	int a = 0;
	a = login();
	if (a == 1)
	{
		system("CLS"); // 清屏
		printf("登录成功，欢迎使用本成绩信息管理系统！\n");
		int input = 0;

		//创建管理系统
		MIS sys;

		//初始化信息管理系统
		Initsystem(&sys);

		do
		{
			menu();
			printf("请输入功能：");
			scanf("%d", &input);
			if(input>=0 && input<=7)
			{
				switch (input)
				{
				case 1:
					Addsystem(&sys);
					Savesystem(&sys);
					break;
				case 2:
					Delsystem(&sys);
					break;
				case 3:
					Findbysno1(&sys);
					break;
				case 4:
					Modifysystem(&sys);
					break;
				case 5:
					Showsystem(&sys);
					break;
				case 6:
					Sortsystem(&sys);
					break;
				case 7:
					Staticsystem(&sys);
					break;
				case 0:
					Savesystem(&sys);
					Destroysystem(&sys);
					printf("已退出程序,期待您的下次使用。");
					break;

				}
			}
			else
			{
				printf("输入错误,暂无此选项,期待日后更新吧!\n");
			}

			//input为0刚好执行exit
		} while (input);
	}
	else
	{
		system("CLS"); // 清屏
		printf("无法认证您管理员的身份!");
		printf("(已退出程序，再见。)\n");
	}
}