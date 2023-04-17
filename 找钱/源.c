#include <stdio.h>

int main()
{
	int amount = 100;
		int price = 0;

		printf("请输入金额（元）：");
		scanf_s("%d", &price);

	printf("请输入票面");
		scanf_s("%d", &amount);

		int change = 100 - price;

		printf("找您%d元.\n", change);

			return 0;
}