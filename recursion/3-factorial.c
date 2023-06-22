#include "main.h"

/**
 * factorial - Entry point
 *
 * @n: Input number
 *
 * Return: The factorial of n (Integer) [Success]
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	n = n * factorial(n - 1);
	return (n);
}
