#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <string.h>
#include <windows.h>

// 定义链表节点结构体
typedef struct ListNode {
    int val;
    struct ListNode* next;
} ListNode;

// 1. 建立单链表（头插法，不带头结点）
ListNode* createListHeadInsertNoHead(ListNode* head, int data) {
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    if (newNode == NULL) {
        printf("内存分配失败，程序即将退出！\n");
        exit(EXIT_FAILURE);
    }

    newNode->val = data;
    newNode->next = head;
    return newNode;
}

// 2. 建立单链表（头插法，带头结点）
ListNode* createListHeadInsertWithHead(ListNode* head, int data) {
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->val = data;
    newNode->next = head->next;
    head->next = newNode;
    return head;
}

// 3. 建立单链表（尾插法，不带头结点）
ListNode* createListTailInsertNoHead(ListNode* head, int data) {
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->val = data;
    newNode->next = NULL;
    if (head == NULL) {
        return newNode;
    }
    ListNode* cur = head;
    while (cur->next != NULL) {
        cur = cur->next;
    }
    cur->next = newNode;
    return head;
}

// 4. 建立单链表（尾插法，带头结点）
ListNode* createListTailInsertWithHead(ListNode* head, int data) {
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->val = data;
    newNode->next = NULL;
    if (head == NULL) {
        head = (ListNode*)malloc(sizeof(ListNode));
        head->next = NULL;
    }
    ListNode* cur = head;
    while (cur->next != NULL) {
        cur = cur->next;
    }
    cur->next = newNode;
    return head;
}

// 5. 逆置单链表
ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* cur = head;
    while (cur != NULL) {
        ListNode* nextTemp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nextTemp;
    }
    return prev;
}

// 6. 有序链表插入
ListNode* insertIntoSortedList(ListNode* head, int val) {
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->val = val;
    newNode->next = NULL;
    if (head == NULL) {
        return newNode;
    }
    if (val < head->val) {
        newNode->next = head;
        return newNode;
    }
    ListNode* cur = head;
    while (cur->next != NULL && cur->next->val < val) {
        cur = cur->next;
    }
    newNode->next = cur->next;
    cur->next = newNode;
    return head;
}

// 7. 有序链表删除重复元素
ListNode* removeDuplicatesFromSortedList(ListNode* head) {
    if (head == NULL) {
        return head;
    }
    ListNode* cur = head;
    while (cur->next != NULL) {
        if (cur->val == cur->next->val) {
            ListNode* temp = cur->next;
            cur->next = cur->next->next;
            free(temp);
        }
        else {
            cur = cur->next;
        }
    }
    return head;
}

// 8. 无序链表删除重复元素
ListNode* removeDuplicatesFromUnsortedList(ListNode* head) {
    if (head == NULL) {
        return head;
    }
    ListNode* ptr = head;
    while (ptr != NULL) {
        ListNode* runner = ptr;
        while (runner->next != NULL) {
            if (runner->next->val == ptr->val) {
                ListNode* temp = runner->next;
                runner->next = runner->next->next;
                free(temp);
            }
            else {
                runner = runner->next;
            }
        }
        ptr = ptr->next;
    }
    return head;
}

// 9. 两链表合并并排序（优化后）
ListNode* mergeAndSortTwoLists(ListNode* l1, ListNode* l2) {
    // 处理两个链表都为空的情况
    if (l1 == NULL && l2 == NULL) {
        return NULL;
    }
    // 处理其中一个链表为空的情况，直接返回另一个链表
    if (l1 == NULL) {
        return l2;
    }
    if (l2 == NULL) {
        return l1;
    }

    ListNode* dummy = (ListNode*)malloc(sizeof(ListNode));
    dummy->next = NULL;
    ListNode* cur = dummy;
    // 合并两个链表，考虑相等情况，保证顺序且不丢失相等值节点
    while (l1 != NULL && l2 != NULL) {
        if (l1->val <= l2->val) {
            cur->next = l1;
            l1 = l1->next;
        }
        else {
            cur->next = l2;
            l2 = l2->next;
        }
        cur = cur->next;
    }
    // 链接剩余未遍历完的链表部分
    if (l1 != NULL) {
        cur->next = l1;
    }
    if (l2 != NULL) {
        cur->next = l2;
    }
    ListNode* mergedList = dummy->next;
    free(dummy);  // 释放虚拟头结点内存
    return mergedList;
}

// 10. 两链表并集
ListNode* unionOfTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* result = NULL;
    ListNode* ptr1 = l1;
    ListNode* ptr2 = l2;
    while (ptr1 != NULL) {
        result = createListTailInsertNoHead(result, ptr1->val);
        ptr1 = ptr1->next;
    }
    while (ptr2 != NULL) {
        result = createListTailInsertNoHead(result, ptr2->val);
        ptr2 = ptr2->next;
    }
    result = removeDuplicatesFromUnsortedList(result);
    return result;
}

// 打印链表函数
void printList(ListNode* head) {
    ListNode* cur = head;
    while (cur != NULL) {
        printf("%d ", cur->val);
        cur = cur->next;
    }
    printf("\n");
}

