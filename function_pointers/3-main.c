#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * <function name goes here> - Entry point
 *
 * <@parameters go here>: Description
 *
 * Return: <insert return value>
 */

int main(int argc, int **argv)
{
	int result;

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	if (argv[2] == "/") || (argv[2] == "%")
	{
		if (argv[3] == 0)
		{
			printf("%s\n", "Error");
		}
		exit(99);
	}

	result = (*get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]);

	printf("%d\n", result);
}
