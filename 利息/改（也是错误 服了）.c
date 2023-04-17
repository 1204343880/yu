#include<stdio.h>
int mai()
{
	int x;
	scanf_s("%d", &x);

	double amount;
	amount = x * (1 + 0.033);
	
	printf("%lf\n", amount);

	return 0;
}