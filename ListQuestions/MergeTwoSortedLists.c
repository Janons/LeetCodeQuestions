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
    if (list1->next == NULL && list2->next == NULL)
    {
        return NULL;
    }

    // the loop to check the values
    while (list1->next != NULL || list2->next != NULL)
    {
        // makng the comparisons

        if (list1->val <= list->val)
        {
            
        }
    }