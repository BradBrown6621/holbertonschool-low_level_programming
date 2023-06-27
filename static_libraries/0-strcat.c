#include "main.h"

/**
 * _strcat - Entry point
 *
 * @dest: Description
 * @src: Desc
 *
 * Return: Always dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int lengths = _strlen(dest);

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[(i + lengths)] = src[i];
	}
	return (dest);
}
