#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

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
		// 直接函数名就好 别再写那种垃圾代码 void menu（）；这种了
		menu();



		do
		{
			printf("请输入你想使用的功能:>");

			//用数组的原因是控制输入个数  现在发现也是拉跨代码 用数组就是多此一脚
			//和隔壁密码一样  可以控制输入的 
			//这个实现方式核心在一个一个输入 然后通过一个flag来控制你是否还可以输入

			int flag1 = 0;
			input = 9; //把它初始为9 并且是每次都在选择功能前 这样就能避免直接输入回车导致的错误了
			char ch1 = 0;


			while ((ch1 = getch()) != '\r')
			{
				//还有要把flag定义在里面 不然第二次输入时候 会出现bug 因为不归0 flag还是1 是不能实现输入的
				//int flag1 = 0;  这个也是错的 flag不应该在这定义 因为在这定义 又不能实现孔子输入了
				if (ch1 == '\b' && flag1 != 0)
				{

					printf("\b \b");
					flag1--;

				}

				if (ch1 != '\b' && flag1 < 1)
				{
					printf("%c", ch1);
					input = ch1 - '0'; //字符类型 转化为 整形
					flag1++;
				}
			}

			printf("\n");
			//这个地方也有注意的地方 输入非常数类型
			//通过控制scanf的输入进去     直接让input是char类型 可以实现下
			switch (input)
			{
			case 1:
				base_bag();
				break;

			case 2:
				comp_bag();
				break;

			case 3:
				printf("多重背包\n");
				mult_bag();
				break;

			case 4:
				printf("三种背包\n");
				three_bag();
				break;

			case 5:
				//介绍背包问题
				introduce();
				break;

			case 0:
				printf("已退出程序，欢迎您的下次使用!\n");
				Exit();
				break;

			default:
				printf("输入错误,暂无此选项。\n");
				//想让系统好看点 可以再加个别的 就不是单调的 输入功能！
				break;
			}
		}

		while (input);

	}
	else if(a == 0)
	{

			printf("无法认证您管理员的身份! ");
			printf("(已退出程序，再见!)\n");

	}

}