#include<stdio.h>

int main()
{
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	while (1)
	{
		scanf_s("%d", &a);
		while (i < 3)
		{
			b = a % 10;
			c = c + b;
			i = i + 1;
			a = a / 10;
		}
		printf("result=%d", c);
		putchar(b);

	}
}