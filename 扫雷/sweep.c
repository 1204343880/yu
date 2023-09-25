#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

//函数的定义



#include"sweep.h"



//菜单的实现
void menu()
{
	printf("*************************\n");
	printf("******     Menu   *******\n");
	printf("***      1.play      ****\n");
	printf("***      0.exit      ****\n");
	printf("*************************\n");
}


//初始化棋盘
//这个地方传参还是有细节的 希望自己日后可以注意!   写一个通用的初始化那一步的传参就很重要
void initboard(char arr[ROWS][COLS], int row, int col, char ret)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			arr[i][j] = ret;
		}
	}
}



//打印棋盘
//这个打印也要实现通用的功能
void disboard(char arr[ROWS][COLS], int row, int col)
{
	printf("-------扫雷游戏--------\n");
	for (int i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}

	printf("\n");

	//怪不得出问题 打印出错了 从1开始打印！！！
	//for (int i = 0; i < row; i++)
	//{
	//	printf("%d ", i + 1);
	//	for (int j = 0; j < row; j++)
	//	{
	//		printf("%c ",arr[i][j]);
	//	}
	//	printf("\n");
	//}

	for (int i = 1; i < ROWS-1; i++)
	{
		printf("%d ", i);
		for (int j = 1; j < ROWS -1; j++)
		{
			printf("%c ",arr[i][j]);
		}
		printf("\n");
	}
}



//生成雷
void setmine(char arr[ROWS][COLS])
{
	int count = MINE;

	//这个地方用count来实现 每成功生成一个 就count-1   变成0直接就退出了 很简单的一个实现的方法
	while (count)
	{
		//rand 之后只能生成 0~8 而处理的范围是1~9 所以要加1
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;

		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}



//找到雷的个数
int getminecount(char arr[ROWS][COLS], int x, int y)
{
	return (arr[x - 1][y + 1] + arr[x - 1][y] + arr[x - 1][y - 1] + arr[x][y + 1] + arr[x][y - 1] + arr[x + 1][y + 1] + arr[x + 1][y] + arr[x + 1][y - 1] - 8 * '0');
}



//排除雷
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int flag = (ROW * COL) - MINE;

	while (1)
	{
		printf("请输入坐标(用空格隔开):>");
		scanf("%d %d", &x, &y);

		if (mine[x][y] == '1')
		{
			printf("倒霉蛋，你被炸死了！\n");
			printf("\n");
			break;
		}
		else
		{
			--flag;
			//这个地方记得再转化为字符类型
			char count = getminecount(mine, x, y) + '0';    //因为是下标控制 这个地方也要-1

			//0不好看 让他是空格！
			if (count == '0')
			{
				count = ' ';
			}
			show[x][y] = count;    //为什么缓存区会溢出？  不对啊 虽然格子是11个 但是用的就是9个 下标也是从9开始
			disboard(show, ROW, COL);
		}

		if (flag == 0)
		{
			printf("你赢了！\n");
			printf("\n");
		}
	}

}


//游戏的实现
void game(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//初始化
	initboard(mine, ROWS, COLS, '0');  //初始化第一层
	initboard(show, ROWS, COLS, '*');  //初始化第二层

	disboard(mine, ROW, COL);   //删除
	disboard(show, ROW, COL);   //删除

	//生成雷
	setmine(mine);
	//看看是否正常生成了
	disboard(mine, ROW, COL); //删除
	disboard(show, ROW, COL);

	//开始实现如果排雷！输入相对应坐标 然后显示！
	findmine(mine, show, ROW, COL);


}