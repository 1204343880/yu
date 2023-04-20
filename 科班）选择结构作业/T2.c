#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)


//                                                    由键盘输入三个整数，要求按从小到大的顺序输出。

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		a = a + b;
		b = a - b;
		a = a - b;

	}
	if (a > c)
	{
		a = a + c;
		c = a - c;
		a = a - c;

	}

	if (b > c)
	{
		b = b + c;
		c = b - c;
		b = b - c;

	}
	printf("%d %d %d", c, b, a);

}
