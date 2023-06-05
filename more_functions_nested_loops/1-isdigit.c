#include "main.h"

/**
 * _isdigit - Entry point
 *
 * @c: Integer to be checked if it is a number
 *
 * Return: 1 if true, 0 otherwise
 */

int _isdigit(int c)
{
	if (c > 47)
	{
		if (c < 58)
		{
			return (1);
		}
	}
	return (0);
}
