#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Entry point
 *
 * @d: Description
 * @name: Description
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: <insert return value>
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("%s\n", "Ok");
		exit(1);
	}

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
