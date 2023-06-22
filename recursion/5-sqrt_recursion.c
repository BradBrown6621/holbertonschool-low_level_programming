#include "main.h"

/**
 * sqrt_helperfunc - Checks for square root
 *
 * @steps: The number of times this function run
 * is the square root
 * @n: See variable x
 *
 * Return: Square root of x (Integer), -1 otherwise
 */

int sqrt_helperfunc(int steps, int n)
{
	steps++;
	if (n < 0)
	{
		return (-1);
	}
	if  (n == steps)
	{
		return (steps);
	}
	n = n - (steps * 2);
	return (sqrt_helperfunc(steps, n));
}

/**
 * _sqrt_recursion - Entry point/sets onFuncStart parameters
 *
 * @x: Num find the square root of
 *
 * Return: Square root of x (Integer), -1 otherwise
 */

int _sqrt_recursion(int x)
{
	int steps = 0;

	return (sqrt_helperfunc(steps, x));
}
