#include "main.h"

/**
 * _pow_recursion - Entry point
 *
 * @x: Multiplier
 * @y: Multiplicand
 *
 * Return: Product of x and y (Integer) [Success]
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	x = x * _pow_recursion(x, (y - 1));
	return (x);
}
