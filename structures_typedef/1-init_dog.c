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

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		exit(1);
	}

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
