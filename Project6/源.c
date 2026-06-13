#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include <stdio.h>
#include <stdlib.h>

// 定义链表节点结构体
typedef struct ListNode {
    int val;
    struct ListNode* next;
} ListNode;

// 1. 建立单链表（头插法，不带头结点）
ListNode* createListHeadInsertNoHead(ListNode* head, int data) {
    // 创建新节点
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->val = data;
    // 将新节点的next指针指向当前头节点（即原链表头部）
    newNode->next = head;
    // 更新头节点为新节点，使其成为新的链表头部
    return newNode;
}

// 2. 建立单链表（头插法，带头结点）
ListNode* createListHeadInsertWithHead(ListNode* head, int data) {
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->val = data;
    // 将新节点插入到头结点之后，也就是原链表第一个节点之前
    newNode->next = head->next;
    head->next = newNode;
    return head;
}

// 3. 建立单链表（尾插法，不带头结点）
ListNode* createListTailInsertNoHead(ListNode* head, int data) {
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->val = data;
    newNode->next = NULL;
    // 如果链表为空，直接返回新节点作为链表唯一的节点
    if (head == NULL) {
        return newNode;
    }
    ListNode* cur = head;
    // 遍历链表，找到当前链表的尾节点（即next指针为NULL的节点）
    while (cur->next != NULL) {
        cur = cur->next;
    }
    // 将尾节点的next指针指向新节点，把新节点添加到链表尾部
    cur->next = newNode;
    return head;
}

// 4. 建立单链表（尾插法，带头结点）
ListNode* createListTailInsertWithHead(ListNode* head, int data) {
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->val = data;
    newNode->next = NULL;
    // 如果链表为空（头节点指针为NULL），创建头节点并让其next指针为NULL
    if (head == NULL) {
        head = (ListNode*)malloc(sizeof(ListNode));
        head->next = NULL;
    }
    ListNode* cur = head;
    // 找到链表的尾节点
    while (cur->next != NULL) {
        cur = cur->next;
    }
    // 将新节点添加到尾节点之后
    cur->next = newNode;
    return head;
}

// 5. 逆置单链表
ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* cur = head;
    while (cur != NULL) {
        // 先保存当前节点的下一个节点指针
        ListNode* nextTemp = cur->next;
        // 将当前节点的next指针指向前一个节点，实现反转
        cur->next = prev;
        // 更新prev为当前节点，用于下一次循环
        prev = cur;
        // 更新cur为刚才保存的下一个节点，继续遍历
        cur = nextTemp;
    }
    return prev;
}

// 6. 有序链表插入
ListNode* insertIntoSortedList(ListNode* head, int val) {
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->val = val;
    newNode->next = NULL;
    // 如果链表为空，直接返回新节点作为链表头部
    if (head == NULL) {
        return newNode;
    }
    // 如果新节点的值小于链表头部节点的值，将新节点插入到头部
    if (val < head->val) {
        newNode->next = head;
        return newNode;
    }
    ListNode* cur = head;
    // 遍历链表，找到合适的插入位置（即当前节点的下一个节点的值大于新节点的值）
    while (cur->next != NULL && cur->next->val < val) {
        cur = cur->next;
    }
    // 将新节点插入到当前节点之后
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
    // 遍历链表，直到当前节点的下一个节点为NULL
    while (cur->next != NULL) {
        // 如果当前节点的值与下一个节点的值相等，删除下一个节点
        if (cur->val == cur->next->val) {
            ListNode* temp = cur->next;
            cur->next = cur->next->next;
            free(temp);
        }
        else {
            // 如果值不相等，继续遍历下一个节点
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
            // 如果后续节点的值与当前节点的值相等，删除该后续节点
            if (runner->next->val == ptr->val) {
                ListNode* temp = runner->next;
                runner->next = runner->next->next;
                free(temp);
            }
            else {
                // 如果值不相等，继续遍历后续节点
                runner = runner->next;
            }
        }
        ptr = ptr->next;
    }
    return head;
}

// 9. 两链表合并并排序
ListNode* mergeAndSortTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* dummy = (ListNode*)malloc(sizeof(ListNode));
    dummy->next = NULL;
    ListNode* cur = dummy;
    while (l1 != NULL && l2 != NULL) {
        // 比较两个链表当前节点的值，将较小值的节点连接到新链表中
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
    // 如果l1链表还有剩余节点，将其连接到新链表后面
    if (l1 != NULL) {
        cur->next = l1;
    }
    // 如果l2链表还有剩余节点，将其连接到新链表后面
    if (l2 != NULL) {
        cur->next = l2;
    }
    return dummy->next;
}

