#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - pointer function that prints name
 *
 * @name: string to be added
 * @f: pointer function
 *
 * Return: 0 for success
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
