#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Callback function to two possible functions
 *
 * @name: Name to be passed to callback function
 * @f: Callback function
 *
 * Return: NOTHING!!!
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
