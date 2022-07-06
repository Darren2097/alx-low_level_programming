#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: returns index of the first element for which the cmp function does
 * not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int outcome, count;

	if (cmp != NULL && array != NULL)
	{
		if (size <= 0)
			return (-1);

		for (count = 0; count < size; count++)
		{
			outcome = cmp(array[count]);
			if (outcome != 0)
				return (count);
		}
		else
		{
			return (-1);
		}
	}
	else
	{
		return (-1);
	}
}
