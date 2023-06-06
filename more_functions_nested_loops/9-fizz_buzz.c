#include <stdio.h>

/**
 * main - Entry point
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
			printf("FizzBuzz");
		} else if (num % 3 == 0)
		{
			printf("Fizz");
		} else if (num % 5 == 0)
		{
			printf("Buzz");
		} else
		{
			printf("%i", num);
		}
		num++;
		if (num < 100)
		{
			printf(" ");
		} else
		{
			printf("\n");
	}
	return (0);
}
