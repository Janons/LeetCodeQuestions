#include <stdio.h>
#include <stdlib.h>

/*prototypes*/
int removeDuplicates(int *nums, int numsSize);
void *util_malloc(size_t size);

int main()
{
}

int removeDuplicates(int *nums, int numsSize)
{
    int *auxilary_array;
    int i, j;

    auxilary_array = (int *)util_malloc(numsSize);

    for (i = 0; i < numsSize; i++)
    {
        auxilary_array[i] = 1;
        while (nums[j] == nums[i])
        {
            j++;
            auxilary_array[j] = 0;
        }
    }

    /*testing whether the loops works or not*/
}
void *util_malloc(size_t size)
{
    if (size <= 0)
    {
        return NULL;
    }

    void *ptr = malloc(size);

    if (ptr == NULL)
    {
        return NULL;
    }

    return NULL;
}