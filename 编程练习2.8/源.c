#include<stdio.h>

void one_three();   //老是忘记这个 烦死了 多个函数的引用格式
void two();

int main()    //实质还是多个函数的调用
{
	printf("starting now:\n");
	one_three();
	two();
	printf("three\n");
	printf("done!\n");

	return 0;
}
void one_three()
{
	printf("one\n");
}
void two()
{
	printf("two\n");
}
