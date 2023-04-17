#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


int x, y;
int add(x, y)
{
	int z = 0;
	z = x + y;
	return z;
}


int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	int sum = add(num1, num2);

	printf("%d\n", sum);
	return 0;

}
