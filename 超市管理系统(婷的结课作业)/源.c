#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


double money = 10000;//卖家本金

//卖家
struct Seller {
	/*
	数据域
	 */
	int id;//商品编号
	char name[30];//商品名称
	double purchasingPrice;//商品进价
	double sellerPrice;//商品卖价
	int numberOfGoods;//商品数量

	/*
	指针域
	 */
	struct Seller* prev;//指向前一个节点
	struct Seller* next;//指向后一个节点
};

//买家
struct Consumer {
	/*
	数据域
	 */
	int id;
	char name[30];//商品名称
	double sellerPrice;//商品卖价
	int numberOfGoods;//商品数量【购物数量】

	/*
	指针域
	 */
	struct Consumer* prev;//指向前一个节点
	struct Consumer* next;//指向后一个节点
};

//初始化卖家链表
struct Seller* initSellerList()
{
	struct Seller* head = malloc(sizeof(struct Seller));//申请空间

	//申请成功,返回头节点
	if (head != NULL)
	{
		head->prev = head;
		head->next = head;
		return head;
	}

	return NULL;
}

//初始化买家链表
struct Consumer* initConsumerList()
{
	struct Consumer* head = malloc(sizeof(struct Consumer));//申请空间

	//申请成功,返回头节点
	if (head != NULL)
	{
		head->prev = head;
		head->next = head;
		return head;
	}

	return NULL;
}

//创建一个新节点
//商品编号id 商品名称name 商品进价purchasingPrice 商品卖价sellerPrice 商品数量numberOfGoods
struct Seller* newNode_seller(int id, char name[], double purchasingPrice, double sellerPrice, int numberOfGoods)
{

	struct Seller* newnode = malloc(sizeof(struct Seller));

	if (newnode != NULL)
	{
		newnode->id = id;//编号
		strcpy(newnode->name, name);//名称
		newnode->purchasingPrice = purchasingPrice;//进价	
		newnode->sellerPrice = sellerPrice;//卖价
		newnode->numberOfGoods = numberOfGoods;//商品数量

		newnode->prev = newnode;
		newnode->next = newnode;
		return newnode;
	}

	return NULL;
}

//创建一个新节点
//商品编号id 商品名称name 商品进价purchasingPrice 商品卖价sellerPrice 商品数量numberOfGoods
struct Consumer* newNode_comsumer(int id, char name[], double sellerPrice, int numberOfGoods)
{

	struct Consumer* newnode = malloc(sizeof(struct Consumer));

	if (newnode != NULL)
	{
		newnode->id = id;//编号
		strcpy(newnode->name, name);
		newnode->sellerPrice = sellerPrice;
		newnode->numberOfGoods = numberOfGoods;//商品数量

		newnode->prev = newnode;
		newnode->next = newnode;
		return newnode;
	}

	return NULL;
}

//插入节点
void insertNode_consumer(struct Consumer* head, struct Consumer* newNode)
{
	newNode->next = head;
	newNode->prev = head->prev;
	head->prev->next = newNode;
	head->prev = newNode;
}

//尾插法 找到头节点即可,在头节点之前插入节点
void insertNode_seller(struct Seller* head, struct Seller* newNode)
{
	//不需要找最后一个节点 ，最后一个节点是head->prev保存的
	newNode->next = head;//新节点的next指针指向头节点 
	newNode->prev = head->prev;//新节点的prev指针指向头节点的前一个节点 
	head->prev->next = newNode;//头节点的前一个节点的next指针指向新节点 
	head->prev = newNode;//头节点的prev指针指向新节点
}

//删除节点
struct Seller* deleteNode_seller(struct Seller* head, int n)
{
	struct Seller* p = head->next;//定义一个指针指向首节点(第一个节点) 
	while (p != head)//当节点等于头节点,说明已经遍历完整个链表了,退出循环 
	{
		if (p->id == n) //p指向的是我想删除的节点
		{
			p->prev->next = p->next;//由p节点的前一个节点的next指针指向p节点的后一个节点 
			p->next->prev = p->prev;//由p节点的后一个节点的prev指针指向p节点的前一个节点 
			return p;
		}
		p = p->next;//遍历下一个节点 
	}
	printf("没找到该商品 无法删除\n");//当遍历完整个链表,没有找到参数

	return NULL;

}

//删除节点
struct Consumer* deleteNode_consumer(struct Consumer* head, int n)
{
	struct Consumer* p = head->next;//定义一个指针指向首节点(第一个节点) 
	while (p != head)//当节点等于头节点,说明已经遍历完整个链表了,退出循环 
	{
		if (p->id == n) //p指向的是我想删除的节点
		{
			p->prev->next = p->next;//由p节点的前一个节点的next指针指向p节点的后一个节点 
			p->next->prev = p->prev;//由p节点的后一个节点的prev指针指向p节点的前一个节点 
			return p;
		}
		p = p->next;//遍历下一个节点 
	}
	printf("没找到该节点 无法删除\n");//当遍历完整个链表,没有找到参数

