#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include <stdio.h>
#include <stdlib.h>

// 链表节点结构定义
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// 函数声明
void showMenu();
Node* createNode(int value);
void printList(Node* head);
void freeList(Node* head);
Node* createListHeadWithoutDummy();
Node* createListHeadWithDummy();
Node* createListTailWithoutDummy();
Node* createListTailWithDummy();
void reverseList(Node** head);
void insertSorted(Node** head, int value);
void removeDuplicatesSorted(Node* head);
void removeDuplicatesUnsorted(Node* head);
Node* mergeSortedLists(Node* list1, Node* list2);
Node* unionLists(Node* list1, Node* list2);

// 创建新节点
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("内存分配失败！\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// 打印链表
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// 释放表内存
void freeList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
}

// 头插法创建链表（不带头结点）
Node* createListHeadWithoutDummy() {
    Node* head = NULL;
    int value;
    printf("请输入数据（输入-1结束）：");
    while (1) {
        scanf("%d", &value);
        if (value == -1) break;
        Node* newNode = createNode(value);
        newNode->next = head;
        head = newNode;
    }
    return head;
}

// 头插法创建链表（带头结点）
Node* createListHeadWithDummy() {
    Node* dummy = createNode(0);  // 头结点
    int value;
    printf("请输入数据（输入-1结束）：");
    while (1) {
        scanf("%d", &value);
        if (value == -1) break;
        Node* newNode = createNode(value);
        newNode->next = dummy->next;
        dummy->next = newNode;
    }
    return dummy;
}

// 尾插法创建链表（不带头结点）
Node* createListTailWithoutDummy() {
    Node* head = NULL;
    Node* tail = NULL;
    int value;
    printf("请输入数据（输入-1结束）：");
    while (1) {
        scanf("%d", &value);
        if (value == -1) break;
        Node* newNode = createNode(value);
        if (head == NULL) {
            head = newNode;
        }
        else {
            tail->next = newNode;
        }
        tail = newNode;
    }
    return head;
}

// 尾插法创建链表（带头结点）
Node* createListTailWithDummy() {
    Node* dummy = createNode(0);
    Node* tail = dummy;
    int value;
    printf("请输入数据（输入-1结束）：");
    while (1) {
        scanf("%d", &value);
        if (value == -1) break;
        Node* newNode = createNode(value);
        tail->next = newNode;
        tail = newNode;
    }
    return dummy;
}