// 菜单显示函数
void displayMenu() {
    printf("********************************************************\n");
    printf("*********1. 建立单链表（头插法，不带头结点）************\n");
    printf("*********2. 建立单链表（头插法，带头结点）  ************\n");
    printf("*********3. 建立单链表（尾插法，不带头结点）************\n");
    printf("*********4. 建立单链表（尾插法，带头结点）  ************\n");
    printf("*********5. 逆置单链表                      ************\n");
    printf("*********6. 有序链表插入                    ************\n");
    printf("*********7. 有序链表删除重复元素            ************\n");
    printf("*********8. 无序链表删除重复元素            ************\n");
    printf("*********9. 两链表合并（不带头结点的）      ************\n");
    printf("*********10. 两链表并集（不带头结点的）     ************\n");
    printf("*********0. 退出                            ************\n");
    printf("********************************************************\n");
}

// 释放单链表内存
void freeList(ListNode* head) {
    ListNode* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

// 密码系统
bool password() {
    char pin[20] = "123456";
    char password[11] = { 0 };
    char ch;
    int flag = 0;
    for (int i2 = 0; i2 < 3; i2++) {
        printf("请输入用户密码(您还有%d次机会): ", 3 - i2);
        flag = 0;
        while ((ch = getch()) != '\r') {
            if (ch == '\b' && flag != 0) {
                printf("\b \b");
                flag--;
                password[flag] = '\0';
            }
            if (ch != '\b' && flag < 10) {
                password[flag] = ch;
                flag++;
                printf("*");
            }
            password[flag] = '\0';
        }
        if (strcmp(pin, password) == 0) {
            printf("\n验证成功，欢迎使用链表综合运用系统！\n");
            Sleep(1000);
            system("CLS");
            return true;
        }
        else {
            printf("\n用户密码错误,验证失败！\n");
            Sleep(500);
            system("CLS");
        }
    }
    return false;
}


int main() {
    //用于单链
    ListNode* list1 = NULL;
    ListNode* list3 = NULL;
    ListNode* list4 = NULL;
    ListNode* list2 = NULL;

    //用于双链
    ListNode* list5 = NULL;
    ListNode* list6 = NULL;

    int choice;
    int data;

   //if (!password()) {
   //     printf("密码验证失败，程序退出！\n");
   //     return 1;
   // }

    do {
        displayMenu();
        printf("请输入你的选择: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("请输入要插入的数据（输入 -1 结束）: ");
            scanf("%d", &data);
            while (data != -1) {
                list1 = createListHeadInsertNoHead(list1, data);
                scanf("%d", &data);
            }
            printf("头插法（不带头结点）建立的链表: ");
            printList(list1);
            break;
        case 2:
            list2 = (ListNode*)malloc(sizeof(ListNode));
            list2->next = NULL;
            printf("请输入要插入的数据（输入 -1 结束）: ");
            scanf("%d", &data);
            while (data != -1) {
                list2 = createListHeadInsertWithHead(list2, data);
                scanf("%d", &data);
            }
            printf("头插法（带头结点）建立的链表: ");
            printList(list2->next);
            break;
        case 3:
            printf("请输入要插入的数据（输入 -1 结束）: ");
            scanf("%d", &data);
            while (data != -1) {
                list3 = createListTailInsertNoHead(list3, data);
                scanf("%d", &data);
            }
            printf("尾插法（不带头结点）建立的链表: ");
            printList(list3);
            break;
        case 4:
            list4 = (ListNode*)malloc(sizeof(ListNode));
            list4->next = NULL;
            printf("请输入要插入的数据（输入 -1 结束）: ");
            scanf("%d", &data);
            while (data != -1) {
                list4 = createListTailInsertWithHead(list4, data);
                scanf("%d", &data);
            }
            printf("尾插法（带头结点）建立的链表: ");
            printList(list4->next);
            break;
        case 5:
            list1 = reverseList(list1);
            printf("逆置后的链表: ");
            printList(list1);
            break;
        case 6:
            printf("请输入要插入的值: ");
            scanf("%d", &data);
            list1 = insertIntoSortedList(list1, data);
            printf("有序链表插入后的链表: ");
            printList(list1);
            break;
        case 7:
            list1 = removeDuplicatesFromSortedList(list1);
            printf("有序链表删除重复元素后的链表: ");
            printList(list1);
            break;
        case 8:
            list1 = removeDuplicatesFromUnsortedList(list1);
            printf("无序链表删除重复元素后的链表: ");
            printList(list1);
            break;
        case 9:
            list5 = mergeAndSortTwoLists(list1, list3);
            printf("两链表合并并排序后的链表: ");
            printList(list5);
            break;
        case 10:
            list6 = unionOfTwoLists(list1, list3);
            printf("两链表并集后的链表: ");
            printList(list6);
            break;
        case 0:
            printf("退出程序\n");
            break;
        default:
            printf("无此选项，请重新输入\n");
        }
    } while (choice != 0);

    // 释放链表内存
    freeList(list1);
    freeList(list2);
    freeList(list3);
    freeList(list4);
    freeList(list5);
    freeList(list6);

    return 0;
}