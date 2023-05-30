#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 [Success]
 */

int main(void)
{
	int ascii = 97;

	while (ascii < 123)
	{
		putchar(ascii);
		ascii++;
	}
	putchar(10);
	return (0);
}
