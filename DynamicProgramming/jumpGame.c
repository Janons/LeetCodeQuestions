#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool canJump(int *nums, int numsSize);

// driver
int main()
{
	return 0;
}

bool canJump(int* nums, int numsSize) {
    int i, previousVal;

    for (i = numsSize - 1; i >= 0; i--) {
        previousVal = numsSize - 1;
        if (nums[i] + i >= previousVal) {
            previousVal = i;
        }
    }

    return previousVal == 0;
}

//[2,3,1,1,4]