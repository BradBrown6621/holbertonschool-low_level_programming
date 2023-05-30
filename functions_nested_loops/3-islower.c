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
	if (c < 97)
	{
		_putchar(1);
	} else
	{
		_putchar(0);
	}
	return (c);
}
