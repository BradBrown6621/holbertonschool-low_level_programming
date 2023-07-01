#include <stdio.h>
#include "main.h"

/**
 * create_array - Creates an array filled with a character
 *
 * @size: The size of the array to be created
 * @c: The char to fill each slot of newArray with
 *
 * Return: <insert return value>
 */

char *create_array(unsigned int size, char c)
{
	char *newArray;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	newArray = malloc(sizeof(c) * size);

	for (i = 0; i < size; i++)
	{
		newArray[i] = c;
	}

	return (newArray);
}
