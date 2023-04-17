#include<stdio.h>

int main()
{
int count = 0;
int s = 0;
for (int i = 1; i < 100; i++)
{
	if ((i % 2) == 0)
	{
		continue;
		printf("%-4d", i);
		++count;
	}


	if ((count % 5) == 0)
	{
		printf("\n");
		++s;
	}

}
printf("%d", s);
}

