#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};
struct ListNode *swapPairs(struct ListNode *head);

int main()
{
    // Creating a linked list with 1->2->3->4
    struct ListNode *head = malloc(sizeof(struct ListNode));
    head->val = 1;
    head->next = malloc(sizeof(struct ListNode));
    head->next->val = 2;
    head->next->next = malloc(sizeof(struct ListNode));
    head->next->next->val = 3;
    head->next->next->next = malloc(sizeof(struct ListNode));
    head->next->next->next->val = 4;
    head->next->next->next->next = NULL;

    head = swapPairs(head);

    struct ListNode *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }

    // Free memory
    while (head != NULL)
    {
        struct ListNode *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

struct ListNode *swapPairs(struct ListNode *head)
{
    struct ListNode *p;
    struct ListNode *q;

    p = head;

    // checking for the condition whether the head is empyt
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // checking whether adjacent values exits

    else
    {
        while (p != NULL)
        {

            q->next = p->next;
            p->next = q;
        }
    }
}