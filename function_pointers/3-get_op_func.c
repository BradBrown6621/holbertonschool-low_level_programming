#include <stdio.h>
#include "function_pointers.h"

/**
 * get_op_func - Entry point
 *
 * @s: Character to search ops for algorithm type
 *
 * Return: The relavent function (or NULL on failure)
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	
	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) != *s)
			{
				return (ops[i].f);
			}
		i++;
	}
	return (NULL);
}