	return NULL;
}

//修改节点的值
void change_seller(struct Seller* head)
{

	if (head->prev == head || head->next == head)
	{
		printf("商店还没有开门,请稍等...\n");
		return;
	}

	printf("[修改]");
	int n;
	char name[30];
	double purchasingPrice, sellerPrice;
	int number;
	printf("输入你想修改的商品的编号：\n");
	scanf("%d", &n);
	//定义一个临时指针 指向头节点的下一个 头节点没值不需要打印
	struct Seller* p = head->next;
	while (p != NULL)//指向的节点不为空
	{
		if (p->id == n) //找到这个节点
		{
			printf("[修改]商品名称 商品进价 商品卖价 商品数量\n");
			scanf("%s%lf%lf%d", &name, &purchasingPrice, &sellerPrice, &number);

			//修改
			strcpy(p->name, name);//名称
			p->purchasingPrice = purchasingPrice;//进价	
			p->sellerPrice = sellerPrice;//卖价
			p->numberOfGoods = number;//商品数量

			return;

		}
		//遍历下一个节点
		p = p->next;
	}
	printf("没有找到该商品！\n");
}

//修改节点的值[消费者只能修改数量]
void change_consumer(struct Consumer* head)
{
	int numberOfGoods;

	if (head->prev == head || head->next == head)
	{
		printf("购物车还是空的~\n");
		return;
	}

	printf("[修改]");
	int n;
	int number;
	printf("输入你想修改的商品的编号：\n");
	scanf("%d", &n);
	//定义一个临时指针 指向头节点的下一个 头节点没值不需要打印
	struct Consumer* p = head->next;
	while (p != NULL)//指向的节点不为空
	{
		if (p->id == n) //找到这个节点
		{

			numberOfGoods = p->numberOfGoods;//将修改前的商品个数记下来 

			printf("[修改]商品数量\n");
			scanf("%d", &number);

			if (number < 0) {
				//商品数量确定为正数
				printf("未修改成功!商品数量不合法：%d\n", number);
				return;
			}

			//修改			
			if (number >= numberOfGoods) { //如果比原先购买的多 
				p->numberOfGoods -= (number - numberOfGoods);//商品数量
			}
			else {
				p->numberOfGoods += (number - numberOfGoods);
			}

			return;

		}
		//遍历下一个节点
		p = p->next;
	}
	printf("没有找到该商品！\n");
}

struct Seller* searchGoods(struct Seller* head, int id)
{

	if (head->prev == head || head->next == head)
	{
		printf("商店还没有开门,请稍等...\n");
		return;
	}

	struct Seller* tmp = head;

	printf("\n");

	printf("商品编号 商品名称 商品进价 商品卖价 商品数量\n");

	for (tmp = head->next; tmp != head; tmp = tmp->next)
	{
		if (tmp->id == id)
		{
			printf("|    %d    |   %s     |   %.2lf元     |    %.2lf元    |    %d个   |\n", tmp->id,
				tmp->name, tmp->purchasingPrice, tmp->sellerPrice, tmp->numberOfGoods);
			printf("\n");
			return tmp;
		}
	}
	printf("未找到商品信息\n");

	return NULL;

}

struct Seller* searchGoods_consumer(struct Seller* head, int id)
{

	if (head->prev == head || head->next == head)
	{
		printf("商店还没有开门,请稍等...\n");
		return;
	}

	struct Seller* tmp = head;

	for (tmp = head->next; tmp != head; tmp = tmp->next)
	{
		if (tmp->id == id)
		{
			return tmp;
		}
	}
	printf("未找到商品信息\n");

	return NULL;

}

bool exist_seller(struct Seller* head, int id)
{
	if (head->prev == head || head->next == head)
	{
		printf("这是一个空链表\n");
		return;
	}

	struct Seller* tmp = head;

	for (tmp = head->next; tmp != head; tmp = tmp->next)
	{
		if (tmp->id == id)
		{
			printf("\n");
			return true;
		}
	}
	printf("未找到商品信息\n");
	return false;
}

//将链表打印出来 
void showlist(struct Seller* head)
{
	struct Seller* p = head->next;//定义一个指针指向首节点(第一个节点) 
	printf("商品编号 商品名称 商品进价 商品卖价 商品数量\n");
	while (p != head)//当节点等于头节点,说明已经遍历完整个链表了,退出循环 
	{
		printf("|    %d    |   %s     |   %.2lf元     |   %.2lf元     |   %d个    |\n", p->id,
			p->name, p->purchasingPrice, p->sellerPrice, p->numberOfGoods);
		p = p->next;//遍历下一个节点 
	}
	printf("\n");
}

