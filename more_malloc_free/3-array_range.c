#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an array filled with
 * the range of numbers starting from min and
 * ending at max
 *
 * @min: The minimum value of the range
 * @max: The maximum value of the range
 *
 * Return: ptr [SUCCESS]
 */

int *array_range(int min, int max)
{
	int i;
	int write;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * ((max - min) + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	write = min;

	for (i = 0; i <= max - min; i++)
	{
		ptr[i] = write;
		write++;
	}

	return (ptr);
}
