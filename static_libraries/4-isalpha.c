#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: number to be checked for case
 *
 * Return: 1 if c is an alphabet char, 2 otherwise
 */

int _isalpha(int c)
{
	if ((c < 91 && c > 64) || (c < 123 && c > 96))
	{
		return (1);
	}
	return (0);
}
