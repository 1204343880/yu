#include<stdio.h>

int main(void)
{
	int x = 100;

	printf("dec=%d;octal=%o;hex=%x\n", x, x, x);     //16进制是%x      8进制是%o  
	printf("dec=%d;octal=%#o;hex=%#x\n", x, x, x);
	return 0;
}



//详见于P40