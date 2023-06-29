#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Num of arguments
 *
 * @argv: Pointer to Array of arguments
 *
 * Return: 0 [Success]
 */

int main(int argc, char *argv[])
{
	argv[argc] = NULL;
	printf("%d\n", (argc - 1));
	return (0);
}
