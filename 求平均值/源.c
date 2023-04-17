#include<stdio.h>
int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);

	double c = (a + b) / 2.0;
	
	printf("%d和%d的平均值=%f/n", a, b, c);

}