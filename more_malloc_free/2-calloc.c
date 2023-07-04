#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for array
 *
 * @nmemb: Number of members in the array
 * @size: size of each member
 *
 * Return: ptr [SUCCESS]
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *crawler;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	crawler = ptr;

	for (i = 0; i < nmemb; i++)
	{
		*crawler = 0;
		crawler++;
	}

	return (ptr);
}
