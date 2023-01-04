#include "search_algos.h"

/**
 * print_array - prints array
 * @array: array to be prnted
 * @l: index of first element in array
 * @r: index of last element in array
 * 
 * Return: void
 */

void print_array(int *array, size_t m, size_t l)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = l; i < r; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, else -1 if value is not present in
 * array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t m, l, r;

	if (array == NULL)
		return (-1);

	l = 0;
	m = 0;
	r = size - 1;

	while (l <= r)
	{
		print_array(array, l, r);
		m = ((l + r) / 2);
		if (array[m] < value)
		{
			l = m + 1;
		}
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else
		{
			return (m);
		}
	}
	return (-1);
}
