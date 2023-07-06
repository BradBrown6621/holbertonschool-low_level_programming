#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Entry point
 *
 * @d: Description
 *
 * Return: <insert return value>
 */

void free_dog(dog_t *d)
{
	free(d);
}
