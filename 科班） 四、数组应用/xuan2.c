#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
//
//#include<stdio.h>
///*
//找出一个二维数组中的鞍点，即该位置上的元素在该行最大，
//在该列上最小，也可能没有鞍点。存在则输出坐标；否则输出 -1.
//*/
//
//#include<stdio.h>
//
//int main()
//{
//
//}


//抄袭的

//#include<stdio.h>
//int main()
//{
//	int a[50][50] = { 0 }, max, min, i, j, k, m, x, y;
//	printf("请输入数组的行数 列数：");
//	scanf("%d %d", &x, &y);
//
//	for (i = 0; i < x; i++)
//		for (j = 0; j < y; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//
//	for (i = 0; i < x; i++)
//	{
//		max = a[i][0];//假定max
//		for (j = 0; j < y; j++)
//			if (a[i][j] > max)
//			{
//				max = a[i][j];
//				k = j;
//			}
//
//		min = max;//判断是否符合鞍点的第二个条件
//
//		for (m = 0; m < x; m++)
//		{
//			if (min > a[m][k])
//				break;
//		}
//
//		if (m == x) {
//			printf("鞍点为%d", a[i][k]);
//			break;
//		}
//	}
//
//	if (i == x) printf("没有鞍点");
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    double a[10];
    double sum = 0.0;
    for (int i = 0; i < 7; i++) {
        scanf("%lf", &a[i]);
    }
    double max = a[0];
    double min = a[0];
    for (int i = 0; i < 7; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
        sum += a[i];
    }
    sum = sum - max - min;
    printf("score=%.2lf", sum / 5);
    return 0;

}

