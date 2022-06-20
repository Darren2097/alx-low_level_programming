#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of 2 diagonals of a square matrix of integers
 * @a: array of integers
 * @size: size is an integer
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, k, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	i = 0;

	while (i < size)
	{
		sum1 += *(a + i);
		i++;
	}

	k = size - 1;

	while (k >= 0)
	{
		sum2 += *(a + k);
		k--;
	}

	printf("%d, %d\n", sum1, sum2);
}
