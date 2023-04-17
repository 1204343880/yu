#include<stdio.h>
int main()               //在代码中1234这种只表示一个数列不是一千二百三十四含义
{
	int a=0;    //思路对    但逻辑没把握好     没写成功

	while (a!=1)
	{
	scanf_s("%d", &a);
	while (a)
	{
	printf("%d", a % 10);    
	a = a / 10;
	}
			
    }
		

}

#include "stdio.h"
#define N 100
int main()
{
	int n, a[N];
	int i = 0;
	printf("请输入十进制数n：");
	scanf_s("%d", &n);
	while (n > 0)
	{
		a[i] = n % 2;
		i = i + 1;
		n = n / 2;
	}
	for (i--; i >= 0; i--)
		printf("%d", a[i]);
	printf("\n");
	return 0;
}