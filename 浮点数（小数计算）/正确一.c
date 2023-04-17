#include <stdio.h>

int ma()
{
	printf("请分别输入身高的英尺和英寸，""如输入\"5 7\"表示五英尺7英寸:");

	int foot;
	int inch;

	scanf_s("%d %d", &foot, &inch);

	printf("身高是%f米\n",
		((foot + inch / 12.0) * 0.3048));

	return 0;

}