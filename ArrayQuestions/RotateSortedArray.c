#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int search(int *nums, int numsSize, int target);

int main()
{
    return 0;
}

int search(int *nums, int numsSize, int target)
{

    int r = numsSize - 1;
    int l = 0;
    int m, flag = 0, a = m - 1, b = m + 1;

    while (l < r)
    {
        m = (r + l) / 2;

        if (target = nums[m])
        {
            return m;
        }

        if (nums[m] > nums[m + 1])
        {
            flag = 1;
        }

        // check for the neigbhours
        bool isNeighbour = ((target == a) || (target == b)) ? true : false;
        int found = (target == a) ? a : b;

        // returning the neighbour values
        if (isNeighbour)
        {
            return found;
        }

        if (flag)
        {
            if (target < nums[m])
            {
                if (nums[r] < nums[l])
                {
                    l = m + 1;
                }

                else
                {
                    r = m - 1;
                }
            }
        }

        else if (nums[l] > nums[r])
        {
            if (target > nums[m])
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }

//the normal way to  solve the problem
        else{
            

        }
    }
}