#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2 dimensional grid
 * @height: height of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
	{
		free(grid[count]);
	}
	free(grid);
}
