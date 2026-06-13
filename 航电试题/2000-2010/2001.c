//#define  _CRT_SECURE_NO_WARNINGS  1
//#pragma warning(disable:6031)
//
////输入两点坐标（X1, Y1）, （X2, Y2）, 计算并输出两点间的距离。
//
////二维数组反而麻烦
//#include<stdio.h>
//#include <math.h>
//
//int main()
//{
//	//没审题清楚 应该用小数
//    double x1 = 0;
//	double y1 = 0;
//	double x2 = 0;
//	double y2 = 0;
//	double area = 0;
//
//	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2); //double 要用lf
//
//	//if循环麻烦了 因为负数×负数也会变成正的
//	//这个地方可以简化
//	if (x1 - x2 >= 0) //比较能用小数比0嘛
//	{
//		x1 = x1 - x2;
//	}
//	else
//	{
//		x1 = -(x1 - x2);
//	}
//	printf("%lf\n", x1);
//
//	if (y1 - y2 >= 0.0)
//	{
//		y1 = y1 - y2;
//	}
//	else
//	{
//		y1 = -(y1 - y2);
//	}
//	printf("%lf\n", y1);
//
//	//开方函数
//	printf("%.2lf", sqrt((x1 * x1) + (y1 * y1)));
//}
//
////简化后代码
////#include <math.h> //由于用到sqrt()函数，所以需要有math.h头文件 
////
////#include <stdio.h>
////
////
////
////int main()
////
////{
////
////    double x[2], y[2];
////
////    while (scanf("%lf%lf%lf%lf", x, y, x + 1, y + 1) != EOF)
////
////        printf("%.2f\n", sqrt((x[1] - x[0]) * (x[1] - x[0]) + (y[1] - y[0]) * (y[1] - y[0])));//运用两点的距离公式进行计算 
////
////    return 0;
////
////}
