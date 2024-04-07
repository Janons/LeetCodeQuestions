#include <stdio.h>
#include <stdlib.h>

typedef struct ListN
{
    int val;
    struct ListN *next;
} ListNode;

/*prototypes*/
struct ListNode *removeNthFromEnd(ListNode *head, int n);
int getSize(ListNode *head); // function to get the size of the list

int main()
{
    return 0;
}

struct ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *temp = head;
    ListNode *prev = NULL;

    int i;

    if (head->next == NULL)
    {

        free(head);
        return head;
    }

    /*go over the values to find the head*/

    for (i = 0; temp != NULL && i < n; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    /*removal part*/
    if (temp == NULL)
    {
        fprintf(stdout, "There entered value for n is  incorrect");
    }

    prev->next = temp->next;
    free(temp);
}