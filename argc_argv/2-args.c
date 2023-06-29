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
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
