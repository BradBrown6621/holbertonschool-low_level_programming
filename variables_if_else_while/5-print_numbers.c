#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 [Success]
 */

int main(void)
{
	int ascii = 48;

	while (ascii < 58)
	{
		putchar(ascii);
		ascii++;
	}
	putchar(10);
	return (0);
}
