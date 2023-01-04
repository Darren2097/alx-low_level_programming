#include "search_algos.h"
#include <math.h>

/**
 * check_array - checks an array
 * @array: pointer to array
 * @size: size of array
 * @l: index of first element of array
 * @r: index of last element of array
 * @value: value to match
 *
 * Return: index of match or -1 if no match
 */

int check_array(int *array, size_t size, size_t l, size_t r, int value)
{
	size_t i = 0;

	for (i = l; i <= r && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located else, -1 if value is not
 * present in array or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, j;
	char *str = "Value found between indexes ";

	if (array == NULL)
		return (-1);

	j = sqrt(size);
	for (i = 0; i < size; i += j)
	{
		if (array[i] == value)
		{
			printf("%s[%lu] and [%lu]\n", str, i - j, i);
			return (check_array(array, size, i - j, i, value));
		}
		else if (value < array[i])
		{
			printf("%s[%lu] and [%lu]\n", str, i - j, i);
			return (check_array(array, size, i - j, i, value));
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	printf("%s[%lu] and [%lu]\n", str, i - j, i);
	return (check_array(array, size, i - j, i, value));
}
