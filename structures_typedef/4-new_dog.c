#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * <function name goes here> - Entry point
 *
 * <@parameters go here>: Description
 *
 * Return: <insert return value>
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *dogn = name;
	char *dogo = owner;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	(*ptr).name = dogn;
	(*ptr).age = age;
	(*ptr).owner = dogo;

	return (ptr);
}
