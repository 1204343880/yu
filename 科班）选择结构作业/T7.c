//#define  _CRT_SECURE_NO_WARNINGS  1
//#pragma warning(disable:6031)
//
//
////看到这个题 让我想起来通讯增删查改了  可以用枚举变量和函数减少代码量的吧 但忘了
////  后面再去想一想
//
//
////给题目多写一步   当输入不在四则运算符里面的时候
//#include<stdio.h>
//
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	char c = 0;
//	double sum = 0.0;
//	scanf("%lf,%lf%c", &a, &b, &c);
//
//	if (c == '+')
//	{
//		sum = a + b;
//
//	}
//	else if (c == '-')
//	{
//		sum = a - b;
//	}
//	else if (c == '*')
//	{
//		sum = a * b;
//	}
//	else if (c == '/')
//	{
//		sum = a / b;
//	}
//	else
//	{
//		printf("该程序不支持此算法");
//
//	}
//
//}