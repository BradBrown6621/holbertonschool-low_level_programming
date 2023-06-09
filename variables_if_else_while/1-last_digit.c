#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 [Success]
 */

int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	printf("Last digit of %i is %i and is ", n, lastdigit);

	if (lastdigit > 5)
	{
		printf("greater than 5\n");
	} else if (lastdigit < 6 && lastdigit != 0)
	{
		printf("less than 6 and not 0\n");
	} else
	{
		printf("0\n");
	}
	return (0);
}
