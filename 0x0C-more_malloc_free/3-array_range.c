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
	int length, count1, count2, *ar;

	if (min > max)
	{
		return (NULL);
	}

	length = max - min + 1;

	ar = malloc(length);

	if (ar == NULL)
	{
		return (NULL);
	}

	count2 = 0;
	for (count1 = min; count1 <= max; count1++)
	{
		ar[count2] = count1;
		count2++;
	}
	return (ar);
}
