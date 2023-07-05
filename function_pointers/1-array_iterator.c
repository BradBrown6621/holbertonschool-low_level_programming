#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Callback function
 *
 * @array: Array to be printed based on (*action)(int)'s code
 * @size: Sizeof array
 * @action: Function pointer to different types of print
 *
 * Return: NOTHING!!!
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
