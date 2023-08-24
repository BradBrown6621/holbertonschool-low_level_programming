#include "search_algos.h"

/**
 * binary_search - Searches an array for a value
 *
 * @array: Array to be searched
 * @size: size of array
 * @value: Value to be found
 *
 * Return: First integer occurrence of value in array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle;
	size_t i;

	if (!(array))
	{
		return (-1);
	}

	while (left <= right)
	{
		middle = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%i, ", array[i]);
		}
		printf("%i\n", array[right]);

		if (array[middle] == value)
		{
			return (middle);
		} else if (array[middle] < value)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}
	return (-1);
}
