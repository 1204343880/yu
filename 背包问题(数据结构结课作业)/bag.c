#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

//函数的实现


#include"bag.h"
#define N 500


//菜单实现
void menu()
{
	//介绍背包问题 能不能超链接 导到外面
	printf("***************************************************************\n");
	printf("***************************************************************\n");
	printf("******                          请选择：                *******\n");
	printf("******           1.01背包             2.完全背包        *******\n");
	printf("******                                                  *******\n");
	printf("******           3.多重背包           4.三种背包        *******\n");
	printf("******                                                  *******\n");
	printf("******           5.介绍背包问题       0.Exit(退出）     *******\n");
	printf("***************************************************************\n");
	printf("***************************************************************\n");
}


//隐性输入密码的实现
bool password()
{
	char pin[20] = "123456";
	char password[11] = "0";
	char ch = 0;

	//直接输入数组 但是不好实现更改这个操作
	//gets(password);

	//通过scanf实现  会不会默认有\0  这个这是我老是忘的疑问点
	//scanf("%s", password);

	//符合条件的再输入字符串 非常符合输入类型 也可以实现密码的隐性输入

	//虽然是这样输入 但是最后是不是还要加个\0来着 不然它不会自己输入\0是吧？一个一个输入字符的方法


	//但是这个版本还没实现 这是因为什么呢？？? 在判断部分有问题 emm

	for (int i2 = 0; i2 < 3; i2++)
	{
		printf("请输入用户密码(您还有%d次机会):>", 3-i2);
		//这个地方也会报错 因为这个getch 如果不在开头加文件 就要预处理里面加 #define一大堆 和那个scanf一样

		int flag = 0; //第二次输入 为什么不先清空 从0开始

		while ((ch = getch()) != '\r')
		{

			//如何实现删除这个操作
			if (ch == '\b' && flag != 0)
			{
				//多写一个判断部分 以判断是否已经存在* 避免上学期的写的密码系统一样 甚至可以把管理员输入那一部分 删除 
				//但是上学期课程设计的代码 也是可以通过多写一个判断部分实现的的吧！

					//如果没有这个分支语句的判断  在开始就输入删除 系统就会报错 这是因为 下面的--i会导致越界 进而导致崩溃
					//野指针是什么来着 忘了！
					printf("\b \b"); //先实现删除 *    不能只一个\b 得三个
					flag--;
					password[flag] = '\0';
			}

			if(ch != '\b' && flag < 10)
			{
					//实现数组元素的输入
					printf("*");
					password[flag] = ch;
					flag++;
			}

			//因为上面i已经+1 所以直接实现就好了 结尾也要\0
			password[flag] = '\0';  
		}

		//pin哪里没初始化啊？
		if (0 == strcmp(pin, password))
		{
			//循环直接结束 是哪个代码来着 break
			printf("\n验证成功，欢迎使用背包问题题解系统！");
			Sleep(1000); //设置延迟清屏 提高用户体验感！
			system("CLS");

			return 1;
			break;
		}
		else
		{
			printf("\n用户密码错误,验证失败！\n");
			Sleep(500); 
			system("CLS"); 

		}

		}

	return 0;
	}


void menu1()
{
	printf("***************************************************************\n");
	printf("***************************************************************\n");
	printf("******                         请选择问题：             *******\n");
	printf("******      1.背包最大价值是多少?                       *******\n");
	printf("******      2.若背包恰好装满，至多能装多大价值的物品?   *******\n");
	printf("******      3.两问都求，并且打印出来。                  *******\n");
	printf("***************************************************************\n");
	printf("***************************************************************\n");
}

