#include "main.h"

/**
 * _memcpy - Entry point
 *
 * @dest: Memory to be copied to
 * @src: Memory to be copied from
 * @n: Total bytes to be copied from src to dest
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
