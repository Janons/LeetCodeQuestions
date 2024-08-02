

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{

    // determining the listsizes

    int list_size1 = sizeof(list1) / sizeof(list1[0]);
    int list_size2 = sizeof(list2) / sizeof(list2[0]);
    int listsizetot = list_size1 + list_size2;

    // create the variables
    int *matrix[2];
    int holder[listsizetot];
    int i,j;

    matrix[0] = list1;
    matrix[1] = list2;

    i = 0;

    while (i < listsizetot)
    {
        //here we must write an algorithm to conduct a research
        


    }
}