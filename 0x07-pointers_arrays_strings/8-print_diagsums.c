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
	int i, j, k, l, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	i = 0;
	j = 0;

	while (i < size)
	{
		sum1 = sum1 + a[i][j];
		i++;
		j++;
	}

	l = size - 1;
	k = 0;

	while (k < size)
	{
		sum2 = sum2 + a[k][l];
		l--;
		k++;
	}

	printf("%d, %d\n", sum1, sum2);
}