//01背包的实现
void base_bag()
{
	//暴力的回溯算法解决


	//动态规划实现
	int n = 0; //n个物体
	int V = 0; //容量最大体积为多少
	int v[N] = {0};   //初始化要带括号
	int w[N] = {0};
	int dp[N][N] = {0};
	int a = 1;
	char ch2 = '0';
	int flag2 = 0;

	//输入条件
	printf("请输入物品个数 和 背包最大体积：");
	scanf("%d %d", &n, &V);

	for (int i = 1; i <= n; i++)   //v[0] 和 w[0]都是从下标1开始初始化 注意下
	{
		printf("第%d个物品的体积和价值：", i);
		scanf("%d %d", &v[i], &w[i]);
	}

	menu1();

	printf("请输入你想选择的问题：");

	//控制输入 只能是1\2\3
	while ((ch2 = getch()) != '\r')
	{
		//还有要把flag定义在里面 不然第二次输入时候 会出现bug 因为不归0 flag还是1 是不能实现输入的
		//int flag1 = 0;  这个也是错的 flag不应该在这定义 因为在这定义 又不能实现孔子输入了
		if (ch2 == '\b' && flag2 != 0)
		{

			printf("\b \b");
			flag2--;

		}

		if (ch2 != '\b' && flag2 < 1)
		{
			printf("%c", ch2);
			a = ch2 - '0'; //字符类型 转化为 整形
			flag2++;
		}
	}

	printf("\n");

	//解决第一问 背包最大价值是多少
	if (a == 1)
	{
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= V; j++)
			{
				dp[i][j] = dp[i - 1][j];
				if (j >= v[i])
				{
					//原来真的自带max函数
					dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
				}
			}

		printf("%d\n", n);

		for (int i = 0; i <= 15; i++)
		{
			for (int j = 0; j <= 15; j++)
			{
				printf("%d ", dp[i][j]);
			}
			printf("\n");
		}


		printf("背包所能可装入的最大价值为：%d\n\n", dp[n][V]);
	}
	//第二问 若背包恰好装满，求至多能装多大价值的物品
	else if (a == 2)
	{
		//清空dp表
		memset(dp, 0, sizeof dp);

		//初始化为-1
		for (int j = 1; j <= V; j++)
		{
			dp[0][j] = -1;
		}

		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= V; j++)
			{
				dp[i][j] = dp[i - 1][j];
				if (j >= v[i] && dp[i - 1][j - v[i]] != -1)
				{
					dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
				}
			}

		//dp表打印
		//for (int i = 0; i <= 10; i++)
		//{
		//	for (int j = 0; j <= 10; j++)
		//	{

		//		printf("%d ", dp[i][j]);
		//	}
		//	printf("\n");
		//}

		//这个别人好轻车熟路 何时我才能这样少饶弯子 一写就是最简便的
		printf("\n背包恰好装满时,可装的最大价值为(若输出0则说明无法恰好装满)：%d\n\n", (dp[n][V] == -1 ? 0 : dp[n][V]));
	}
	else if (a == 3)
	{
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= V; j++)
			{
				dp[i][j] = dp[i - 1][j];
				if (j >= v[i])
				{
					//原来真的自带max函数
					dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
				}
			}
		printf("\n背包所能可装入的最大价值为：%d", dp[n][V]);
	
		//清空dp表
		memset(dp, 0, sizeof dp);

		//初始化为-1
		for (int j = 1; j <= V; j++)
		{
			dp[0][j] = -1;
		}

		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= V; j++)
			{
				dp[i][j] = dp[i - 1][j];
				if (j >= v[i] && dp[i - 1][j - v[i]] != -1)
				{
					dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
				}
			}

		printf("\n背包恰好装满时,可装的最大价值为(若输出0则说明无法恰好装满)：%d\n\n", (dp[n][V] == -1 ? 0 : dp[n][V]));
	}
	else
	{
		printf("\n输入错误选项。已返回主菜单\n\n");
	}
}


