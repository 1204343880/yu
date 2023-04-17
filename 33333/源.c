#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("输入三位数%d", &a);
	for(int i = 1; i <4 , i=i+1;)
	{
		b = a % 10;
		a = b;
		c = a + c;
    }
	printf("result=%d", &c);
	return 0;
}