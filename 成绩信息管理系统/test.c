#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
//测试



#include"system.h"

void menu()
{
	printf("***************************************************************************************************\n");
	printf("***************************************************************************************************\n");
	printf("******                                        请选择：                                      *******\n");
	printf("******                1.Add                                     2.Del                       *******\n");
	printf("******                                                                                      *******\n");
	printf("******                3.search(按学号查找，日后更新多种查找）   4.modify                    *******\n");
	printf("******                                                                                      *******\n");
	printf("******                5.show                                    6.sort                      *******\n");
	printf("******                                                                                      *******\n");
	printf("******                7.待开发                                  0.exit                      *******\n");
	printf("***************************************************************************************************\n");
	printf("***************************************************************************************************\n");
}
int main()
{
	int input = 0;

	//创建管理系统
     MIS sys;                                                                                                                                   

	//初始化信息管理系统
	Initsystem(&sys);
	do
	{
		menu();
		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Addsystem(&sys);
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
		case 0:
			printf("已退出程序,期待您的下次使用");
			break;
		default:
			printf("输入错误,暂无此选项,期待日后更新吧！\n请重新选择。\n\n");    
			//提高交互性
			break;
		}


		//input为0刚好执行exit
	} while (input);
}