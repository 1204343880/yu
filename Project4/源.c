#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include <stdio.h>
#include <stdlib.h>


void printList(ListNode* head) {
    ListNode* current = head;
    while (current != NULL) {
        printf("%d ", current->val);
        current = current->next;
    }
    printf("\n");
}

void freeList(ListNode* head) {
    ListNode* current = head;
    while (current != NULL) {
        ListNode* next = current->next;
        free(current);
        current = next;
    }
}

ListNode* createList() {
    ListNode* head = NULL;
    ListNode* tail = NULL;
    int val;
    scanf("%d", &val);
    while (val != -1) {
        ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
        newNode->val = val;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
        scanf("%d", &val);
    }
    return head;
}

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    // 创建一个虚拟头节点
    ListNode* dummy = (ListNode*)malloc(sizeof(ListNode));
    ListNode* cur = dummy;
    while (l1 != NULL && l2 != NULL) {
        if (l1->val < l2->val) {
            cur->next = l1;
            l1 = l1->next;
        }
        else {
            cur->next = l2;
            l2 = l2->next;
        }
        cur = cur->next;
    }
    // 将剩余的节点连接到合并后的链表后面
    if (l1 != NULL) {
        cur->next = l1;
    }
    if (l2 != NULL) {
        cur->next = l2;
    }
    return dummy->next;
}

typedef struct ListNode {
    int val;
    struct ListNode* next;
} ListNode;

int main() 
{
    ListNode* list1 = NULL;
    ListNode* list2 = NULL;

    printf("请输入第一个有序链表的数据（以-1表示结束）：\n");
    ListNode* list1 = createList();
    printf("请输入第二个有序链表的数据（以-1表示结束）：\n");
    ListNode* list2 = createList();

    ListNode* mergedList = mergeTwoLists(list1, list2);

    printf("合并并排序后的链表为：\n");
    printList(mergedList);

    freeList(list1);
    freeList(list2);
    freeList(mergedList);

    return 0;
}