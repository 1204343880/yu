#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define max 100

int weight[max];//每件物品的重量
int value[max];//每件物品的价值
int n, maxweight, maxvalue;//最大重量，最大价值

int bestanswer[max];//最优解
int answer[max];

void print()
{
	int i;
	printf("选中为1，没选中为0\n");
	printf("------------------\n");
	printf("最大价值为：%d\n", maxvalue);
	for (i = 1; i <= n; i++)
	{
		printf("第%d件物品=%d\n", i, bestanswer[i]);//根据解空间序列判断物品选中情况
	}
	printf("\n");
}

void DFS(int level, int Cweight, int Cvalue)
{
	if (level >= n + 1)//到达叶子结点
	{
		if (Cvalue > maxvalue)//判断是否更新最优解
		{
			int i;
			maxvalue = Cvalue;
			for (i = 1; i <= n; i++)
				bestanswer[i] = answer[i];
		}
	}
	else
	{
		if (Cweight >= weight[level + 1])//进入左子树1
		{
			Cweight = Cweight - weight[level + 1];
			Cvalue = Cvalue + value[level + 1];
			answer[level + 1] = 1;
			DFS(level + 1, Cweight, Cvalue);
			answer[level + 1] = 0;
			Cweight = Cweight + weight[level + 1];
			Cvalue = Cvalue - value[level + 1];
		}
		DFS(level + 1, Cweight, Cvalue);//进入右子树0，当前价值和当前重量不改变
	}
}

void cs()//初始化最大价值和解空间
{
	int i;
	maxvalue = 0;
	for (i = 1; i <= n; i++)
		answer[i] = 0;
}

int main()
{
	int i;
	while (1)
	{
		printf("请输入物品的数量和最大重量：");
		if (scanf("%d%d", &n, &maxweight) != EOF)
		{
			for (i = 1; i <= n; i++)
			{
				printf("\n");
				printf("--------------------------\n");
				printf("请输入第%d件物品的重量：", i);
				scanf("%d", &weight[i]);
				printf("请输入第%d件物品的价值：", i);
				scanf("%d", &value[i]);
				printf("\n");
			}
			cs();
			DFS(0, maxweight, 0);
			print();
		}
	}
	return 0;
}
