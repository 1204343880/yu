#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)


#include"system.h"
//信息管理系统相关的实现

//动态版本
int Initsystem(MIS* pc)
{
	pc->count = 0;//通讯录初始人数
	pc->data = (Peoinfo*)calloc(DEFAULT_SZ, sizeof(Peoinfo));//申请一块初始化的空间（大小为DEFAULT_SZ）
	if (pc->data == NULL)
	{
		perror("InitContact");//没有开辟成功，结束程序
		exit(0);
	}
	pc->capacity = DEFAULT_SZ;//申请完成后，将通讯录容量赋值为初始大小
}
//静态版本

//void Addsystem(MIS* pc)
//{
//	assert(pc);
//	if (pc->count == 100)
//	{
//		printf("通讯录已满，无法添加新的人的信息");
//	}
//	else
//	{
//		printf("请输入姓名:> ");                                                                                                 
//
//
//																																					
//		scanf("%s", (pc->data[pc->count]).name);                                                                                  
//
//		printf("请输入学号:> ");
//		scanf("%s", (pc->data[pc->count]).sno);                                                                                       
//		printf("请输入英语成绩:> ");                                                                                                          
//		scanf("%d", &(pc->data[pc->count]).eng);
//		printf("请输入数学成绩:> ");
//		scanf("%d", &(pc->data[pc->count]).math);
//		printf("请输入专业课成绩:> ");
//		scanf("%d", &(pc->data[pc->count]).pro);
//		//计算总分
//
//		(pc->data[pc->count]).sum = (pc->data[pc->count]).eng + (pc->data[pc->count]).math + (pc->data[pc->count]).pro;
//		(pc->count)++;
//	}
//}

