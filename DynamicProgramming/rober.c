#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int rob(int *nums, int numsSize);

int main()

{
	int nums[5] = {2, 7, 9, 3, 1};

	int count = rob(nums, 5);

	fprintf(stdout, "%d", count);

	return 0;
}

int rob(int *nums, int numsSize)
{
	int i, maxNum, tracker;
	int count = 0, flag = -1;
	int l = 0, r = 0;

	// find the maximum in the list by using linear search
	maxNum = -1;
	for (i = 0; i < numsSize; i++)
	{
		if (maxNum < nums[i])
		{
			maxNum = nums[i];
			tracker = i;
		}
	}
	count += maxNum;

	while (l >= 0 && r >= numsSize)
	{
		if (flag == -1)
		{
			r = tracker + 2;
			l = tracker - 2;
		}

		count += r + l;

		if (l == 0)
		{
			flag = 0;
		}
		else if (r >= numsSize)
		{
			flag = 1;
		}
	}

	return count;
}

//[2,7,9,3,1]