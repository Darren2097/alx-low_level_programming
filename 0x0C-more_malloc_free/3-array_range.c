#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Creates an array of integers
 * @min: minimum value of array
 * @max: maximum value of array
 *
 * Return: returns pointer to new array, else returns NULL if min > max
 */

int *array_range(int min, int max)
{
	int count1, count2, count3, *ar;

	if (min >= max)
	{
		return (NULL);
	}

	count1 = (max - min) + 1;

	ar = malloc(count1);

	if (ar == NULL)
	{
		return (NULL);
	}

	count3 = 0;
	for (count2 = min; count2 <= max; count2++)
	{
		ar[count3] = count2;
		count3++;
	}
	return (ar);
}
