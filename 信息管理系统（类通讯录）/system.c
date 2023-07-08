#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include"system.h"
//信息管理系统相关的实现

                                                                                                                       //没怎么用过assert细节还是不到位，不仔细

void Initsystem(MIS* pc)
{
	assert(pc);                                                                                                                                            //如果为空指针后面就危险了，后面就不能解引用了，目前来讲完全不会
	                                                                                                                                                           //这个地方为什么这样用
	pc->count= 0;                                                                                                                                //具体怎么用呢？     memset(让其改变的大小位置，改成什么，多大（单位是字节）)
	memset(pc->data, 0, sizeof(pc->data));                                                                                            //设置一大块内存让他初始化 ,直接data就是整个数组的大小让他为0了，6
	//此处如果不用memset就得写个大循环来实现
}


void Addsystem(MIS* pc)
{
	assert(pc);
	//此处没想到满没满
	if (pc->count == 100)
	{
		printf("通讯录已满，无法添加新的人的信息");
	}
	else
	{
		printf("请输入姓名:> ");                                                                                                                       //此处可以用max这种宏定义，方便日后修改（专业名词怎么说？）
	                                                                                                                                                             	//看来我这个指向也有理解什么意思

		//小小的地方却有大大的细节，那种层次感，逻辑性就是自己要学习的

		//我自己最开始写的是     &pc->data.name 这种相似体 
		                                                                                                                                                         //name不用数组形式的吗？     步涌取地址解引用的吗
		scanf("%s", (pc->data[pc->count]).name);                                                                                       //name是数组 不用取地址 但是不用data 【】了吗？    怎么感觉似曾相识，但又不会了

		//就这个地方对count 和 它里面对应的关系不够清楚
		printf("请输入学号:> ");
		scanf("%s", (pc->data[pc->count]).sno);                                                                                          //整形数组还是用%d     若用了%s会怎么样     可以用%s 网课上就是这样的，
		printf("请输入英语成绩:> ");                                                                                                              //but我又sb了事实证明不能这样用，网课那个是char类型数组，只不过里面存的数字
		scanf("%d", &(pc->data[pc->count]).eng);   
		printf("请输入数学成绩:> ");
		scanf("%d", &(pc->data[pc->count]).math);
		printf("请输入专业课成绩:> ");
		scanf("%d", &(pc->data[pc->count]).pro);
		//计算总分

		(pc->data[pc->count]).sum = (pc->data[pc->count]).eng + (pc->data[pc->count]).math + (pc->data[pc->count]).pro;

		//别忘加1,因为你已经输入一个人信息了
		(pc->count)++;
	}
}



//复制不要再看不见函数后面的；了
	void Delsystem(MIS* pc)
{
	//如果你想删除就要先查找到这个人的信息
	//所以需要先写查找函数，所以相当于先写功能3                                                                                               //我自己写肯定忽略的点就是：不让别人看到find这个函数怎么实现来着
	if (pc->count == 0)
	{
		printf("通讯录还未添加一个人，无法删除人的信息");
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
			//说是删除实则是覆盖

			//所以可以由for (int i2 = a; i2 < pc->count; i2++)       //为什么呢，我不能理解，emmmm    理解错了一直以为data[i] i = count 但实际不是 i +1  =count
			//改成：
			for (int i2 = a; i2 < pc->count-1; i2++)
			{
				//此处不需要那么傻乎乎，直接 pc->data来交换就行了 ，直接覆盖结构体
				//而且我还覆盖犯反了，真的谢
	     /*			pc->data[i2 + 1].name = pc->data[i2].name;
			     	pc->data[i2+1].sno = pc->data[i2].sno;
				   pc->data[i2+1].eng = pc->data[i2].eng;
				   pc->data[i2].math = pc->data[i2].math;
				  pc->data[i2+1].pro = pc->data[i2].pro;
				  pc->data[i2+1].sum = pc->data[i2].sum;*/

				/*就算写成这样也是有一定问题的，
				for (int i2 = a; i2 < pc->count; i2++) {pc->data[i2] = pc->data[i2 + 1];}      
				因为当删除最后一个（第100个）时，后面没有，没法覆盖

				解决方法：count--，有没有反正都读不到了
				*/

				pc->data[i2] = pc->data[i2 + 1];
			}
			pc->count--;
			printf("删除成功\n");
		}

	}

																                                                                                //就是查找我也写的不一定好，网课教的是名字查找，我要用学号查找，防止重复

	//没有考虑全，如果没有人不能删，跟那个添加人满时候一样，不够细节
}



	//del部分能用的查找函数
	//立刻写一个2来实现


	//我真要脑血栓了，居然真的是因为少一个大括号，当时没细看的地方，真的谢
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

		//md 知道问题所在了 不应该写个else{ return -1 }，如果第一次查找就没找到，直接返回-1了
		return -1;
	}
//如果按照这个写，则返回函数是写的很拉的，功能单一，网课说的很细节，让查找函数返回对应下标，他才可以实现多地方都能使用

void Findbysno1(MIS* pc)
{
	char findsno[15] = { 0 };

	if (pc->count == 0)
	{
		printf("这个程序还一个人的信息都没有\n");
	}

	else
	printf("请输入学号:>");                                                                                                                                         //此处必须想一下，什么公用一个地址，什么创建一个新的堆栈区来着
	scanf("%s", findsno);
	for (int i1 = 0; i1 < pc->count; i1++)
	{
		//如果成立则返回0（strcmp函数）
		if (0==strcmp(pc->data[i1].sno, findsno))                                                                                                                    //看来在列等于的地方也出问题了，不能这样找，不能用 son！=findsno这种，数组不会自己做对比，要strcmp函数
		{                                                                                                                                                                                  //还有怎么让别的函数也能用查找函数，并且不会打印出来（我的想法是套一个函数里面写上打印）
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


			//因为如果最后一个元素时，那个条件也会满足，所以要写一个跳出程序

			//而且要用break；结束整个程序，不能用continue; 
			//为什么呢？           continue会让他＋1吗，似乎会，不然的话直接死循环了
			//这个地方之前讲过，居然还有点解不清，有罪！
			break;
		}
	
			//因为是循环，这个地方不适合这样写
			
			//此处在路上走路时突发奇想，就是跟那个判断是否是奇数那个一样

		//这个但不完全一样，它不是跳出循环后才进行    （程序：打印素数）
		if(i1 == pc->count-1)
			printf("此人不存在，无法查找信息\n");
		
	}
}



void Modifysystem(MIS* pc)
{
	//为什么要先声明一下，findbysno却不要
	void menu3();

	char xuan[20] = {0};
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
			//md,为什么啊，为什么要 void开头
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
				scanf("%d",&pc->data[linshi].eng);
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
							scanf("%d",&pc->data[linshi].math);
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
	//本以为下面错了 没想要又因为这个count没写成 pc->count

	printf("%20s", "姓名");
	printf("%15s", "学号");
	printf("%15s", "英语成绩");
	printf("%15s", "数学成绩");
	printf("%15s", "专业课成绩");
	printf("%15s\n", "总分");

	for (int i = 0; i < pc->count; i++)
	{


		printf("%20s", pc->data[i].name);                                                                   //%s可以直接打印整个数组吗？
		printf("%15s", pc->data[i].sno);                                                                      //整形数组怎么打印好一点？也能用%s来打印整个数组吗？
		printf("%15d", pc->data[i].eng);
		printf("%15d", pc->data[i].math);
		printf("%15d", pc->data[i].pro);
		printf("%15d\n", pc->data[i].sum);
	}
}