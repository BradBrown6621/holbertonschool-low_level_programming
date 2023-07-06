#include "main.h"

/**
 * _memset - Entry point
 *
 * @s: String of bytes
 * @b: Byte to be duplicated across s
 * @n: Total bytes we want changed
 *
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
