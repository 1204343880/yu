#include <stdio.h>

#define PI 3.14

int main()
{
	int r1 = 0;
	int r2 = 0;
	float S1 = 0;
	float S2 = 0;
	printf("请输入半径 r1 r2");
	scanf_s("%d %d", &r1, &r2);

	S1 = PI * r1;
	S2 = PI * r2;

	printf("圆形垫片面积为%.3f\\n", S2 - S1);
	putchar(S2);

	return 0;
}