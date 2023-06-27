#include "main.h"

/**
 * _strncat - Entry point
 *
 * @dest: Description
 * @src: the source string
 * @n: the number of bytes to be concatenated
 *
 * Return: Always dest [Success]
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int lengths = _strlen(dest);

	for (i = 0; i <= n; i++)
	{
		dest[(i + lengths)] = src[i];
	}
	return (dest);
}
