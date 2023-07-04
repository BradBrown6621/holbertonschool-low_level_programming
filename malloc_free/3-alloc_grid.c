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
	int temp;
	int **gridptr;
	int rows;
	int cols;

	temp = width;
	width = height;
	height = temp;

	gridptr = malloc(sizeof(int*) * width);

	if (gridptr == NULL)
	{
		return (NULL);
	}

	for (rows = 0; rows < width; rows++)
	{
		gridptr[rows] = malloc(sizeof(int) * height);

		if (gridptr[rows] == NULL)
		{
			return (NULL);
		}
	}

	for (rows = 0; rows < width; rows++)
	{
		for (cols = 0; cols < height; cols++)
		{
			gridptr[rows][cols] = 0;
		}
	}
	return (gridptr);
}
