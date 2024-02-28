#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include<stdio.h>
////#include<string.h>
////#include<stdlib.h>
////#define N 5
////
////struct shangpin//商品信息的结构题库存 
////{
////    char bianhao[10];
////    char mingcheng[10];
////    int jinjia;
////    int shoujia;
////    int kucun;
////}num[N + 2];
////struct jianceshangpin//检测时引用的商品名称 
////{
////    char mingcheng[10];
////}jiance;
////struct tuihuo//退货时引用的商品名称 
////{
////    char name[10];
////}tui;
////struct xiaoshou//销售时引用的商品编号 
////{
////    char bianhao[10];
////}sell;
////struct chaxun//查询时引用的商品信息 
////{
////    char bianhao[10];
////    char mingcheng[10];
////}cha;
////struct paixu//排序时引用的中间变量 
////{
////    char bianhao[10];
////    char mingcheng[10];
////}pai;
//////声明函数 
////void Jianlishangpinku();
////void Xianshiquanbushangpinxinxi();
////void Jinhuo();
////void Tuihuo();
////void Xiaoshou();
////void Chaxun();
////void Paixu();
////int main()
////{
////    int choice, i;
////    for (i = 0; i <= N + 1; i++)//初始化商品数据库 
////    {
////        strcpy(num[i].bianhao, "88888");//编号 
////        strcpy(num[i].mingcheng, "88888");//名称 
////        num[i].jinjia = 88888;//进价 
////        num[i].shoujia = 88888;//售价 
////        num[i].kucun = 88888;//库存 
////    }
////    while (1)//主菜单显示和功能的循环 
////    {
////        printf("欢迎使用超市管理系统\n");
////        printf("\n*****************************************\n");
////        printf("1 建立数据库\n");
////        printf("2 显示全部商品信息\n");
////        printf("3 进货\n");
////        printf("4 退货\n");
////        printf("5 商品销售\n");
////        printf("6 商品查询\n");
////        printf("7 商品排序\n");
////        printf("*****************************************\n");
////        printf("\n请选择：");
////        scanf_s("%d", &choice);
////        while (1)//检验输入功能数字是否正确 
////        {
////            if (choice < 1 || choice>7)
////            {
////                printf("输入错误，请重新输入。");
////                break;
////            }
////            else
////                break;
////        }
////        switch (choice)//功能选择 
////        {
////        case 1:Jianlishangpinku();
////            break;
////        case 2:Xianshiquanbushangpinxinxi();
////            break;
////        case 3:Jinhuo();
////            break;
////        case 4:Tuihuo();
////            break;
////        case 5:Xiaoshou();
////            break;
////        case 6:Chaxun();
////            break;
////        case 7:Paixu();
////            break;
////        }
////    }
////    return 0;
////
////}
////void Jianlishangpinku()//建立商品库 
////{
////    int i;
////    printf("请依次输入货物信息：\n");
////    for (i = 0; i < N; i++)
////    {//向文件中写入信息
////        printf("--------------------------------------------------\n");
////        printf("第%d个商品：\n", i + 1);
////        printf("编号:");
////        scanf_s("%s", num[i].bianhao);//输入编号
////
////        printf("名称:");
////        scanf_s("%s", num[i].mingcheng);//输入名称 
////
////        printf("进价:");
////        scanf_s("%d", &num[i].jinjia);//输入进价 
////
////        printf("售价:");
////        scanf_s("%d", &num[i].shoujia);//输入售价 
////
////        printf("库存:");
////        scanf_s("%d", &num[i].kucun);//输入库存 
////        printf("---------------------------------------------------\n");
////    }
////    return;
////}
////void Xianshiquanbushangpinxinxi()//显示全部商品信息 
////{
////    int i;
////    for (i = 0; i <= N; i++)
////    {
////        printf("-------------------------------------------\n");
////        printf("编号:%s\n", num[i].bianhao);
////        printf("名称:%s\n", num[i].mingcheng);
////        printf("进价:%d\n", num[i].jinjia);
////        printf("售价:%d\n", num[i].shoujia);
////        printf("库存:%d\n", num[i].kucun);
////        printf("-------------------------------------------\n");
////    }
////    return;
////}
////void Jinhuo()//进货 
////{
////    int i;
////    printf("输入进货商品:");
////    scanf_s("%s", jiance.mingcheng);
////    for (i = 0; i < N; i++)
////    {
////        if (strcmp(num[i].mingcheng, jiance.mingcheng) == 0)//检测是否存在该商品 
////        {
////            printf("存在该商品，输入库存量:");
////            scanf_s("%d", &num[i].kucun);
////            break;
////        }
////        if (i == N - 1)//检测到第5件商品后发现无该商品则新建该商品 
////        {
////            printf("--------------------------------------------------\n");
////            printf("编号:");
////            scanf_s("%s", num[i + 1].bianhao);//输入编号
////
////            printf("名称:");
////            scanf_s("%s", num[i + 1].mingcheng);//输入名称 
////
////            printf("进价:");
////            scanf_s("%d", &num[i + 1].jinjia);//输入进价 
////
////            printf("售价:");
////            scanf_s("%d", &num[i + 1].shoujia);//输入售价 
////
////            printf("库存:");
////            scanf_s("%d", &num[i + 1].kucun);//输入库存 
////            printf("---------------------------------------------------\n");
////        }
////    }
////}
////void Tuihuo()//退货
////{
////    int i, j, x, k = 0;
////    printf("输入退货商品名称：");
////    scanf_s("%s", tui.name);
////    for (i = 0; i <= N; i++) // 循环进行检测要退货的商品
////        if (strcmp(num[i].mingcheng, tui.name) == 0)
////            for (j = i; j <= N + 1; j++) // 对退的货物进行从后向前覆盖
////            {
////                strcpy(num[j].bianhao, num[j + 1].bianhao);
////                strcpy(num[j].mingcheng, num[j + 1].mingcheng);
////                num[j].jinjia = num[j + 1].jinjia;
////                num[j].shoujia = num[j + 1].shoujia;
////                num[j].kucun = num[j + 1].kucun;
////            }
////    for (i = 0; i < N; i++)//检测是否有库存为0的商品
////    {
////        if (num[i].kucun == 0)
////        {
////            k++; //如果有库存为0的商品则k不为0，如果有商品为0的商品则输出该商品
////            printf("------------------------------\\n");
////            printf("编号：%s\\n", num[i].bianhao);
////            printf("名称：%s\\n", num[i].mingcheng);
////            printf("进价：%d\\n", num[i].jinjia);
////            printf("售价：%d\\n", num[i].shoujia);
////            printf("库存：%d\\n", num[i].kucun);
////            printf("------------------------------\\n");
////            printf("是否删除该商品信息\\n1:是\\n2:否\\n请选择：");
////            scanf_s("%d", &x);
////            if (x == 1)
////                for (j = i; j <= N; j++) // 若要删除该商品，则将该商品进行从后往前覆盖
////                {
////                    strcpy(num[j].bianhao, num[j + 1].bianhao);
////                    strcpy(num[j].mingcheng, num[j + 1].mingcheng);
////                    num[j].jinjia = num[j + 1].jinjia;
////                    num[j].shoujia = num[j + 1].shoujia;
////                    num[j].kucun = num[j + 1].kucun;
////                }
////        }
////    }
////    if (k == 0)
////        printf("无库存为0的商品\\n");
////}
////void Xiaoshou()//商品销售
////{
////    int i, n, p, q;
////    printf("请输入购买商品的编号：");
////    scanf_s("%s", sell.bianhao);
////    printf("请输入购买商品的数量：");
////    scanf_s("%d", &n);
////    for (i = 0; i <= N; i++)//循环检测要销售的商品
////    {
////        if (strcmp(num[i].bianhao, sell.bianhao) == 0)
////            break;
////    }
////    if (n > num[i].kucun) // 检测库存是否充足
////    {
////        scanf_s("库存不足");
////        return;
////    }
////    p = num[i].shoujia;
////    printf("应收金额：%d\n", n * p); //商品数量乘以售价
////    printf("实际收款：");
////    scanf_s("%d", &q);
////    if (q < n * p)//检测实际收款是否与应收款相符
////    {
////        printf("交易失败");
////        return;
////    }
////    else
////        num[i].kucun = (num[i].kucun - n); // 将库存减去销售量
////}
////void Chaxun()//查询输入的商品信息
////{
////    int c, i;
////    printf("请选择查询方式\n1:编号查询\n2:名称查询\n请选择：");
////    scanf_s("%d", &c);
////    if (c == 1) // 选择编号查询
////    {
////        printf("请输入商品编号：");
////        scanf("%s", cha.bianhao);
////        for (i = 0; i <= N; i++) // 循环查询到输入的编号信息
////        {
////            if (strcmp(num[i].bianhao, cha.bianhao) == 0)
////                break;
////        }
////        printf("------------------------------\n");
////        printf("编号：%s\n", num[i].bianhao);
////        printf("名称：%s\n", num[i].mingcheng);
////        printf("进价：%d\n", num[i].jinjia);
////        printf("售价：%d\n", num[i].shoujia);
////        printf("库存：%d\n", num[i].kucun);
////        printf("------------------------------\n");
////    }
////    if (c == 2) // 选择名称查询
////    {
////        printf("请输入商品名称：");
////        scanf("%s", cha.mingcheng);
////        for (i = 0; i <= N; i++) // 循环查询到输入的名称信息
////        {
////            if (strcmp(num[i].mingcheng, cha.mingcheng) == 0)
////                break;
////        }
////        printf("-------------------------------\n");
////        printf("编号：%s\n", num[i].bianhao);
////        printf("名称：%s\n", num[i].mingcheng);
////        printf("进价：%d\n", num[i].jinjia);
////        printf("售价：%d\n", num[i].shoujia);
////        printf("库存：%d\n", num[i].kucun);
////        printf("--------------------------------\n");
////    }
////}
////void Paixu()//商品排序
////{
////    int x, i, j, jinjia, shoujia, kucun;
////    printf("请选择排序的方法：\\n1:按商品编号排序\\n2:按商品价格排序\\n请选择:");
////    scanf_s("%d", &x);
////    if (x == 1) // 按商品编号排序（选择排序）
////    {
////        for (j = 0; j < N + 1; j++)
////        {
////            for (i = j + 1; i <= N + 1; i++)
////            {
////                if (strcmp(num[j].bianhao, num[i].bianhao) > 0)
////                {
////                    strcpy(pai.bianhao, num[i].bianhao);
////                    strcpy(num[i].bianhao, num[j].bianhao);
////                    strcpy(num[j].bianhao, pai.bianhao);
////                    strcpy(pai.mingcheng, num[i].mingcheng);
////                    strcpy(num[i].mingcheng, num[j].mingcheng);
////                    strcpy(num[j].mingcheng, pai.mingcheng);
////                    jinjia = num[i].jinjia;
////                    num[i].jinjia = num[j].jinjia;
////                    num[j].jinjia = jinjia;
////                    shoujia = num[i].shoujia;
////                    num[i].shoujia = num[i].shoujia;
////                    num[i].shoujia = shoujia;
////                    kucun = num[i].kucun;
////                    num[i].kucun = num[i].kucun;
////                    num[j].kucun = kucun;
////                }
////            }
////        }
////    }
////    if (x == 2)
////    {
////        for (j = 0; j < N + 1; j++)
////        {
////            for (i = j + 1; i <= N + 1; i++)
////            {
////                if (num[j].shoujia > num[i].shoujia)
////                {
////                    strcpy(pai.bianhao, num[i].bianhao);
////                    strcpy(num[i].bianhao, num[j].bianhao);
////                    strcpy(num[j].bianhao, pai.bianhao);
////                    strcpy(pai.mingcheng, num[i].mingcheng);
////                    strcpy(num[i].mingcheng, num[j].mingcheng);
////                    strcpy(num[j].mingcheng, pai.mingcheng);
////                    jinjia = num[i].jinjia;
////                    num[i].jinjia = num[j].jinjia;
////                    num[j].jinjia = jinjia;
////                    shoujia = num[i].shoujia;
////                    num[i].shoujia = num[j].shoujia;
////                    num[j].shoujia = shoujia;
////                    kucun = num[i].kucun;
////                    num[i].kucun = num[j].kucun;
////                    num[j].kucun = kucun;
////                }
////            }
////        }
////    }
////}
//
///*--------实现密码的隐式输入-----------------*/
//
//inputpw(char* password, int len) /*len为密码长度*/
//
//{
//
//	int i = 0; /*密码数组索引值,同时也表示记录已显示*的数目*/
//
//	char ch;
//
//	fflush(stdin); /*清洗流，以防妨碍密码正确输入*/
//
//	for (ch = getch(); ch != 13; ch = getch()) /*若输入回车则结束密码输入*/
//
//	{
//
//		if (i >= len) continue; /*如果已到达len指定的长度*/
//
//		if (ch == 8) /*若按了退格键*/
//
//		{
//
//			if (i > 0) /*如果已显示星数不为0*/
//
//			{
//
//				printf("\b");
//
//				password[--i] = '\0'; /*password[i-1]的值改为'\0', 已显示星数减一,数组索引值减一*/
//
//			}
//
//			putchar(0); /*显示空字符*/
//
//			printf("\b");
//
//			continue;
//
//		}
//
//		if (ch < 32 || ch>127) continue; /*密码只能为ASCII码值为32-127的字符*/
//
//		printf("*"); /*上述情况都不是则显示一个星*/
//
//		password[i++] = ch; /*将ch赋给password[i],已显示星数加一,数组索引值加一*/
//
//	}
//
//	password[i] = '\0'; /*设置结尾的空字符*/
//
//}
//
///*--------------管理员登录验证,返回登录状态------------------------*/
//
//int login(int x) /*x传入第几次登录*/
//
//{
//
//	char pws[15], admin[] = { "dfghjfgfdg" }; /*密码设定,未加密*/
//
//	clrscr();
//
//	if (x == 2)
//
//		printf("Input the password please:");
//
//	else
//
//		printf("The password you input is ERROR!please input again:");
//
//	inputpw(pws, 15);
//
//	printf("\nSystem is checking your status,please wait...");
//
//	sleep(2);
//
//	if (strcmp(pws, admin) == 0) {
//
//		return TRUE;
//	}
//
//	else
//
//		return FALSE;
//
//}

