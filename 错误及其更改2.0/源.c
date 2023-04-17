#include<stdio.h>

int main(void)
{
	int n = 5;
	int n2;
	int n3;                           //n3是n的3次方是默认还是定义的

	n2 = n * n;
	n3 = n2 * n2;

	printf("n=%d,n squared=%d,n cubed=%d\n", n, n2, n3);

	return 0;
}