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
	int count;
	int **ar;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ar = (int **) malloc(height * sizeof(int *));

	if (ar == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < height; count++)
	{
		ar[count] = malloc(width * sizeof(int));
		if (ar[count] == NULL)
		{
			while (count >= 0)
			{
				free(ar[count]);
				count--;
			}
			free(ar);
			return (NULL);
		}
	}
	return (ar);
}
