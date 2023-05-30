#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 [Success]
 */

int main(void)
{
	int letters_l = 97;

	while (letters_l < 123)
	{
		if (letters_l == 101)
		{
			letters_l++;
		} else if (letters_l == 113)
		{
			letters_l++;
		} else
		{
			putchar(letters_l);
			letters_l++;
		}
	}
		putchar(10);
		return (0);
}
