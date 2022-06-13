#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer
 * @n: integer values
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		if (count == n)
		{
			printf("%d", a[count]);
		}
		else
		{
			printf("%d, ", a[count]);
		}
	}
	_putchar('\n');
}