//将链表打印出来 
void showlist_seller(struct Seller* head)
{
	struct Seller* p = head->next;//定义一个指针指向首节点(第一个节点) 
	printf("商品编号   商品名称   商品卖价   商品数量\n");
	while (p != head)//当节点等于头节点,说明已经遍历完整个链表了,退出循环 
	{
		printf("|    %d    |   %s     |   %.2lf元     |   %d个    |\n", p->id,
			p->name, p->sellerPrice, p->numberOfGoods);
		p = p->next;//遍历下一个节点 
	}
	printf("\n");
}

//将购物车打印出来 
void showlist_consumer(struct Consumer* head)
{
	struct Consumer* p = head->next;//定义一个指针指向首节点(第一个节点) 
	printf("商品编号    商品名称    商品卖价    商品数量\n");
	while (p != head)//当节点等于头节点,说明已经遍历完整个链表了,退出循环 
	{
		printf("|    %d    |   %s     |   %.2lf元    |   %d个    |\n", p->id,
			p->name, p->sellerPrice, p->numberOfGoods);
		p = p->next;//遍历下一个节点 
	}
	printf("\n");
}

void interface()
{

	printf("+------------------------+\n");
	printf("|       <超市管理>       |\n");
	printf("|                        |\n");
	printf("|       1.管理员(卖家)   |\n");
	printf("|       2.消费者(买家)   |\n");
	printf("|       3.退出           |\n");
	printf("|                        |\n");
	printf("+------------------------+\n");

}

void interface_seller()
{

	printf("+-------------------------------+\n");
	printf("|          <管理员>             |\n");
	printf("|                               |\n");
	printf("|       1.进货                  |\n");
	printf("|       2.修改商品信息          |\n");
	printf("|       3.查询商品信息          |\n");
	printf("|       4.查询所有商品信息      |\n");
	printf("|       5.退货                  |\n");
	printf("|       6.查看盈利情况          |\n");
	printf("|       7.查看用户              |\n");
	printf("|       8.退出                  |\n");
	printf("|                               |\n");
	printf("+-------------------------------+\n");

}

void interface_consumer()
{

	printf("+-------------------------------+\n");
	printf("|           <消费者>            |\n");
	printf("|                               |\n");
	printf("|       1.查看所有商品信息      |\n");
	printf("|       2.购买                  |\n");
	printf("|       3.修改                  |\n");
	printf("|       4.查看购物车            |\n");
	printf("|       5.结账                  |\n");
	printf("|       6.退出                  |\n");
	printf("|                               |\n");
	printf("+-------------------------------+\n");

}

