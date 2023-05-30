#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 [Success]
 */

int main(void)
{
	char string[] = "_putchar";
	unsigned long int i;

	for (i = 0; i < sizeof(string); i++)
	{
		_putchar(i);
	}
	_putchar(10);
	return (0);
}
