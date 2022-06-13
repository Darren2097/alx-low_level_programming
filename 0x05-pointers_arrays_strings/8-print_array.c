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

	count = 0;

	for (n = n; n >= 0; n--)
	{
		printf("%d", a[count]);

		if (n > 0)
		{
			printf(", ");
		}
		count++;
	}
	printf("\n");
}
