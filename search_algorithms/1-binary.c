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

int binary_search(int *array, size_t size, int value);
{
	int *left = 0;
	int *right = size - 1;
	int middle;

	while (left <= right)
	{
		middle = left + (right - left) / 2;

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
	return (-1);
}
