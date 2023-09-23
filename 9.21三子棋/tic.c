#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
//函数的实现



#include"tic.h"



//菜单的实现
void menu()
{
	printf("*************menu*************\n");
	printf("********   1.paly    *********\n");
	printf("********   0.exit    *********\n");
	printf("******************************\n");
}



//开始模块化实现  并且要实用于多子棋 不止三子棋！！
//初始化棋盘！！！  适用多子棋了！
void Initboard(char arr[ROW][COL], int row, int col)                     //在函数实现的源文件里面  这里面的形参可怎么办？   直接用game里的！！ 这我都能忘 真是拉跨 
{
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			arr[i][j] = ' ';
		}
	}
}



//打印棋盘 （版本1！）    只适用三子棋的版本 
//void Disboard1(char arr[ROW][COL], int row, int col)
//{
//	for (int i = 0; i < ROW; i++)
//	{
//		printf(" %c | %c | %c \n", arr[i][0], arr[i][1], arr[i][2]);           //对不齐可怎么办？      //这里传参居然还有问题 二维数组不能用？  还好今天及时发现了！！·
//		if (i < 2)
//		{
//			printf("---|---|--- \n");
//		}
//	}
//}


//打印棋盘！！！  
void Disboard(char arr[ROW][COL], int row, int col)
{
	//单行打印
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < ROW; j++)
		{
			printf(" %c ", arr[i][j]);

			if (j < ROW - 1)
			{
				printf("|");
			}
		}
		printf("\n");

		if (i < ROW - 1)
		{
			for (int j = 0; j < ROW; j++)
			{
				printf("---");

				if (j < ROW - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");

	}
}



//玩家下棋 #
void playermove(char arr[ROW][COL], int row, int col)
{
	printf("玩家下棋>:\n");

	while (1)
	{

		printf("请输入你想下的坐标(记得用空格隔开):>\n");
		int x = 1;
		int y = 1;

		scanf("%d %d", &x, &y);

		if ((x <= col && 1 <= x) && (y <= col && 1 <= y))    //必须输入正确坐标！
		{

			if (arr[x - 1][y - 1] == ' ')     //记得这个是俩等于号 
			{

				arr[x - 1][y - 1] = '#';      //缓存区溢出！！！  要怎么改 才能让他不溢出 ！


				//打印棋盘 看看有没有成功输入
				Disboard(arr, row, col);

				break;
			}
			else
			{
				printf("这个坐标已经有值！\n");
			}
		}

		else
		{
			printf("输入错误坐标，重新输入！\n");
		}


	}

}



//电脑下棋 *
void computermove(char arr[ROW][COL], int row, int col)
{

	printf("电脑下棋>:\n");   
	while (1)
	{
		int x1 = rand() % row;     //这个也是只能三子棋 
		int y1 = rand() % col;

		if (arr[x1][y1] == ' ')    //写一个循环 直到它下棋才行
		{
			arr[x1][y1] = '*';


		//打印棋盘
		Disboard(arr, row, col);
		

			break;
		}

	}
}



//输赢判断   通过返回值来实现 先写三子棋的      1是玩家赢
int iswin(char arr[ROW][COL], int row, int col)                      //有了return返回值 循环终止这件事还要继续嘛？
{
	int isfull = 0;
	//玩家赢
	for (int is = 0; is < ROW; is++)
	{
		if (arr[is][0] == arr[is][1] && arr[is][1] == arr[is][2] && arr[is][2] == arr[is][0] && arr[is][0] == '#')
		{
			return 1;
		}
	}

	for (int is = 0; is < COL; is++)
	{
		if (arr[0][is] == arr[1][is] && arr[1][is] == arr[2][is] && arr[2][is] == arr[0][is] && arr[1][is] == '#')
		{
			return 1;                             
		}
	}

	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2] == '#')
	{
		return 1;

	}

	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] == '#')
	{
		return 1;
	}


	//电脑赢
	for (int is = 0; is < ROW; is++)
	{
		if (arr[is][0] == arr[is][1] && arr[is][1] == arr[is][2] && arr[is][2] == arr[is][0] && arr[is][0] == '*')
		{
			return 2;
		}
	}


	for (int is = 0; is < COL; is++)
	{
		if (arr[0][is] == arr[1][is] && arr[1][is] == arr[2][is] && arr[2][is] == arr[0][is] && arr[1][is] == '*')
		{
			return 2;
		}
	}


	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2] == '*')
	{
		return 2;
	}

	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] == '*')
	{
		return 2;
	}

	//平局
		//平局设定 
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (arr[i][j] == ' ')
			{
				isfull = 1;
			}
		}
	}

	if (isfull == 0)
	{
		return 3;
	}

	return 0;   //继续
}



