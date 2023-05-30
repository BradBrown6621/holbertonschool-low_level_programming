#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 [Success]
 */

int main(void)
{
	int ascii_1_10 = 48;

	int ascii_a_f = 97;

	while (ascii_1_10 < 58)
	{
		putchar(ascii_1_10);
		ascii_1_10++;
	}

	while (ascii_a_f < 103)
	{
		putchar(ascii_a_f);
		ascii_a_f++;
	}
	putchar(10);
	return (0);
}
