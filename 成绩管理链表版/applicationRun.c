#define _CRT_SECURE_NO_WARNINGS 1

#include "StudentManagementSystem.h"


void CheckCapacity(contact* pc)
{
	//增容
	if (pc->count == pc->capacity)
	{
		PoInfo* ptr = (PoInfo*)realloc(pc->data, sizeof(PoInfo) * (pc->capacity + INC_SZ));//增加容量
		if (ptr == NULL)
		{
			printf("CheckCapacity: %s", strerror(errno));
			exit(0);
		}
		else
		{
			pc->data = ptr;//将realloc申请到的空间给pc->data
			pc->capacity += INC_SZ;
			printf("增容成功！\n");
		}
	}
}

void LoadContact(contact* pc)
{
	assert(pc);
	FILE* pfRead = fopen("system.txt", "rb");
	if (pfRead == NULL)
	{
		perror("Loadsystem");
		return;
	}

	Peoinfo tmp = { 0 };


	int i = 0;
	while (fgetc(pfRead) != '\n');//将文件指针移动到表头末尾
	int leap = ftell(pfRead);//计算文件指针的偏移量
	fseek(pfRead, leap, SEEK_SET);//将文件指针后移，跳过表头，只读取数据
	while (!feof(pfRead))
	{
		CheckCapacity(pc);//将文件中的数据读取到通讯录中，首先要判断通讯录的容量是否能够放下，放不下时进行增容
		fscanf(pfRead, "%10s\t%4d\t  %6s\t%12s%20s\n", pc->data[i].name,
			&(pc->data[i].units),
			pc->data[i].QQ,
			pc->data[i].tele,
			pc->data[i].addr);
		pc->count++;//每读取一个信息，联系人增加一个
		i++;
	}

	fclose(pfRead);
	pfRead = NULL;
}


//动态版本
void InitContact(contact* pc)
{
	pc->count = 0;//通讯录初始人数
	pc->data = (PoInfo*)calloc(DEFAULT_SZ, sizeof(PoInfo));//申请一块初始化的空间（大小为DEFAULT_SZ）
	if (pc->data == NULL)
	{
		perror("InitContact");//没有开辟成功，结束程序
		exit(0);
	}
	pc->capacity = DEFAULT_SZ;//申请完成后，将通讯录容量赋值为初始大小
	LoadContact(pc);//将文件中的信息加载到通讯录中
}

//释放空间
void DestroyContact(contact* pc)
{
	free(pc->data);
	pc->data = NULL;
}



//动态版本
void AddContact(contact* pc)
{
	assert(pc);//进行断言防止pc为空指针，它的头文件为<assert.h>
	//增容
	CheckCapacity(pc);
	//写入信息
	printf("请输入姓名：>");
	scanf("%s", pc->data[pc->count].name);
	printf("请输入单位：>");
	scanf("%d", &(pc->data[pc->count].units));
	printf("请输入QQ：>");
	scanf("%s", pc->data[pc->count].QQ);
	printf("请输入电话：>");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入地址：>");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
	printf("增加成功！\n");
}
