#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>

//½×³Ë
double f2(int end)
{
	double sum1 = 1;
	int j = 0;
	for (j = 1; j <= end; j++)
	{
		sum1*= j;
	}

	return sum1;
}

int main()
{
	double sum = 0;
	int i = 0;
	int m = 0;
	scanf("%d", &m);
	for (i = 1; i <= m; i++)
	{
		sum += f2(i);
	}

	printf("%.0f", sum);
}