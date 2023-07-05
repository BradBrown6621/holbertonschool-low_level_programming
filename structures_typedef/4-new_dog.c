#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

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
	char *dogn = name;
	char *dogo = owner;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	(*ptr).name = dogn;
	(*ptr).age = age;
	(*ptr).owner = dogo;

	return (ptr);
}
