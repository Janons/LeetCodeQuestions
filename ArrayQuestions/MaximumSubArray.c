#include <stdio.h>

int MaximumSubArray(int *array);

int main()
{
    return 0;
}

int MaximumSubArray(int *array)
{

    int max_ending = 0, max_so_far = 0;

    for (int i = 0; i < sizeof(array); i++)
    {
        max_ending + (array + i);
        if (max_so_far < max_ending)
        {
            max_so_far = max_ending;
        }
        if (max_ending <0)
        {
            max_ending = 0;
        }
    }
    return max_so_far;
}