//判断到底谁赢！
void judge(int win)
{
	if (win == 1)
	{
		printf("玩家赢！\n");
		printf("\n");
	}
	else if (win == 2)
	{
		printf("电脑赢！\n");
		printf("\n");
	}
	else if (win == 3)
	{
		printf("平局！\n");
		printf("\n");
	}
	else;
}



//(非优化版本)在一个game函数里面实现还是很不错的 这个想法   后期看看有没有更优化！
void game1(char arr[ROW][COL], int row, int col)
{
	srand((unsigned int)time(NULL));


	printf("欢迎游玩此游戏！！！\n");

	//初始化棋盘
	Initboard(arr, row, col);

	//打印棋盘                                                                       
	Disboard(arr, row, col);

	//下棋
	while (1)
	{
		int flag = 0;

		int isfull = 0;

		//玩家下棋 #
		playermove(arr, row, col);


		//判断输赢 玩家            横着 竖着 斜着             //不如一个大函数来的实在  利用他的返回值


		//平局设定 
		for (int i = 0; i < col; i++)
		{
			for (int j = 0; j < row; j++)
			{
				if (arr[i][j] == ' ')
				{
					isfull = 1;
				}
			}
		}

		if (isfull == 0)
		{
			printf("平局！！\n");
			printf("\n");
			break;
		}


		if (flag == 1)
		{
			break;
		}


		//电脑下棋 *
		computermove(arr, row, col);





		//判断输赢 电脑 
		for (int is = 0; is < ROW; is++)
		{
			if (arr[is][0] == arr[is][1] && arr[is][1] == arr[is][2] && arr[is][2] == arr[is][0] && arr[is][0] == '*')
			{
				printf("电脑赢！\n");
				printf("\n");
				flag = 1;
				break;
			}
		}


		for (int is = 0; is < COL; is++)
		{
			if (arr[0][is] == arr[1][is] && arr[1][is] == arr[2][is] && arr[2][is] == arr[0][is] && arr[1][is] == '*')
			{
				printf("电脑赢！\n");
				printf("\n");
				flag = 1;
				break;
			}
		}


		if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2] == '*')
		{
			printf("电脑赢！\n");
			printf("\n");
			flag = 1;
			break;
		}

		if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] == '*')
		{
			printf("电脑赢！\n");
			printf("\n");
			flag = 1;
			break;
		}

		//平局设定 
		for (int i = 0; i < col; i++)
		{
			for (int j = 0; j < row; j++)
			{
				if (arr[i][j] == ' ')
				{
					isfull = 1;
				}
			}
		}

		if (isfull == 0)
		{
			printf("平局！！\n");
			printf("\n");
			break;
		}

		if (flag == 1)
		{
			break;
		}
	}

}



//游戏的实现
void game(char arr[ROW][COL], int row, int col)                     
{
	srand( (unsigned int) time(NULL));


	printf("欢迎游玩此游戏！！！\n");

	//初始化棋盘
	Initboard(arr, row, col);

	//打印棋盘                                                                       
	Disboard(arr, row, col);

	//下棋
	while (1)   
	{
		int win = 0;
		//玩家下棋 #
		playermove(arr, row, col);

		//判断输赢 玩家          
		win = iswin(arr, row, col);     //我要怎么设计才能退出这个循环呢？
		judge(win);

		if (win != 0)
		{
			break;
		}
		//电脑下棋 *
		computermove(arr, row, col);
	
		//判断输赢 电脑 
		win = iswin(arr, row, col);
		judge(win);

		if (win != 0)
		{
			break;
		}
	}

}



//退出的实现
void end()
{
	printf("欢迎下次游玩次游戏，再见！\n");
}



//别的选项的实现
void other()
{
	printf("输入错误，请重新输入!\n");
}