// 逆置链表
void reverseList(Node** head) {
    Node* prev = NULL, * current = *head, * next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

// 有序链表插入（升序）
void insertSorted(Node** head, int value) {
    Node* newNode = createNode(value);
    // 如果链表为空或新值小于头节点，插入到开头
    if (*head == NULL || (*head)->data >= value) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    // 找到合适的插入位置（保持升序）
    Node* current = *head;
    while (current->next != NULL && current->next->data < value) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
}

// 有序链表删除重复元素
void removeDuplicatesSorted(Node* head) {
    if (head == NULL) return;
    Node* current = head;
    while (current->next != NULL) {
        if (current->data == current->next->data) {
            Node* temp = current->next;
            current->next = current->next->next;
            free(temp);
        }
        else {
            current = current->next;
        }
    }
}

// 无序链表删除重复元素
void removeDuplicatesUnsorted(Node* head) {
    if (head == NULL) return;
    Node* current = head;
    while (current != NULL) {
        Node* runner = current;
        while (runner->next != NULL) {
            if (runner->next->data == current->data) {
                Node* temp = runner->next;
                runner->next = runner->next->next;
                free(temp);
            }
            else {
                runner = runner->next;
            }
        }
        current = current->next;
    }
}

// 合并两个链表（这里处理无序链表情况，合并后进行排序）
Node* mergeSortedLists(Node* list1, Node* list2) {
    // 先合并两个链表
    Node* mergedList = NULL;
    Node* tail = NULL;

    // 把list1的节点添加到合并链表
    Node* current1 = list1;
    while (current1 != NULL) {
        Node* newNode = createNode(current1->data);
        if (mergedList == NULL) {
            mergedList = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
        current1 = current1->next;
    }

    // 把list2的节点添加到合并链表
    Node* current2 = list2;
    while (current2 != NULL) {
        Node* newNode = createNode(current2->data);
        if (mergedList == NULL) {
            mergedList = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
        current2 = current2->next;
    }

    // 对合并后的链表进行冒泡排序（升序）
    Node* ptr;
    int swapped;
    Node* last = NULL;
    do {
        swapped = 0;
        ptr = mergedList;
        while (ptr->next != last) {
            if (ptr->data > ptr->next->data) {
                // 交换节点的数据
                int temp = ptr->data;
                ptr->data = ptr->next->data;
                ptr->next->data = temp;
                swapped = 1;
            }
            ptr = ptr->next;
        }
        last = ptr;
    } while (swapped);

    return mergedList;
}

// 两个链表的并集（结果为升序）
Node* unionLists(Node* list1, Node* list2) {
    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;

    Node* result = list1;
    while (list2 != NULL) {
        int value = list2->data;
        Node* current = list1;
        int exists = 0;

        // 检查是否存在
        while (current != NULL) {
            if (current->data == value) {
                exists = 1;
                break;
            }
            current = current->next;
        }

        // 如果不存在则插入（保持升序）
        if (!exists) {
            insertSorted(&result, value);
        }
        list2 = list2->next;
    }
    return result;
}

void showMenu() {
    printf("\n=== 链表操作菜单 ===\n");
    printf("1. 建立单链表（头插法，不带头结点）\n");
    printf("2. 建立单链表（头插法，带头结点）\n");
    printf("3. 建立单链表（尾插法，不带头结点）\n");
    printf("4. 建立单链表（尾插法，带头结点）\n");
    printf("5. 逆置单链表\n");
    printf("6. 有序链表插入\n");
    printf("7. 有序链表删除重复元素\n");
    printf("8. 无序链表删除重复元素\n");
    printf("9. 两链表合并并排序\n");
    printf("10. 两链表并集\n");
    printf("0. 退出程序\n");
    printf("请选择操作（0-10）：");
}

int main() {
    Node* list1 = NULL;
    Node* list2 = NULL;
    int choice, value;

    while (1) {
        showMenu();
        scanf("%d", &choice);

        switch (choice) {
        case 0:
            printf("程序已退出\n");
            freeList(list1);
            freeList(list2);
            printf("\n按任意键退出...");
            getchar();
            getchar();
            return 0;

        case 1:
            list1 = createListHeadWithoutDummy();
            printf("创建的链表：");
            printList(list1);
            break;

        case 2:
            list1 = createListHeadWithDummy();
            printf("创建的链表（带头结点）：");
            printList(list1->next);
            break;

        case 3:
            list1 = createListTailWithoutDummy();
            printf("创建的链表：");
            printList(list1);
            break;

        case 4:
            list1 = createListTailWithDummy();
            printf("创建的链表（带头结点）：");
            printList(list1->next);
            break;

        case 5:
            reverseList(&list1);
            printf("逆置后的链表：");
            printList(list1);
            break;

        case 6:
            printf("请输入要插入的值：");
            scanf("%d", &value);
            insertSorted(&list1, value);
            printf("插入后的链表：");
            printList(list1);
            break;

        case 7:
            removeDuplicatesSorted(list1);
            printf("删除重复元素后的有序链表：");
            printList(list1);
            break;

        case 8:
            removeDuplicatesUnsorted(list1);
            printf("删除重复元素后的无序链表：");
            printList(list1);
            break;

        case 9:
            printf("创建第二个链表：\n");
            list2 = createListTailWithoutDummy();
            list1 = mergeSortedLists(list1, list2);
            printf("合并排序后的链表：");
            printList(list1);
            list2 = NULL;
            break;

        case 10:
            printf("创建第二个链表：\n");
            list2 = createListTailWithoutDummy();
            list1 = unionLists(list1, list2);
            printf("两个链表的并集：");
            printList(list1);
            freeList(list2);
            list2 = NULL;
            break;

        default:
            printf("无效的选择，请重试\n");
        }
    }

    return 0;
}