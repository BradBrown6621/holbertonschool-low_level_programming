#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: We hold the value to be checked here
 *
 * Return: 1 if positive, 0 if 0, and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	return (0);
}
