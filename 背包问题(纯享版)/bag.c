#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE


//函数的实现

#include"bag.h"
#define N 500



//菜单实现
void menu()
{
	printf("***************************************************************\n");
	printf("***************************************************************\n");
	printf("******                          请选择：                *******\n");
	printf("******           1.01背包             2.完全背包        *******\n");
	printf("******                                                  *******\n");
	printf("******           0.Exit(退出）                          *******\n");
	printf("***************************************************************\n");
	printf("***************************************************************\n");
}

//隐性输入密码的实现
bool password()
{
	char pin[20] = "123456";
	char password[11] = "0";
	char ch = 0;

	for (int i2 = 0; i2 < 3; i2++)
	{
		printf("请输入用户密码(您还有%d次机会):>", 3 - i2);

		int flag = 0; 

		while ((ch = _getch()) != '\r')
		{

			if (ch == '\b' && flag != 0)
			{
				printf("\b \b"); 
				flag--;
				password[flag] = '\0';
			}

			if (ch != '\b' && flag < 10)
			{
				//实现数组元素的输入
				printf("*");
				password[flag] = ch;
				flag++;
			}
			password[flag] = '\0';
		}

		if (0 == strcmp(pin, password))
		{
			printf("\n验证成功，欢迎使用背包问题题解系统！");
			Sleep(1000);
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
void base_bag1()
{
	//暴力的回溯算法解决


	//动态规划实现
	int n = 0; //n个物体
	int V = 0; //容量最大体积为多少
	int a = 1;
	char ch2 = '0';
	int flag2 = 0;

	//输入条件
	printf("物品个数  背包容量(按顺序输入)\n");
	scanf("%d %d", &n, &V);


	int v[N] = { 0 };   //初始化要带括号
	int w[N] = { 0 };
	int dp[N][N] = { 0 };

	for (int i = 1; i <= n; i++)   //v[0] 和 w[0]都是从下标1开始初始化 注意下
	{
		printf("体积  价值(第%d个物体的)\n", i);
		scanf("%d %d", &v[i], &w[i]);
	}

	menu1();

	printf("请输入你想选择的问题：");


	while ((ch2 = _getch()) != '\r')
	{
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
		{
			for (int j = 1; j <= V; j++)
			{
				dp[i][j] = dp[i - 1][j];
				if (j >= v[i])
				{
					dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
				}
			}
		}



		//打印数组 观察情况的
		//printf("  ");

		//for (int j = 0; j <= V; j++)
		//{
		//	printf("%3d ", j+1); //能不打印空四格嘛
		//}

		//printf("\n");
		//for (int i = 0; i <= n; i++)
		//{
		//	printf("%d ", i+1);

		//	for (int j = 0; j <= V; j++)
		//	{
	

		//		printf("%03d ", dp[i][j]);
		//	}
		//	printf("\n");
		//}

		//printf("最大价值时的背包物品为：");

		printf("可装最大价值为：%d\n", dp[n][V]);

		//回溯反推实现选择了哪些物品
		int j = V;
		for (int i = n; i >= 1; i--)
		{
			if (dp[i][j] != dp[i - 1][j])
			{
				j = j - v[i];
				printf("选了物品%d\n", i);
			}
		}

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
		{
			for (int j = 1; j <= V; j++)
			{
				dp[i][j] = dp[i - 1][j];

				if (j >= v[i] && dp[i - 1][j - v[i]] != -1)
				{
					dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
				}
			}
		}
	

		//for (int i = 0; i <= n; i++)
		//{
		//	for (int j = 0; j <= V; j++)
		//	{
		//		printf("%03d ", dp[i][j]);
		//	}
		//	printf("\n");
		//}

		printf("\n背包恰好装满时,可装的最大价值为(若输出0则说明无法恰好装满)：%d\n\n", (dp[n][V] == -1 ? 0 : dp[n][V]));

		//甚至不要加dp[n][V]!=-1这个条件 因为如果不存在 整个dp表都是-1
		//回溯反推实现选择了哪些物品
		int j = V;
		for (int i = n; i >= 1; i--)
		{
			if (dp[i][j] != dp[i - 1][j])
			{
				j = j - v[i];
				printf("选了物品%d\n", i);
			}
		}

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

		int j = V;
		for (int i = n; i >= 1; i--)
		{
			if (dp[i][j] != dp[i - 1][j])
			{
				j = j - v[i];
				printf("选了物品%d\n", i);
			}
		}

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

		printf("\n背包恰好装满时,可装的最大价值为(若输出0则说明无法恰好装满)：%d\n", (dp[n][V] == -1 ? 0 : dp[n][V]));
		j = V;
		for (int i = n; i >= 1; i--)
		{
			if (dp[i][j] != dp[i - 1][j])
			{
				j = j - v[i];
				printf("选了物品%d\n", i);
			}
		}
	}
	else
	{
		printf("\n输入错误选项。已返回主菜单\n\n");
	}
}
void base_bag2()
{
	//动态规划实现
	int n = 0; //n个物体
	int V = 0; //容量最大为多少
	int a = 1;
	char ch2 = '0';
	int flag2 = 0;

	//输入条件
	printf("物品个数  背包最大容量(请按顺序输入)：\n");
	scanf("%d %d", &n, &V);

	int* v = (int*)malloc(sizeof(int) * n);
	int* w = (int*)malloc(sizeof(int) * n);
	int dp[N] = { 0 };

	for (int i = 1; i <= n; i++)   //v[0] 和 w[0]都是从下标1开始初始化 注意下
	{
		printf("体积  价值(第%d个物体的)\n", i);
		scanf("%d %d", &v[i], &w[i]);
	}

	menu1();

	printf("请输入你想选择的选项：");

	while ((ch2 = _getch()) != '\r')
	{

		if (ch2 == '\b' && flag2 != 0)
		{

			printf("\b \b");
			flag2--;

		}

		if (ch2 != '\b' && flag2 < 1)
		{
			printf("%c", ch2);
			a = ch2 - '0';
			flag2++;
		}
	}

	//解决第一问 背包最大价值是多少
	if (a == 1)
	{
		for (int i = 1; i <= n; i++)
			for (int j = V; j >= v[i]; j--)
			{
				dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
			}



		printf("\n背包所能可装入的最大价值为：%d\n", dp[V]);
	}
	//第二问 若背包恰好装满，求至多能装多大价值的物品
	else if (a == 2)
	{
		//清空dp表
		memset(dp, 0, sizeof dp);

		//初始化为-1
		for (int j = 1; j <= V; j++)
		{
			dp[j] = -1;
		}

		for (int i = 1; i <= n; i++)
			for (int j = V; j >= v[i]; j--)
			{
				if (dp[j - v[i]] != -1)
				{
					dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
				}
			}
		printf("\n背包恰好装满时,可装的最大价值为(若输出0则说明无法恰好装满)：%d\n", (dp[V] == -1 ? 0 : dp[V]));
	}
	//两问都求的情况
	else if (a == 3)
	{	//解决第一问 背包最大价值是多少
			for (int i = 1; i <= n; i++)
				for (int j = V; j >= v[i]; j--)
				{
					dp[j] = max(dp[j], dp[j - v[i]] + w[i]);

				}
			printf("\n背包所能可装入的最大价值为：%d\n", dp[V]);
			//清空dp表
			memset(dp, 0, sizeof(dp));

			//初始化为-1
			for (int j = 1; j <= V; j++)
			{
				dp[j] = -1;
			}

			for (int i = 1; i <= n; i++)
				for (int j = V; j >= v[i]; j--)
				{
					if (dp[j - v[i]] != -1)
					{
						dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
					}
				}
			printf("\n背包恰好装满时,可装的最大价值为(若输出0则说明无法恰好装满)：%d\n\n", (dp[V] == -1 ? 0 : dp[V]));
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
	printf("物品个数  背包最大容量(请按顺序输入)：\n");
	scanf("%d %d", &n, &V);
	for (int i = 1; i <= n; i++)   //v[0] 和 w[0]都是从下标1开始初始化 注意下
	{
		printf("体积  价值(第%d个物体的)\n", i);
		scanf("%d %d", &v[i], &w[i]);
	}

	menu1();

	printf("请输入你想选择的问题：");

	//控制输入 只能是1\2\3
	while ((ch2 = _getch()) != '\r')
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
		printf("背包所能可装入的最大价值为：%d\n", dp[n][V]);
		

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
		printf("背包恰好装满时,可装的最大价值为(若输出0则说明无法恰好装满)：%d\n", (dp[n][V] == -1 ? 0 : dp[n][V]));

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

		printf("背包恰好装满时,可装的最大价值为(若输出0则说明无法恰好装满)：%d\n", (dp[n][V] == -1 ? 0 : dp[n][V]));
	}
	else
	{
		printf("\n输入错误选项。已返回主菜单\n\n");
	}
}

