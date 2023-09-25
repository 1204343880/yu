#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

//功能的测试

#include"sweep.h"

int main()
{
	char input = 0;
	//第一层的数组    数组的名字最好也有相对应的含义
	char mine[ROWS][COLS] = { 0 }; //创建11 用9
	char show[ROWS][COLS] = { 0 };   //创建11 用9

	srand((unsigned int)time(NULL));

	menu();

	while(1)
	{
		printf("请输入你选择的功能(如果你想打印菜单，请输入：M)\n");
		printf(":>");

		scanf("%s", &input);
		  //这个地方 因为是字符类型 所以会读取回车(\n)  理解对不对？？？？  单独测试发现不会二次读取啊！！！！ 
		 
		if (input == 'M')
		{
			menu();
			continue;    //在这个地方搞一个continue 就不用再创建一个变量来重新接受 是否为m  但是整形数组会接受m嘛？  
		}



		switch (input)
		{
		case '1':
			game(mine, show, ROW, COL);
			break;

		case '0':
			printf("退出游戏，欢迎下次游玩！\n");
			break;

		default:
			printf("错误选项，请重新选择！\n");
			break;
		}
	}
	
}


