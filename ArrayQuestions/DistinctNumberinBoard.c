#include <stdio.h>
#include <stdlib.h>

int	distinctIntegers(int n)
{
	// optimized solution
	int *table;
	int counter = 0;

	table = (int *)calloc(n + 1, sizeof(int));
	if (table == NULL)
	{
		printf("Memory allocation failed\n");
		return (-1); // Return an error code if memory allocation fails
	}

	table[n] = 1;

	if (n <= 1)
	{
		return (1);
	}

	// Process each number from n to 2
	for (int i = n; i > 1; i--)
	{
		for (int j = 1; j < i; j++)
		{
			if (i % j == 1)
			{
				table[j] = 1;
			}
		}
	}

	// Count the distinct integers
	for (int i = 1; i <= n; i++)
	{
		if (table[i] == 1)
		{
			counter++;
		}
	}

	free(table);
	return (counter);
}