//int a = 0;
//int b = 0;
//
//void add()
//{
//	a = 10;
//	b = 5;
//
//}
//
//void pri()
//{
//	printf("%d", a);
//}
//
//int main()
//{
//	add();
//	pri();
//}
//
//
//#include<stdio.h>
//#include<string.h>
//#define N 100
//
//int max(int a, int b)
//{
//	if (a > b)
//		return a;
//
//	if (a < b)
//		return b;
//}
//
//int main()
//{
//	int n = 0; //n个物体
//	int V = 0; //容量最大体积为多少
//	int v[N] = { 0 };   //初始化要带括号
//	int w[N] = { 0 };
//	int dp[N][N] = { 0 };
//	int a = 1;
//	char ch2 = '0';
//	int flag2 = 0;
//
//	//输入条件
//	printf("请输入物品个数 和 背包最大体积：");
//	scanf("%d %d", &n, &V);
//
//	for (int i = 1; i <= n; i++)   //v[0] 和 w[0]都是从下标1开始初始化 注意下
//	{
//		printf("第%d个物品的体积和价值：", i);
//		scanf("%d %d", &v[i], &w[i]);
//	}
//
//	printf("\n");
//
//	//解决第一问 背包最大价值是多少
//	if (a == 1)
//	{
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= V; j++)
//			{
//				dp[i][j] = dp[i - 1][j];
//				if (j >= v[i])
//				{
//					//原来真的自带max函数
//					dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
//				}
//			}
//
//		printf("%d\n", n);
//
//		for (int i = 0; i <= 15; i++)
//		{
//			for (int j = 0; j <= 15; j++)
//			{
//				printf("%d ", dp[i][j]);
//			}
//			printf("\n");
//		}
//
//
//		printf("背包所能可装入的最大价值为：%d\n\n", dp[n][V]);
//	}
//
//	memset(dp, 0, sizeof dp);
//
//	//初始化为-1
//	for (int j = 1; j <= V; j++)
//	{
//		dp[0][j] = -1;
//	}
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= V; j++)
//		{
//			dp[i][j] = dp[i - 1][j];
//			if (j >= v[i] && dp[i - 1][j - v[i]] != -1)
//			{
//				dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
//			}
//		}
//	printf("%d\n\n", (dp[n][V] == -1 ? 0 : dp[n][V]));
//}


