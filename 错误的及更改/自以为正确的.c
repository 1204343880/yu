#include<stdio.h>

int main(void)

{
	int n, int n2=n*n, int n3=n2*n2;                 

	printf("n=%d,n2=%d,n3=%d\n", n, n2, n3);
	return 0;
}




//错误合集（整整15个）   return没有加;           语法错误         n2 n3 无法识别改的那个int不对

//错误越改越多