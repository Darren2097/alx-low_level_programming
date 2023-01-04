#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, else -1 if value is not
 * present in array or if array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = 0;
	int low = 0;
	int high = 0;

	if (array == NULL)
		return (-1);

	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (
						array[high] - array[low])) * (
						value - array[low]));
		if (pos > size - 1)
			break;

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;
		else
			return (pos);
	}
	pos = low + (((double)(high - low) / (
					array[high] - array[low])) * (
					value - array[low]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
