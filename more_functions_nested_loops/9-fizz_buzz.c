#include <stdio.h>

/**
 * fizz_buzz - Entry point
 *
 * Return: Always 0 [Success]
 */

int main(void)
{
	int num = 1;

	while (num < 101)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("Fizz Buzz ");
		} else if (num % 3 == 0)
		{
			printf("Fizz ");
		} else if (num % 5 == 0)
		{
			printf("Buzz ");
		} else
		{
			printf("%i ", num);
		}
		num++;
	}
	return (0);
}
