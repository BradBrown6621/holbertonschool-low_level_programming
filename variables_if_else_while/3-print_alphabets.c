#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 [Success]
 */

int main(void)
{
	int ascii_l = 97;

	int ascii_U = 65;

	while (ascii_l < 123)
	{
		putchar(ascii_l);
		ascii_l++;
	}

	while (ascii_U < 90)
	{
		putchar(ascii_U);
		ascii_U++;
	}
	putchar(10);
	return (0);
}
