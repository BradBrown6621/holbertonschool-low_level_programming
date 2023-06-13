#include "main.h"

/**
 * <function name goes here> - Entry point
 *
 * <@parameters go here>: Description
 *
 * Return: <insert return value>
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int lengths = _strlen(dest);

	for (i = 0; i <= _strlen(src); i++;)
	{
		dest[(i + lengths)] = src[i];
	}
	return (dest);
}
