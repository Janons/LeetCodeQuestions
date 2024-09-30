#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *rotateRight(struct ListNode *head, int k);

int main()
{
    return 0;
}

struct ListNode *rotateRight(struct ListNode *head, int k)
{
    struct ListNode *tail;
    struct ListNode *tailprevious;
    int i = 0;

    // definitons for the tail
    tail->next = head;

    if (head->next == NULL)
    {
        return NULL;
    }

    while (i < k)
    {
        // finding the tail previous
        while (tailprevious->next != tail)
        {
            tailprevious = tailprevious->next;
        }

        // doing the rotation changes
        head = tail;
        tail = tailprevious;
        
        
    }
}