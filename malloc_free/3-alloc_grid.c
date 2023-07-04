#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array
 *
 * @width: The x axis length of the array
 *
 * @height: The y axis length of the array
 *
 * Return: gridptr [SUCCESS], otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	int **gridptr;
	int rows;
	int cols;

	if ((width == 0 || height == 0))
	{
		return (NULL);
	}

	gridptr = malloc(sizeof(int *) * height);

	if (gridptr == NULL)
	{
		return (NULL);
	}

	for (cols = 0; cols < height; cols++)
	{
		gridptr[cols] = malloc(sizeof(int) * width);

		if (gridptr[cols] == NULL)
		{
			return (NULL);
		}
	}

	for (cols = 0; cols < height; cols++)
	{
		for (rows = 0; rows < width; rows++)
		{
			gridptr[cols][rows] = 0;
		}
	}
	return (gridptr);
}
