#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array of chars and later initializes it with c
 *
 * @size: array size
 * @c: assigned char
 *
 * Return: NULL for failure, pointer to array if successful
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	a = malloc(size * sizeof(char));
	if (size == 0)
	{
		return ("NULL");
	}
	for (b = 0; b < size; b++)
	{
		a[b] = c;
	}
	return (a);
}