// 10. 两链表并集
ListNode* unionOfTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* result = NULL;
    ListNode* ptr1 = l1;
    ListNode* ptr2 = l2;
    // 先将l1链表的所有节点添加到结果链表中（尾插法，不带头结点）
    while (ptr1 != NULL) {
        result = createListTailInsertNoHead(result, ptr1->val);
        ptr1 = ptr1->next;
    }
    // 再将l2链表的所有节点添加到结果链表中（尾插法，不带头结点）
    while (ptr2 != NULL) {
        result = createListTailInsertNoHead(result, ptr2->val);
        ptr2 = ptr2->next;
    }
    // 删除结果链表中的重复元素
    result = removeDuplicatesFromUnsortedList(result);
    return result;
}

// 打印链表函数，用于输出链表中的元素值
void printList(ListNode* head) {
    ListNode* cur = head;
    while (cur != NULL) {
        printf("%d ", cur->val);
        cur = cur->next;
    }
    printf("\n");
}

int main() {
    // 测试各种功能
    // 1. 建立单链表（头插法，不带头结点）测试
    ListNode* head1 = NULL;
    head1 = createListHeadInsertNoHead(head1, 3);
    head1 = createListHeadInsertNoHead(head1, 2);
    head1 = createListHeadInsertNoHead(head1, 1);
    printf("头插法（不带头结点）建立的链表: ");
    printList(head1);

    // 2. 建立单链表（头插法，带头结点）测试
    ListNode* head2 = (ListNode*)malloc(sizeof(ListNode));
    head2->next = NULL;
    head2 = createListHeadInsertWithHead(head2, 3);
    head2 = createListHeadInsertWithHead(head2, 2);
    head2 = createListHeadInsertWithHead(head2, 1);
    printf("头插法（带头结点）建立的链表: ");
    printList(head2->next);

    // 3. 建立单链表（尾插法，不带头结点）测试
    ListNode* head3 = NULL;
    head3 = createListTailInsertNoHead(head3, 1);
    head3 = createListTailInsertNoHead(head3, 2);
    head3 = createListTailInsertNoHead(head3, 3);
    printf("尾插法（不带头结点）建立的链表: ");
    printList(head3);

    // 4. 建立单链表（尾插法，带头结点）测试
    ListNode* head4 = NULL;
    head4 = createListTailInsertWithHead(head4, 1);
    head4 = createListTailInsertWithHead(head4, 2);
    head4 = createListTailInsertWithHead(head4, 3);
    printf("尾插法（带头结点）建立的链表: ");
    printList(head4->next);

    // 5. 逆置单链表测试
    ListNode* reversedHead = reverseList(head3);
    printf("逆置后的链表: ");
    printList(reversedHead);

    // 6. 有序链表插入测试
    ListNode* sortedList = NULL;
    sortedList = insertIntoSortedList(sortedList, 2);
    sortedList = insertIntoSortedList(sortedList, 1);
    sortedList = insertIntoSortedList(sortedList, 3);
    sortedList = insertIntoSortedList(sortedList, 2);
    printf("有序链表插入后的链表: ");
    printList(sortedList);

    // 7. 有序链表删除重复元素测试
    ListNode* uniqueSortedList = removeDuplicatesFromSortedList(sortedList);
    printf("有序链表删除重复元素后的链表: ");
    printList(uniqueSortedList);

    // 8. 无序链表删除重复元素测试
    ListNode* unsortedList = NULL;
    unsortedList = createListTailInsertNoHead(unsortedList, 3);
    unsortedList = createListTailInsertNoHead(unsortedList, 2);
    unsortedList = createListTailInsertNoHead(unsortedList, 3);
    unsortedList = createListTailInsertNoHead(unsortedList, 1);
    ListNode* uniqueUnsortedList = removeDuplicatesFromUnsortedList(unsortedList);
    printf("无序链表删除重复元素后的链表: ");
    printList(uniqueUnsortedList);

    // 9. 两链表合并并排序测试
    ListNode* list1 = NULL;
    list1 = createListTailInsertNoHead(list1, 1);
    list1 = createListTailInsertNoHead(list1, 3);
    list1 = createListTailInsertNoHead(list1, 5);

    ListNode* list2 = NULL;
    list2 = createListTailInsertNoHead(list2, 2);
    list2 = createListTailInsertNoHead(list2, 4);
    list2 = createListTailInsertNoHead(list2, 6);
    ListNode* mergedAndSortedList = mergeAndSortTwoLists(list1, list2);
    printf("两链表合并并排序后的链表: ");
    printList(mergedAndSortedList);

    // 10. 两链表并集测试
    ListNode* unionList = unionOfTwoLists(list1, list2);
    printf("两链表并集后的链表: ");
    printList(unionList);

    return 0;
}