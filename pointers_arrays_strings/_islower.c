#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: Input value
 *
 * Return: 1 [Lower], 0 [Upper]
 */

int _islower(int c)
{
	if (c > 123 && c < 97)
	{
		return (0);
	}
	if (c < 122 && c > 96)
	{
		return (1);
	}
	return (0);
}
