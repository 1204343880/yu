#include<stdio.h>
int main()
{
	int x;

	scanf_s("%d", &x);

	double amount;

	amount = x * (1 + 0.033) * (1 + 0.033);

	printf("%lf", amount);

	return 0;
}