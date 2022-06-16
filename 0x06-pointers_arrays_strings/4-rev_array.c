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
	int count;

	for (count = n; count <= n; count--)
	{
		_putchar(a[count]);

		if (count > 0)
		{
			_putchar(",");
			_putchar(" ");
		}
	}
}
