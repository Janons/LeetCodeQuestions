#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *removeElements(struct ListNode *head, int val);

int main()
{
    return 0;
}

// 2 pointers solution
struct ListNode *removeElements(struct ListNode *head, int val)
{
    // checking whether the head is NULL or Not
    if (head == NULL)
    {
        return head;
    }

    // checking for 1-1-1 situations
    while (head != NULL && head->val == val)
    {
        head = head->next;
    }

    // 2 pointers solutions
    struct ListNode *curr = head;
    struct ListNode *prev = NULL;

    while (curr->next != NULL)
    {
        if (curr->val == val)
        {
            prev->next = curr->next;
            curr = curr->next;
        }

        else
        {
            prev = curr;
            curr = curr->next;
        }
    }

    return head;
}