//完全背包
void comp_bag()
{
	//动态规划实现
	int n = 0; //n个物体
	int V = 0; //容量最大体积为多少
	int v[N] = { 0 };   //初始化要带括号
	int w[N] = { 0 };
	int dp[N][N] = { 0 };
	int a = 1;
	char ch2 = '0';
	int flag2 = 0;

	//输入条件
	printf("请输入物品个数 和 背包最大体积：");
	scanf("%d %d", &n, &V);
	for (int i = 1; i <= n; i++)   //v[0] 和 w[0]都是从下标1开始初始化 注意下
	{
		printf("第%d个物品的体积和价值：", i);
		scanf("%d %d", &v[i], &w[i]);
	}

	menu1();

	printf("请输入你想选择的问题：");

	//控制输入 只能是1\2\3
	while ((ch2 = getch()) != '\r')
	{
		//还有要把flag定义在里面 不然第二次输入时候 会出现bug 因为不归0 flag还是1 是不能实现输入的
		//int flag1 = 0;  这个也是错的 flag不应该在这定义 因为在这定义 又不能实现孔子输入了
		if (ch2 == '\b' && flag2 != 0)
		{

			printf("\b \b");
			flag2--;

		}

		if (ch2 != '\b' && flag2 < 1)
		{
			printf("%c", ch2);
			a = ch2 - '0'; //字符类型 转化为 整形
			flag2++;
		}
	}

	printf("\n");

	//解决第一问 背包最大价值是多少
	if (a == 1)
	{
		for (int i = 1; i <= n; i++)
			for (int j = 0; j <= V; j++)
			{
				dp[i][j] = dp[i - 1][j];
				if (j >= v[i])
				{
					dp[i][j] = max(dp[i][j], dp[i][j - v[i]] + w[i]);
				}
			}
		printf("背包所能可装入的最大价值为：%d\n\n", dp[n][V]);
	}
	//第二问 若背包恰好装满，求至多能装多大价值的物品
	else if (a == 2)
	{
		//清空dp表
		memset(dp, 0, sizeof dp);

		//初始化为-1
		for (int j = 1; j <= V; j++)
		{
			dp[0][j] = -1;
		}

		for (int i = 1; i <= n; i++)
			for (int j = 0; j <= V; j++)
			{
				dp[i][j] = dp[i - 1][j];
				if (j >= v[i] && dp[i - 1][j - v[i]] != -1)
				{
					dp[i][j] = max(dp[i][j], dp[i][j - v[i]] + w[i]);
				}
			}
		printf("\n背包恰好装满时,可装的最大价值为(若输出0则说明无法恰好装满)：%d\n\n", (dp[n][V] == -1 ? 0 : dp[n][V]));
	}
	else if (a == 3)
	{
		for (int i = 1; i <= n; i++)
			for (int j = 0; j <= V; j++)
			{
				dp[i][j] = dp[i - 1][j];
				if (j >= v[i])
				{
					//原来真的自带max函数
					dp[i][j] = max(dp[i][j], dp[i][j - v[i]] + w[i]);
				}
			}
		printf("背包所能可装入的最大价值为：%d\n\n", dp[n][V]);

		//清空dp表
		memset(dp, 0, sizeof dp);

		//初始化为-1
		for (int j = 1; j <= V; j++)
		{
			dp[0][j] = -1;
		}

		for (int i = 1; i <= n; i++)
			for (int j = 0; j <= V; j++)
			{
				dp[i][j] = dp[i - 1][j];
				if (j >= v[i] && dp[i][j - v[i]] != -1)
				{
					dp[i][j] = max(dp[i][j], dp[i][j - v[i]] + w[i]);
				}
			}

		printf("\n背包恰好装满时,可装的最大价值为(若输出0则说明无法恰好装满)：%d\n\n", (dp[n][V] == -1 ? 0 : dp[n][V]));
	}
	else
	{
		printf("\n输入错误选项。已返回主菜单\n\n");
	}
}


//多重背包
void mult_bag()
{

}


//三种背包
void three_bag()
{

}


//介绍背包问题
void introduce()
{
	printf("\n背包问题(Knapsack problem)是一种组合优化的NP完全问题（NP完全问题，是世界七大数学难题之一。)");
	printf("背包问题可以简单描述为：给定一组物品，每种物品都有自己的重量和价格，在限定的总重量内，我们如何选择，才能使得物品的总价格最高。\n\n");
	printf("具体可以看(按Cril并单击即可跳转)：https://baike.baidu.com/item/%E8%83%8C%E5%8C%85%E9%97%AE%E9%A2%98?fromModule=lemma_search-box#3\n\n");
}


//退出程序  因为没用文件 也没啥特殊的
void Exit()
{

}