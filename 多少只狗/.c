#include<stdio.h>
int main(void)
{
	int dogs;

	printf("How dogs do you have?\n");
	scanf_s("%d", &dogs);

	printf("So you have %d dogs\n ", dogs);

	return 0;
}