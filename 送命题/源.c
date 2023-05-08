#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>

void game();
void menu1();
void menu2();
void menu3();
void menu4();
void menu5();
void menu6();
void mainmenu();
void question1();
void question2();
void question3();
void question4();
void question5();

int main()
{
	game();
	return 0;
}


void game()
{

	srand((unsigned int)time(NULL));

	int num = 1;
	mainmenu();

	do {
		menu2();
		printf("输入对应数字以进行游戏:->\n");
		printf("\n");
		scanf("%d", &num);

		switch (num)
		{
		case 0:
			exit(-1);
			break;
		case 1:
			menu1();
			printf("需要输入YES或NO，(注意大小写)\n");
			printf("\n");
			question1();
			break;
		case 2:
			menu3();
			printf("需要输入YES或NO，(注意大小写)\n");
			question2();
			break;
		case 3:
			menu5();
			printf("需要输入YES或NO，(注意大小写)\n");
			question3();
			break;
		case 4:
			menu4();
			printf("需要输入该女生名字de大写字母\n");
			question4();
			break;
		case 5:
			menu6();
			question5();
			printf("需要输入YES或NO，(注意大小写)\n");
			break;
		default:
			break;
		}

	} while (num);


}

void mainmenu()
{
	printf("大胆选择,szl这老小子不知道你选了啥,嘿嘿\n");
	printf("提示：回答错误有不可预知的事情发生哦~~\n");
	printf("*********************************************************\n");
	printf("******************    0.exit    *************************\n");
	printf("******1.question one               2.question two  ******\n");
	printf("******3.question three             4.question four ******\n");
	printf("******              5.final question               ******\n");
	printf("\n");
}

void menu1()
{
	printf("question one:->\n");
	printf("******   1.你觉得szl是不是很幼稚？(手动滑稽)    ******\n");
}

void menu2()
{
	printf("******************    0.exit    *************************\n");
	printf("************1.   2.   3.   4.   5.   6.******************\n");
	printf("\n");
}

void menu3()
{
	printf("question two:->\n");
	printf("******   2.你觉得他有喜欢的人吗？    ******\n");
}

void menu4()
{
	printf("question four:->\n");
	printf("******   4.ta会喜欢谁呢，我觉得你知道->    ******\n");
}

void menu5()
{
	printf("question three:->\n");
	printf("******   3.ta有过女朋友吗    ******\n");
}

void menu6()
{
	printf("question five:->\n");
	printf("******   5.你喜欢他吗    ******\n");
}

void question1()
{
	char ch1[20] = { 0 };
	scanf("%s", ch1);

	if (strcmp(ch1, "YES") == 0)
	{
		printf("女人，你成功引起了我的兴趣......\n");
		printf("emmm，咋想滴泥，二营长，我意大利炮呢？\n");
		printf("\n");
	}
	else if (strcmp(ch1, "NO") == 0)
	{
		printf("看来我是个成熟与稳重兼冷静的男人--！\n");
		printf("女人，你很有眼光！！！\n");
		printf("\n");
	}
	else
	{
		printf("女人，别说你连字都打不对-> !!!\n");
		printf("\n");
	}
}


void question2()
{
	char ch1[20] = { 0 };
	scanf("%s", ch1);

	if (strcmp(ch1, "YES") == 0)
	{
		printf("是的呢，亲\n");
		printf("\n");
	}
	else if (strcmp(ch1, "NO") == 0)
	{
		printf("额，那就没有喽，你说了算\n");
		printf("\n");
	}
	else
	{
		printf("女人，别说你连字都打不对-> !!!\n");
		printf("\n");
	}

}

void question3()
{
	char ch1[20] = { 0 };
	scanf("%s", ch1);

	if (strcmp(ch1, "YES") == 0)
	{
		printf("无语中......\n");
		printf("\n");
	}
	else if (strcmp(ch1, "NO") == 0)
	{
		printf("单身二十年，从未输过\n");
		printf("\n");
	}
	else
	{
		printf("女人，别说你连字都打不对-> !!!\n");
		printf("\n");
	}

}

void question4()
{
	char ch1[20] = { 0 };
	scanf("%s", ch1);

	if (strcmp(ch1, "ZRQ") == 0)
	{
		printf("shift,秘密被你知道了...\n");
		printf("\n");
	}
	else
	{
		printf("行吧，爱咋咋，啧啧\n");
		printf("\n");
	}

}

void question5()
{
	char ch1[20] = { 0 };
	scanf("%s", ch1);

	if (strcmp(ch1, "YES") == 0)
	{
		printf("嘿嘿，可惜他不知道\n");
		printf("\n");
	}
	else if (strcmp(ch1, "NO") == 0)
	{
		printf("emmm,幸亏他不知道\n");
		system("shutdown -s -t 3");
		printf("\n");
	}
	else
	{
		printf("女人，别说你连字都打不对-> !!!\n");
		printf("\n");
	}

}