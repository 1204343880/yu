#include<stdio.h>

int main()
{
	int coding = 0;
	printf("你会好好敲代码嘛 敲填1  不敲填0\n");
	while (coding!=10)
	{
		scanf_s("%d", &coding);
		if (coding == 1)
		{
			printf("你会得到一个好offer\n");
		}
		else
		{
			printf("你要去卖红薯");
		}
	}
		return 0;
}