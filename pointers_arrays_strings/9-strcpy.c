#include "main.h"
#include "2-strlen.c"

/**
 * <function name goes here> - Entry point
 *
 * <@parameters go here>: Description
 *
 * Return: <insert return value>
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int lengths = _strlen(src);

	for (i = 0; i < lengths; i++)
	{
		dest[i] = src[i];
	}
	return(dest);
}
