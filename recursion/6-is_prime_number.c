#include "main.h"

/**
 * is_prime_number_helper - Does the recursive checks
 *
 * @n: Number to be checked for primeness
 * @x: Candidate factors for n
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number_helper(int n, int x)
{
	int y = n / x;

	if (x >= (n / 2))
	{
		return (1);
	}
	if (x * y == n)
	{
		return (0);
	}

	return (is_prime_number_helper(n, x + 1));
}

/**
 * is_prime_number - Entry point/Sets initial parameters
 *
 * @n: Number to be checked for \"primeness\"
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int x = 2;

	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_number_helper(n, x));
}
