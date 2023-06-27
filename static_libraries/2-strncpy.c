#include <stdio.h>

/**
 * _strncpy - Entry point
 *
 * @dest: Description
 * @src: desc
 * @n: number
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
