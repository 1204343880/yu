#include<stdio.h>

void br(void);
void ic(void);
int main()
{
	br();
	ic();
	printf("India,china\nBrazil,Russia");
}

void br()
{
	printf("Brazil,Russia,");
}
void ic()
{
	printf("India,china\n");
}