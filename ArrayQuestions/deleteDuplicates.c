#include <stdio.h>
#include <stdlib.h>

/*prototypes*/
int removeDuplicates(int *nums, int numsSize);

int main()
{

    return 0;
}

int removeDuplicates(int *nums, int numsSize)
{
    int i, j;

    j = 0;
    for (i = 1; i < numsSize; i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}
