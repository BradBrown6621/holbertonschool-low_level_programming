#include <stdio.h>
#include "function_pointers.h"

/**
 * <function name goes here> - Entry point
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