void Checksystem(MIS* pc)
{
	//增容
	if (pc->count == pc->capacity)
	{
		Peoinfo* ptr = (Peoinfo*)realloc(pc->data, sizeof(Peoinfo) * (pc->capacity + INC_SZ));//增加容量
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

//动态版本
void Addsystem(MIS* pc)
{
	assert(pc);
	   Checksystem(pc);

		printf("请输入姓名:> ");
		scanf("%s", pc->data[pc->count].name);
		printf("请输入学号:> ");
		scanf("%s", pc->data[pc->count].sno);
		printf("请输入英语成绩:> ");
		scanf("%d", &(pc->data[pc->count]).eng);
		printf("请输入数学成绩:> ");
		scanf("%d", &(pc->data[pc->count]).math);
		printf("请输入专业课成绩:> ");
		scanf("%d", &(pc->data[pc->count]).pro);
		//计算总分
		(pc->data[pc->count]).sum = (pc->data[pc->count]).eng + (pc->data[pc->count]).math + (pc->data[pc->count]).pro;
		(pc->count)++;

}




void Delsystem(MIS* pc)
{
                                                                   
	if (pc->count == 0)
	{
		printf("通讯录还未添加一个人，无法删除人的信息\n");
	}
	else
	{
		char findsno2[15] = { 0 };
		printf("请输入要删除的人的学号:>");
		scanf("%s", findsno2);

		int a = Findbysno2(pc, findsno2);

		if (a == -1)
		{
			printf("此人不存在，无法删除\n");
		}

		else
		{
			//开始删除
			for (int i2 = a; i2 < pc->count - 1; i2++)
			{
	

				pc->data[i2] = pc->data[i2 + 1];
			}
			pc->count--;
			printf("删除成功\n");
		}

	}
}


static int Findbysno2(MIS* pc, char findsno2[])
{
	int i1 = 0;
	for (i1 = 0; i1 < pc->count; i1++)
	{
		if (0 == strcmp(pc->data[i1].sno, findsno2))
		{
			return i1;
		}

	}


	return -1;
}

void Findbysno1(MIS* pc)
{
	char findsno[15] = { 0 };

	if (pc->count == 0)
	{
		printf("这个程序还一个人的信息都没有\n");
	}

	else
		printf("请输入学号:>");                                                                                                                                
	for (int i1 = 0; i1 < pc->count; i1++)
	{
		//如果成立则返回0（strcmp函数）
		if (0 == strcmp(pc->data[i1].sno, findsno))                                                                                                                 
		{                                                                                                                                                                             
			printf("%20s", "姓名");
			printf("%15s", "学号");
			printf("%15s", "英语成绩");
			printf("%15s", "数学成绩");
			printf("%15s", "专业课成绩");
			printf("%15s\n", "总分");

			printf("%20s", pc->data[i1].name);
			printf("%15s", pc->data[i1].sno);
			printf("%15d", pc->data[i1].eng);
			printf("%15d", pc->data[i1].math);
			printf("%15d", pc->data[i1].pro);
			printf("%15d\n", pc->data[i1].sum);
			break;
		}

		if (i1 == pc->count - 1)
			printf("此人不存在，无法查找信息\n");

	}
}



void Modifysystem(MIS* pc)
{
	void menu3();

	char xuan[20] = { 0 };
	printf("请输入要改人的学号:>");
	scanf("%s", xuan);

	int linshi = Findbysno2(pc, xuan);

	if (linshi == -1)
	{
		printf("此人不存在，无法修改\n");
	}

	else
	{
		int a = 0;
		printf("如果只改个别信息请输入：1，如果全改请输入：2\n");
		scanf("%d", &a);

		if (a == 1)
		{
			menu3();
			int b = 0;
			scanf("%d", &b);

			switch (b)
			{
			case 1:
				printf("请输入姓名：");
				scanf("%s", pc->data[linshi].name);
				printf("修改成功\n");
				break;
			case 2:
				printf("请输入学号：");
				scanf("%s", pc->data[linshi].sno);
				printf("修改成功\n");
				break;
			case 3:
				printf("请输入英语成绩：");
				scanf("%d", &pc->data[linshi].eng);
				printf("修改成功\n");
				break;
			case 4:
				printf("请输入数学成绩：");
				scanf("%d", &pc->data[linshi].math);
				printf("修改成功");
				break;
			case 5:
				printf("请输入专业课成绩：");
				scanf("%d", &pc->data[linshi].pro);
				printf("修改成功\n");
				break;
			case 6:
				printf("请输入总分：");
				scanf("%d", &pc->data[linshi].sum);
				printf("修改成功");
				break;
			default:
				printf("输入无效选择，已退出！\n");
				break;
			}

		}
		else if (a == 2)
		{

			printf("请输入姓名：");
			scanf("%s", pc->data[linshi].name);
			printf("\n");
			printf("请输入学号：");
			scanf("%s", pc->data[linshi].sno);
			printf("\n");
			printf("请输入英语成绩：");
			scanf("%d", &pc->data[linshi].eng);
			printf("\n");
			printf("请输入数学成绩：");
			scanf("%d", &pc->data[linshi].math);
			printf("\n");
			printf("请输入专业课成绩：");
			scanf("%d", &pc->data[linshi].pro);
			printf("\n");
		}
		else
		{
			printf("输入错误选项，已退出更改程序！");
		}
	}
}

void menu3()
{
	printf("***************************************************************************************************\n");
	printf("***************************************************************************************************\n");
	printf("******                                        请选择：                                      *******\n");
	printf("******                1.修改姓名                                     2.修改学号             *******\n");
	printf("******                                                                                      *******\n");
	printf("******                3.修改英语成绩                      4.修改数学成绩                    *******\n");
	printf("******                                                                                      *******\n");
	printf("******                5.修改专业课成绩                      6.修改总分                      *******\n");
	printf("******                                                                                      *******\n");
	printf("***************************************************************************************************\n");
	printf("***************************************************************************************************\n");
}


int cmp_by_sno(const void* e1, const void* e2)
{
	return strcmp(((Peoinfo*)e1)->name, ((Peoinfo*)e2)->name);
}



void	Sortsystem(MIS* pc)
{
	//此处用到qsort函数 排序

	qsort(pc->data, pc->count, sizeof(Peoinfo), cmp_by_sno);
	printf("排序成功\n");
}



void Showsystem(MIS* pc)
{


	printf("%20s", "姓名");
	printf("%15s", "学号");
	printf("%15s", "英语成绩");
	printf("%15s", "数学成绩");
	printf("%15s", "专业课成绩");
	printf("%15s\n", "总分");

	for (int i = 0; i < pc->count; i++)
	{


		printf("%20s", pc->data[i].name);                                                                  
		printf("%15s", pc->data[i].sno);                                                                      
		printf("%15d", pc->data[i].eng);
		printf("%15d", pc->data[i].math);
		printf("%15d", pc->data[i].pro);
		printf("%15d\n", pc->data[i].sum);
	}
}

void Savesystem(const MIS* pc)
{
	//断言保证程序的有效性
	assert(pc);

	FILE* pfwrite = fopen("contact.txt", "wb");
	if (pfwrite == NULL)
	{
		perror ("SaveContact");
	}

	//写文件-二进制形式写
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		fwrite(pc->data+i, sizeof(Peoinfo), 1, pfwrite);
	}

	fclose(pfwrite);
	pfwrite = NULL;
}

