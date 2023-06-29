#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Num of arguements
 *
 * @argv: Pointer to array of arguements
 *
 * Return: <insert return value>
 */

int main(int argc, char *argv[])
{
	int multiplier;
	int multiplicand;
	unsigned int result;

	argv[argc] = NULL;

	if (argv[3] != NULL)
	{
		printf("%s\n", "Error");
		return (1);
	}

	multiplier = atoi(argv[1]);
	multiplicand = atoi(argv[2]);

	result = multiplier * multiplicand;
	printf("%d\n", result);

	return (0);
}
