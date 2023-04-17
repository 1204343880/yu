#include<stdio.h>

int main()
{
	int count = 0;

	for (int i = 1; i < 100; i++)
	{
		if ((i % 2) == 0)
		{
			continue;    //真是sb啊    if不是循环，是选择结构   怪不得这样跳出 我真sb
		}
			printf("%-4d", i);
			count++;


		if ((count % 5) == 0)
		{
			printf("\n");

		}

	}
}

