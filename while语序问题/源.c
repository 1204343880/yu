#include<stdio.h>

int main()
{
	int index, sam;
	index = 0;
	while (index++ < 10)
		sam = 10 * index + 2;
		printf("sam = %d\n", sam);
return 0;
//                                               不加双引号只有最后结果    有的话每次都出来才会循环显示
}