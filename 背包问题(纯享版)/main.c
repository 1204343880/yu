#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

//为了使用getch函数


//主函数

#include"bag.h"


int main()
{
	//登录验证 (待用)

	int a = 1;
	a = password();
	int input = 1;  //不能是0 不然直接退出了
	if (a == 1)
	{
		menu();

		do
		{
			printf("————————————————————————\n");
			printf("请输入你想使用的功能(输入M/m显示主菜单):>");
			int flag1 = 0;
			//把它初始为9 并且是每次都在选择功能前 这样就能避免直接输入回车导致的错误了
			input = 9; 
			char ch1 = 0;

		
			while ((ch1 = _getch()) != '\r')
			{

				if (ch1 == '\b' && flag1 != 0)
				{
					printf("\b \b");
					flag1--;
				}

				//强制转化
				if (ch1 == 'm')
				{
					ch1 = toupper(ch1);
				}


				if (ch1 != '\b' && flag1 < 1)
				{
					printf("%c", ch1);
					input = ch1 - '0'; //字符类型 转化为 整形
					flag1++;
				}
			}

			printf("\n");

			switch (input)
			{
			case 1:
				//原版
				base_bag1(); 
				//优化版
				//base_bag2();
				break;

			case 2:
				comp_bag();
				break;

			case 29:
				menu();
				break;

			case 0:
				printf("已退出程序，欢迎您的下次使用!\n");
				break;

			default:
				printf("输入错误,暂无此选项。\n");
				break;
			}
		}

		while (input);

	}
	else if (a == 0)
	{

		printf("无法认证您管理员的身份! ");
		printf("(已退出程序，再见!)\n");

	}

}