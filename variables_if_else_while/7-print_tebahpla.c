#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 [Success]
 */

int main(void)
{
	int ascii = 122;

	while (ascii > 96)
	{
		putchar(ascii);
		ascii--;
	}
	putchar(10);
	return (0);
}
