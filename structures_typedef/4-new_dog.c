#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include "_strcpy.c"

/**
 * new_dog - Entry point
 *
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: ptr [SUCCESS]
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	(*ptr).name = malloc(sizeof(char) * (_strlen(name) + 1));

	if ((*ptr).name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	(*ptr).owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if ((*ptr).owner == NULL)
	{
		free((*ptr).name);
		free(ptr);
		return (NULL);
	}

	(*ptr).name = _strcpy((*ptr).name, name);

	(*ptr).age = age;

	(*ptr).owner = _strcpy((*ptr).name, name);

	return (ptr);
}
