#include<stdio.h>

int main(void)
{
	int ascll;
	printf("Please write a ASCII;");
	scanf_s("%d", &ascll);//这个不要初始化？
		printf("Yes, %d a good ASCII %c", ascll, ascll);
	return 0;
}