int main(void)
{
	struct Consumer* p;
	struct Seller* p2;
	bool flag = false;
	int choice;
	char user[6] = "admin";
	char pwd[7] = "123456";
	char account[10];
	char password[10];

	/*
		<进货商品信息>
		1.商品编号id
		2.商品名称name
		3.商品进价purchasingPrice
		4.商品卖价sellerPrice
		5.商品数量numberOfGoods]
	 */
	int id;//编号
	char name[30];
	double purchasingPrice;
	double sellerPrice;
	int numberOfGoods;


	//初始化卖家
	struct Seller* sellerHead = initSellerList();

	if (sellerHead == NULL)
	{
		printf("初始化商家失败！\n");
		return -1;
	}

	//初始化买家
	struct Consumer* consumerHead = initConsumerList();
	if (consumerHead == NULL)
	{
		printf("初始化买家失败！\n");
		return -2;
	}

	while (1)
	{
		interface();
		printf("输入选项：");
		scanf("%d", &choice);

		if (choice == 1)
		{
			//卖家
			while (1)
			{
				if (flag) {
					flag = false;
					break;//退出
				}
				printf("请输入账号:");
				scanf("%s", &account); //这个地方会导致缓存区空余？ \r似乎会存在 

				int i = 0; //实现下标检索的移动
				int flag = 0;  //用来监测是否已经输入密码
				char input = 0;
				printf("请输入密码:");

				//实现密码的输入
				while (1)
				{
					if ((input = getch()) != '\r')
					{

						if (input != '\b')
						{
							printf("*");
							password[i] = input;
							i++;
						}

						if (input == '\b' && i != 0)
						{
							i--;
							printf("\b \b");
						}
					}
					else
					{
						password[i] = '\0';
						printf("\n");
						break;
					}
				}

				//先判断账号名是否正确
				if (strcmp(account, user) == 0)
				{

					if (strcmp(password, pwd) == 0)
					{
						system("CLS");
						printf("欢迎您,管理员！\n");

						while (1)
						{
							//账号密码都输入正确





							interface_seller();

							/*
								printf("|       1.进货              |\n");
								printf("|       2.修改商品信息      |\n");
								printf("|       3.查询商品信息      |\n");
								printf("|       4.查询所有商品信息  |\n");
								printf("|       5.退货              |\n");
								printf("|       6.查看盈利情况      |\n");
								printf("|       7.查看用户          |\n");
								printf("|       8.退出              |\n");
							 */

							printf("请输入选项:"); scanf("%d", &choice);

							if (choice == 8) {
								flag = true;//表示已经进入过管理员操作界面
								break;
							}

							switch (choice) {
							case 1:
								//进货
								printf("请输入商品信息!\n");
								printf("商品编号 商品名称 商品进价 商品卖价 商品数量\n");
								scanf("%d%s%lf%lf%d", &id, &name, &purchasingPrice, &sellerPrice, &numberOfGoods);
								printf("商品信息录入完成!\n");

								struct Seller* newGoods = newNode_seller(id, name, purchasingPrice, sellerPrice, numberOfGoods);

								if (money <= 0) {
									printf("卖家资金(%d元)不足!无法进货\n", money);
									break;
								}

								if (money - (numberOfGoods * purchasingPrice) < 0) {
									printf("卖家资金(%d元)不足!进货太多\n", money);
									break;
								}

								//资金充足,完成进货
								money -= (numberOfGoods * purchasingPrice);//进货,卖家本金减少 

								insertNode_seller(sellerHead, newGoods);//添加到卖家当中

								break;
							case 2:
								//修改商品信息
								change_seller(sellerHead);
								break;
							case 3:
								//查询商品信息
								printf("输入你想查询的商品的编号:"); scanf("%d", &id);
								searchGoods(sellerHead, id);
								break;
							case 4:
								//查询所有商品信息
								showlist(sellerHead);
								break;
							case 5:
								//退货【相当于删除节点】
								printf("输入要删除的商品的编号:"); scanf("%d", &id);
								deleteNode_seller(sellerHead, id);
								break;
							case 6:
								//查看盈利情况
								printf("卖家盈利情况:%.2lf元\n", money);
								break;
							case 7:
								//查看用户
								printf("用户信息无法查看...\n");
								break;
							default:
								break;
							}
						}
					}
					else
					{
						printf("密码输入错误!\n");
						continue;
					}

				}
				else
				{
					printf("账号输入错误!\n");
					continue;
				}
			}
		}
		else if (choice == 2)
		{
			//买家
			while (1)
			{
				printf("欢迎您,消费者！\n");

				interface_consumer();

				/*
					printf("|       1.查看所有商品信息  |\n");
					printf("|       2.购买              |\n");
					printf("|       3.修改              |\n");
					printf("|       4.查看购物车        |\n");
					printf("|       5.结账              |\n");
					printf("|       6.退出              |\n");
				*/

				printf("请输入选项:"); scanf("%d", &choice);

				if (choice == 6)
				{
					break;//退出
				}

				switch (choice)
				{
				case 1:
					//查看所有商品信息
					showlist_seller(sellerHead);
					break;
				case 2:
					//购买
					printf("输入你想购买商品的编号:"); scanf("%d", &id);
					printf("输入你想购买商品的数量:"); scanf("%d", &numberOfGoods);

					//判断输入的商品编号是否存在
					if (!exist_seller(sellerHead, id)) {
						//不存在
						break;
					}

					p2 = NULL; //防止p2是野指针
					p2 = searchGoods_consumer(sellerHead, id);

					if (numberOfGoods < 0) {
						printf("购买商品的数量(%d个)小于0,不合法!\n", numberOfGoods);
						break;
					}

					//判断购买数量
					if (numberOfGoods >= p2->numberOfGoods) {
						printf("商店没有更多的%s了!\n", p2->name);
						break;
					}

					struct Consumer* newConsumerNode = newNode_comsumer(id, p2->name, p2->sellerPrice, numberOfGoods);//int id,char name[],double sellerPrice,int numberOfGoods
					insertNode_consumer(consumerHead, newConsumerNode);

					p2->numberOfGoods -= numberOfGoods;

					break;
				case 3:
					//修改
					change_consumer(consumerHead);
					break;
				case 4:
					//查看购物车
					showlist_consumer(consumerHead);
					break;
				case 5:
					//结账
					//卖家本金增加

					p = consumerHead->next;//定义一个指针指向首节点(第一个节点) 

					while (p != consumerHead)//当节点等于头节点,说明已经遍历完整个链表了,退出循环 
					{
						money += (p->numberOfGoods * p->sellerPrice);
						p = p->next;//遍历下一个节点 
					}

					//购物车清空
					consumerHead->prev = consumerHead;
					consumerHead->next = consumerHead;
					break;
				default:
					break;
				}
			}
		}
		else
		{
			//退出
			break;
		}
	}
	return 0;
}



