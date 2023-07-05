#include <stdio.h>
#include "function_pointers.h"

/**
 * <function name goes here> - Entry point
 *
 * @array: Array whose indexes will be compare
 * @size; size of the array
 * @cmp: Function pointer to comparison functions
 *
 * Return: Index of array that fulfills (*cmp)(*crawler)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int *crawler;

	crawler = array;

	for (i = 0; i <= size; i++)
	{
		if((*cmp)(*crawler))
		{
			return(i);
		}
		crawler++;
	}
	return(-1);
}
