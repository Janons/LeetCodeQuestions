#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
    int val;
    struct ListNode *next;
} ListNode;

ListNode *Node(int new_Data)
{
    ListNode *new_Node = (ListNode *)malloc(sizeof(ListNode));
    new_Node->val = new_Data;
    new_Node->next = NULL;
    return new_Node;
}

struct ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    // defining our dummy here
    ListNode dummy;
    dummy.next = NULL;
    dummy.val = -1;

    // pointing the tail to the dummy
    ListNode *tail = &dummy;

    // condition checks

    if (list1 == NULL)
    {
        tail->next = list2;
    }

    else if (list2 == NULL)
    {
        tail->next = list2;
    }

    // the loop to check the values
    while (list1->next != NULL || list2->next != NULL)
    {
        // makng the comparisons

        if (list1->val <= list2->val)
        {
            ListNode *new_Node;
            new_Node = list1;
            list1 = list1->next;
            new_Node->next = tail->next;
            tail->next = new_Node;
        }

        else
        {
            ListNode *new_Node;
            list2 = list2->next;
            new_Node->next = tail->next;
            tail->next = new_Node;
        }
        tail = tail->next;
    }
    return (dummy.next);
}