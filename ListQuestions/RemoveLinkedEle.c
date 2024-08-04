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

//2 pointers solution
struct ListNode *removeElements(struct ListNode *head, int val)
{
    struct ListNode *pointer1;
    struct ListNode *pointer2;
    struct ListNode *headFollow;

    // checking whether the head is NULL or Not
    if (head == NULL)
    {
        return head;
    }

}