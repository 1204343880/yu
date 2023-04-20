#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include<stdio.h>

int main()
{
	int kilo = 0;
	int money = 0;
	scanf("%d", &kilo);

	if (kilo < 20)
	{
		printf("0\n 您不需要支付任何钱");
	}
	else if (kilo < 40 && kilo >= 20)
	{
		kilo -= 20;
		money = kilo * 2;
		printf("您需要额外支付%d", money);

	}
	else
	{
		//俩思路 一种是先口算算出来前40kg （√）   第二种麻烦点 ，一点点写出来

		money = 20;
		kilo -= 40;
		money += kilo * 5;
		printf("您需要额外支付%d", money);
	}
}