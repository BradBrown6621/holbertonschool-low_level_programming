#include "main.h"

/**
 * _abs - Entry point
 *
 * @n: We will find the absolute value of this number
 *
 * Return: n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n);
}
