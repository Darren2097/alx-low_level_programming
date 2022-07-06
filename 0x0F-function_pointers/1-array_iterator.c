#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;

	if (action != NULL && array != NULL)
	{
		for (count = 0; count < size; count++)
		{
			action(array[count]);
		}
	}
	else
	{
		return;
	}
}
