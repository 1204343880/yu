#include<stdio.h>

int Min(int x, int y)
{
	if (x > y)
		return y;
	else
		return x;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int m = Min(a, b);
	printf("%d" ,a);
}