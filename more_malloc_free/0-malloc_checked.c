#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Checks if malloc runs successfully
 *
 * @b: Malloc(b)
 *
 * Return: ptr [SUCCESS]
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
