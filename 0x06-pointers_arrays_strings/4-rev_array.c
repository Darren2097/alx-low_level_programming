#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: n is the number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int count, front, back;

	for (count = 0; count < n / 2; count++)
	{
		front = a[n - count];
		back = a[count];
		a[count] = front;
		a[n - count] = back;
	}
}
