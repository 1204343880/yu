#include<stdio.h>

//int main()
{
	int count = 0;
	int s = 0;
	for (int i = 1; i < 100; i++)
	{
		if ((i % 2 )!= 0)
		{
			printf("%-4d", i);
			++count;
		}
	

		// ++count；     //错误地方就在这   在这count意思是 运行一次就＋1    可是应该是输出了数字才加1

		if ((count % 5) == 0)
		{
			printf("\n");
			++s;
		}
		
	}
	printf("%d", s);
}

