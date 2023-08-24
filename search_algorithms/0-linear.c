#include "search_algos.h"

/**
 * linear_search - Searches array for given value
 *
 * @array: The array to be searched
 * @size: The size of array
 * @value: The value to be searched for in array
 *
 * Return: The first index occurrence of value in array
 */

int linear_search(int *array, size_t size, int value)
{
	int index = 0;
	
	while (!(index > size))
	{
		if (array[index] == value)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
