#include "main.h"
#include <stdio.h>
#include <stdlib.>

/**
 * free_grid - Entry point
 *
 * @grid: A 2d array to be free'd
 * @height: Height of array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);

	return;
}
