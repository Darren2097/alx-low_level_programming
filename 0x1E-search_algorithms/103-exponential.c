#include "search_algos.h"
#include <math.h>

/**
 * print_array - prints an array
 * @array: pointer to array
 * @f: index of first element to print
 * @l: index of last element to print
 */

void print_arr(int *array, size_t f, size_t l)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = f; i < l; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}


/**
 * binary_search - search for value in array using Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * @f: first index of array
 * @l: last index of array
 *
 * Return: first index where value is located, else -1 if value is not
 * present in array or if array is NULL
 */

int bnry_search(int *array, int value, int f, int l)
{
	int m = 0;

	if (array == NULL)
		return (-1);


	while (f <= l)
	{
		print_arr(array, f, l);
		m = (f + l) / 2;
		if (array[m] > value)
			l = m - 1;
		else if (array[m] < value)
			f = m + 1;
		else
			return (m);
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, else -1 if value is not
 * present in array or if array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	int bound = 1;
	int f = 0;
	int l = 0;

	if (array == NULL)
		return (-1);

	while (bound < (int)size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	f = bound / 2;
	if (bound < (int)size - 1)
		l = bound;
	else
		l = size + 1;

	printf("Value found between indexes [%d] and [%d]\n", f, l);
	return (bnry_search(array, value, f, l));
}
