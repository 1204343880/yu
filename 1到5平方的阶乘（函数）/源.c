#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>

//½×³Ë
double f2(int end, int arr[4])
{
	arr[3] = 10;

	return 0;
}

int main()
{
	double sum = 0;
	int i = 0;
	int m = 0;
	int arr[4] = { 0,1,2,3 };

	sum = f2(i, arr[4]);


	printf("%d", arr[3]);
	printf("%.0f", sum);
}