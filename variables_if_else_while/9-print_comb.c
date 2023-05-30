#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 [Success]
 */

int main(void)
{
	int numbers = 48;

	while (numbers < 58)
	{
		putchar(numbers);
		if (numbers != 57)
		{
			putchar(44);
			putchar(32);
		}
		numbers++;
	}
	putchar(10);
	return (0);
}
