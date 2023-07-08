#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include<stdio.h>
#include<stdlib.h>//chao
#include<time.h>//chao

/*
思路设计：
1.根据用户的不同选择执行不同的功能
2.所以要先有个菜单进行指引
*/


//也还有一些不足的地方 例如game也可以用一个函数执行 这样可以更加模块化
//而且在核心技术随机生成数这个地方不抄还是不会，以及那个思想  （ rand() % 100 + 1  ）

void  menu()
{
	printf("************************\n");
	printf("***    1.开始游戏    ***\n");
	printf("***    0.退出游戏    ***\n");
	printf("************************\n");
}

int  main()
{
	int  random = 0;
	int input = 0;
	int guess = 0;
	//在30多分钟时也是讲到了为什么这样
	//只需要进行一次初始化起点srand就行
	srand((unsigned int)time(NULL));  //chao


	menu();

	do
	{
		random = rand() % 100 + 1;;     //chao  //random这个随机值应该在内部生成，因为需要玩一次就新生成一个数。

		printf("请输入选项:>");
		scanf("%d", &input);
		switch (input)     //等会改成枚举常量看看 还没用过。     太长时间没用，又忘记格式了      这个case好像确实不要加{}。
		{
		case  1:
			//printf("请输入你猜的数:>");
			//scanf("%d",  &guess);                     对循环理解还是不到位 所以导致这个地方出错。

			while (1)
			{
				printf("请输入你猜的数:>");
				scanf("%d", &guess);

				if (guess > random)
				{
					printf("猜大了，请从重新猜！\n");
				}
				else if (guess < random)
				{
					printf("猜小了，请从重新猜！\n");
				}
				if (guess == random)
				{
					printf("猜对了，你真棒！\n");
					break;
				}
			}

				//default;    记错了 后面应该默认break。
				break;
		case  0:
			printf("退出程序!");
			break;     //双break可不可以起作用？
			break;

		default:
			printf("输入错误选项!\n");
			break;


		}
	} while (input);   //这个后面需要分号(;)的。

}