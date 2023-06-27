#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c: The number to be checked for character case
 *
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64)
	{
		if (c < 91)
		{
			return (1);
		}
	}
	return (0);
}
