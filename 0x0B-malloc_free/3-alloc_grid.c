#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - prints a grid of zeros
 * @width: width of grid
 * @height: height of grid
 *
 * Return: array of integers, else return NULL if width or height is
 * 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ar;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		ar = (int **) malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
		{
			*(ar + j) = 0;
		}
		i++;
	}
	return (ar);
}
