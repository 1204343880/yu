#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)




//    错误地方           1.在 y=1/x 后面没分号（;）                2.  scanf输入是需要取地址的
#include  <stdio.h>
void main()
{
	double  x, y;

	printf("Enter x:");
	scanf("%lf", &x);
	if (x != 0)
	{
		y = 1 / x;
	}
	else
	{
		y = 0;
	}
	printf("f(%.2f) = %.1f\n", x, y);
}