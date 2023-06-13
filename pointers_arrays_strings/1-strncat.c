#include "main.h"

/**
 * <function name goes here> - Entry point
 *
 * <@parameters go here>: Description
 *
 * Return: <insert return value>
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int lengths = _strlen(dest);

	for (i = 0; i <= n; i++;)
	{
		dest[(i + lengths)] = src[i];
	}
	return (dest);
}
