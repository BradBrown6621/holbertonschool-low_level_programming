#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 [Success]
 */

int main(void)
{
	int numbers = 0;

	while (numbers < 10)
	{
		putchar(numbers);
		putchar(32);
		putchar(46);
		putchar(32);
		numbers++;
	}
	return (0);
}
