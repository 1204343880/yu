#include<stdio.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };

	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
			scanf_s("%s", password);
			if (strcmp(password, "123456") == 0)
			{
				printf("登录成功\n");
				break;
			}
	}

	if (i == 3)
	{
		printf("三次了");
	}
	return 0;
}