#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: number of items
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int count, i;

	count = 0;

	if (n > 0)
	{
		i = n - 1;
	}
	else
	{
		i = n;
	}

	while (i >= 0)
	{
		printf("%d", a[count]);

		if (i > 0)
		{
			printf(", ");
		}
		i--;
		count++;
	}
	printf("\n");
}
