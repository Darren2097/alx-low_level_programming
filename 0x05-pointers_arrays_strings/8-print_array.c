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
	int count, last;

	last = n - 1;

	if (n < 0)
	{
		n = 0;
	}
	else
	{

	for (count = 0; count <= n; count++)
	{
		if (count == last)
		{
			printf("%d\n", a[count]);
		}
		else
		{
			printf("%d, ", a[count]);
		}
	}
	}
}