//
//#include<stdio.h>
//#include<string.h>
//#define N 100
//
//
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//
//int main()
//{
//	int n = 0; //n个物体
//	int V = 0; //容量最大体积为多少
//	int v[N] = { 0 };   //初始化要带括号
//	int w[N] = { 0 };
//	int dp[N][N] = { 0 };
//	char ch2 = '0';
//	int flag2 = 0;
//
//	for (int j = 0; j <= V; j++)
//	{
//		dp[0][j] = 0;
//	}
//
//	//输入条件
//	scanf("%d %d", &n, &V);
//
//	for (int i = 1; i <= n; i++)   //v[0] 和 w[0]都是从下标1开始初始化 注意下
//	{
//		scanf("%d %d", &v[i], &w[i]);
//	}
//
//	//解决第一问 背包最大价值是多少
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= V; j++)
//		{
//			dp[i][j] = dp[i - 1][j];
//			if (j >= v[i])
//				dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
//		}
//
//
//	printf("%d\n", dp[n][V]);
//
//
//
//	memset(dp, 0, sizeof dp);
//
//	//初始化为-1
//	for (int j = 1; j <= V; j++)
//	{
//		dp[0][j] = -1;
//	}
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= V; j++)
//		{
//			dp[i][j] = dp[i - 1][j];
//			if (j >= v[i] && dp[i - 1][j - v[i]] != -1)
//			{
//				dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
//			}
//		}
//	printf("%d", (dp[n][V] == -1 ? 0 : dp[n][V]));
//}



//#include<stdio.h>
//#include<string.h>
//#define N 100
//
//
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//
//int main()
//{
//	int n = 0; //n个物体
//	int V = 0; //容量最大体积为多少
//	int v[N] = { 0 };   //初始化要带括号
//	int w[N] = { 0 };
//	int dp[N] = { 0 };
//	dp[0] = 0;
//
//	//输入条件
//	scanf("%d %d", &n, &V);
//
//	for (int i = 1; i <= n; i++)
//		scanf("%d %d", &v[i], &w[i]);
//
//
//	//解决第一问 背包最大价值是多少
//
//	for (int i = 1; i <= n; i++)
//		for (int j = V; j >= v[i]; j--)
//		{
//			dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//
//		}
//
//	printf("%d\n", dp[V]);
//
//
//
//	memset(dp, 0, sizeof dp);
//
//	//初始化为-1
//	for (int j = 1; j <= V; j++)
//	{
//		dp[j] = -1;
//	}
//
//	for (int i = 1; i <= n; i++)
//		for (int j = V; j >= v[i]; j--)
//		{
//			if (dp[j - v[i]] != -1)
//			{
//				dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//			}
//		}
//	printf("%d", (dp[V] == -1 ? 0 : dp[V]));
//}

#include<stdio.h>

int main()
{
	int a = 0x00f0;

	a &= 0x0f00;
	printf("%x", a);
}